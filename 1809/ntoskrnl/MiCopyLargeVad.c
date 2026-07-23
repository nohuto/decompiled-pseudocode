/*
 * XREFs of MiCopyLargeVad @ 0x14085DFB4
 * Callers:
 *     MiMapChildLargePageVads @ 0x14085FB14 (MiMapChildLargePageVads.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 */

__int64 __fastcall MiCopyLargeVad(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3)
{
  _KPROCESS *v4; // r15
  __int64 **VadEvent; // rax
  __int64 v7; // r10
  unsigned int v8; // ebx
  int v9; // ebx
  int v11; // r12d
  int v12; // r13d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdi
  size_t v17; // rsi
  void *v18; // rcx
  struct _MDL *v19; // r15
  void *v20; // [rsp+30h] [rbp-39h] BYREF
  PVOID v21; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR v24; // [rsp+50h] [rbp-19h]
  _BYTE v25[48]; // [rsp+58h] [rbp-11h] BYREF

  v4 = BugCheckParameter1;
  v24 = (ULONG_PTR)BugCheckParameter1;
  VadEvent = MiLocateVadEvent(a2, 16);
  *(_BYTE *)(v7 + 8) = *((_BYTE *)VadEvent + 8);
  *(_QWORD *)(v7 + 16) = VadEvent[2];
  v8 = (*(_DWORD *)(a2 + 48) >> 8) & 0x3F;
  KiStackAttachProcess(v4, 0LL, (__int64)v25);
  v9 = MiMapUserLargePages(a3, v8, 0LL);
  KiUnstackDetachProcess((__int64)v25, 0LL);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = 0;
  v12 = *(_DWORD *)(a3 + 48) & 0x20;
  v13 = 4292870144LL;
  v14 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v15 = v14 << 12;
  v16 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v14 + 1) << 12;
  while ( v16 )
  {
    v17 = v13;
    if ( v16 <= v13 )
      v17 = v16;
    v11 = ExLockUserBuffer(v15, v17, 1, IoReadAccess, &Src, (struct _MDL **)&P);
    if ( v11 < 0 )
      goto LABEL_7;
    KiStackAttachProcess(v4, 0LL, (__int64)v25);
    v18 = (void *)v15;
    if ( v12 )
    {
      v19 = 0LL;
      v20 = (void *)v15;
      v21 = 0LL;
LABEL_14:
      memmove(v18, Src, v17);
      if ( !v12 )
        ExUnlockUserBuffer(v19);
      KiUnstackDetachProcess((__int64)v25, 0LL);
      ExUnlockUserBuffer((struct _MDL *)P);
      v4 = (_KPROCESS *)v24;
      v16 -= v17;
      v15 += v17;
    }
    else
    {
      v11 = ExLockUserBuffer(v15, v17, 1, IoWriteAccess, &v20, (struct _MDL **)&v21);
      if ( v11 >= 0 )
      {
        v19 = (struct _MDL *)v21;
        v18 = v20;
        goto LABEL_14;
      }
      KiUnstackDetachProcess((__int64)v25, 0LL);
      ExUnlockUserBuffer((struct _MDL *)P);
LABEL_7:
      v13 = (v17 >> 1) & 0x7FFFFFFFFFE00000LL;
      if ( v13 < 0x200000 )
        return (unsigned int)v11;
    }
  }
  return (unsigned int)v11;
}

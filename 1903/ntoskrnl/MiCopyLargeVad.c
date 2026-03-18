/*
 * XREFs of MiCopyLargeVad @ 0x140899938
 * Callers:
 *     MiMapChildLargePageVads @ 0x14089B788 (MiMapChildLargePageVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x1400ACF04 (MiLocateVadEvent.c)
 *     MiLocateLockedVadEvent @ 0x1400ACF18 (MiLocateLockedVadEvent.c)
 *     ExUnlockUserBuffer @ 0x140116740 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 */

__int64 __fastcall MiCopyLargeVad(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3)
{
  _KPROCESS *v5; // r12
  __int64 v6; // rdx
  __int64 VadEvent; // rax
  __int64 v8; // r8
  int v9; // ebx
  int v11; // r15d
  int v12; // r13d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdi
  size_t v17; // rsi
  void *v18; // rcx
  struct _MDL *v19; // r12
  void *v20; // [rsp+30h] [rbp-39h] BYREF
  PVOID v21; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR v24; // [rsp+50h] [rbp-19h]
  _BYTE v25[48]; // [rsp+58h] [rbp-11h] BYREF

  v24 = (ULONG_PTR)BugCheckParameter1;
  v5 = BugCheckParameter1;
  memset(v25, 0, sizeof(v25));
  MiLocateLockedVadEvent(a3, 16);
  VadEvent = MiLocateVadEvent(a2, v6);
  *(_BYTE *)(v8 + 8) = *(_BYTE *)(VadEvent + 8);
  *(_QWORD *)(v8 + 16) = *(_QWORD *)(VadEvent + 16);
  KiStackAttachProcess(v5, 0, (__int64)v25);
  v9 = MiMapUserLargePages(a3, 0LL, 0LL);
  KiUnstackDetachProcess((struct _KTHREAD *)v25, 0);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = 0;
  v12 = *(_DWORD *)(a3 + 48) & 0x200;
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
    KiStackAttachProcess(v5, 0, (__int64)v25);
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
      KiUnstackDetachProcess((struct _KTHREAD *)v25, 0);
      ExUnlockUserBuffer((struct _MDL *)P);
      v5 = (_KPROCESS *)v24;
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
      KiUnstackDetachProcess((struct _KTHREAD *)v25, 0);
      ExUnlockUserBuffer((struct _MDL *)P);
LABEL_7:
      v13 = (v17 >> 1) & 0x7FFFFFFFFFE00000LL;
      if ( v13 < 0x200000 )
        return (unsigned int)v11;
    }
  }
  return (unsigned int)v11;
}

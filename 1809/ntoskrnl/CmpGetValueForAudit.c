/*
 * XREFs of CmpGetValueForAudit @ 0x1408016C4
 * Callers:
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 */

__int64 __fastcall CmpGetValueForAudit(__int64 a1, __int64 a2, __int64 a3, ULONG a4)
{
  __int64 (__fastcall *v7)(__int64, __int64, __int64 *); // rax
  unsigned int v8; // r12d
  PVOID v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  PVOID TransientPoolWithTag; // rax
  int v15; // eax
  size_t Size; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  void *Src; // [rsp+58h] [rbp-8h] BYREF
  char v21; // [rsp+90h] [rbp+30h] BYREF

  Src = 0LL;
  v18 = 0xFFFFFFFFLL;
  v19 = 0xFFFFFFFFLL;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(a1 + 8);
  v8 = a2;
  v21 = 0;
  v9 = 0LL;
  v10 = v7(a1, a2, &v19);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073741670;
  v13 = 0;
  LODWORD(Size) = 0;
  if ( !*(_DWORD *)(v10 + 4) )
    goto LABEL_9;
  if ( CmpGetValueData(a1, v8, v10, (unsigned int *)&Size, (__int64)&Src, (__int64)&v21, (__int64)&v18) )
  {
    v13 = Size;
    if ( (_DWORD)Size )
    {
      TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, (unsigned int)Size, a4);
      v9 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
        goto LABEL_5;
      memmove(TransientPoolWithTag, Src, v13);
    }
LABEL_9:
    v15 = *(_DWORD *)(v11 + 12);
    *(_DWORD *)(a3 + 4) = v13;
    v12 = 0;
    *(_DWORD *)a3 = v15;
    *(_QWORD *)(a3 + 8) = v9;
    goto LABEL_10;
  }
LABEL_5:
  v12 = -1073741670;
LABEL_10:
  if ( Src )
  {
    if ( v21 )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v18);
  }
  (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v19);
  return v12;
}

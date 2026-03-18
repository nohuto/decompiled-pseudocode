/*
 * XREFs of PspReturnResourceQuota @ 0x14012A86C
 * Callers:
 *     PspReturnQuota @ 0x1400BE9B0 (PspReturnQuota.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PspDereferenceQuotaBlock @ 0x1405CACF4 (PspDereferenceQuotaBlock.c)
 *     ObpFreeObject @ 0x140645F60 (ObpFreeObject.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x14012A9A8 (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x14012ABCC (PspLockQuotaExpansion.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PspReturnResourceQuota(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  int *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v8 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion(v8, &v12);
  if ( a3 )
    (*((void (__fastcall **)(_QWORD, __int64))v8 + 4))(a1, a3);
  if ( a4 )
  {
    v9 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v9 + 8) != a2 + 80 || (v11 = *(_QWORD **)(a2 + 88), *v11 != a2 + 80) )
      __fastfail(3u);
    *v11 = v9;
    *(_QWORD *)(v9 + 8) = v11;
  }
  LOBYTE(v9) = v12;
  return PspUnlockQuotaExpansion(v8, v9);
}

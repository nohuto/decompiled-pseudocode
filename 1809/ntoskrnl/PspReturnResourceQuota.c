/*
 * XREFs of PspReturnResourceQuota @ 0x14012A95C
 * Callers:
 *     PspReturnQuota @ 0x1400BE910 (PspReturnQuota.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspDereferenceQuotaBlock @ 0x1405CBCF4 (PspDereferenceQuotaBlock.c)
 *     ObpFreeObject @ 0x140646F60 (ObpFreeObject.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x14012AA98 (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x14012ACBC (PspLockQuotaExpansion.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
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

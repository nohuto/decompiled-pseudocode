/*
 * XREFs of PspExpandLimit @ 0x1402E9B7C
 * Callers:
 *     PspInitializeQuotaBlock @ 0x14075F580 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x14012AA98 (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x14012ACBC (PspLockQuotaExpansion.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall PspExpandLimit(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v6; // rbp
  KIRQL v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion((__int64)v6, &v9);
  LOBYTE(a4) = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))v6 + 3))(a1, 0LL, a3, a4);
  PspUnlockQuotaExpansion((__int64)v6, v9);
  return a4;
}

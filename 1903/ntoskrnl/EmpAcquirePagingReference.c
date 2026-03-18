/*
 * XREFs of EmpAcquirePagingReference @ 0x140595698
 * Callers:
 *     EmClientRuleEvaluate @ 0x140595590 (EmClientRuleEvaluate.c)
 *     EmClientQueryRuleState @ 0x1405957C0 (EmClientQueryRuleState.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // bl

  v0 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  if ( dword_1404634A8 < 0 )
  {
    v0 = 1;
    dword_1404634A8 ^= (dword_1404634A8 ^ (dword_1404634A8 + 1)) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}

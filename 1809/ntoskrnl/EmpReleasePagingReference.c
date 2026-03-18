/*
 * XREFs of EmpReleasePagingReference @ 0x140565618
 * Callers:
 *     EmClientQueryRuleState @ 0x1405653B0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x1405654A0 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 */

__int64 EmpReleasePagingReference()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  dword_140437868 ^= (dword_140437868 ^ (dword_140437868 - 1)) & 0x7FFFFFFF;
  if ( (dword_140437868 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}

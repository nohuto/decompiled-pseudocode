/*
 * XREFs of PopStatsNotifyPowerRequestLpePhase @ 0x14087C4CC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE450 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PoArmStopWatchCollection @ 0x1402E93C0 (PoArmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x1402E9410 (PoIsArmedStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x1402E9494 (PoUnarmStopWatchCollection.c)
 *     PopLogPowerRequestAction @ 0x14058AC44 (PopLogPowerRequestAction.c)
 */

void __fastcall PopStatsNotifyPowerRequestLpePhase(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  if ( a1 )
  {
    PopLogPowerRequestAction("LPE Phase, CS Entry", 0LL, 0LL);
    if ( PoIsArmedStopWatchCollection((__int64)&ExecutionRequiredStopWatchCollection) )
      PoUnarmStopWatchCollection(&ExecutionRequiredStopWatchCollection);
  }
  else
  {
    PopLogPowerRequestAction("LPE Phase, CS Exit", 0LL, 0LL);
    PoArmStopWatchCollection(&ExecutionRequiredStopWatchCollection);
  }
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}

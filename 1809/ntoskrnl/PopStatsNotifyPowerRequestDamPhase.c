/*
 * XREFs of PopStatsNotifyPowerRequestDamPhase @ 0x14087C450
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

void __fastcall PopStatsNotifyPowerRequestDamPhase(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  if ( a1 )
  {
    PopLogPowerRequestAction("DAM Phase, CS Entry", 0LL, 0LL);
    PoArmStopWatchCollection(&ExecutionRequiredStopWatchCollection);
  }
  else if ( PoIsArmedStopWatchCollection((__int64)&ExecutionRequiredStopWatchCollection) )
  {
    PopLogPowerRequestAction("DAM Phase, CS Exit", 0LL, 0LL);
    PoUnarmStopWatchCollection(&ExecutionRequiredStopWatchCollection);
  }
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}

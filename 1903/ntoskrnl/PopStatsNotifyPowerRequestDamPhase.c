/*
 * XREFs of PopStatsNotifyPowerRequestDamPhase @ 0x1408B77E8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FB070 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PoArmStopWatchCollection @ 0x140306798 (PoArmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x1403067E8 (PoIsArmedStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x14030686C (PoUnarmStopWatchCollection.c)
 *     PopLogPowerRequestAction @ 0x14069FE80 (PopLogPowerRequestAction.c)
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

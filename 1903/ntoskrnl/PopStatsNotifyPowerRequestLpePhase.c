/*
 * XREFs of PopStatsNotifyPowerRequestLpePhase @ 0x1408B7864
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

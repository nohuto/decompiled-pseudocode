/*
 * XREFs of PopStatsNotifyPowerRequestLpePhase @ 0x1408B7134
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FAB20 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PoArmStopWatchCollection @ 0x140306248 (PoArmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x140306298 (PoIsArmedStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x14030631C (PoUnarmStopWatchCollection.c)
 *     PopLogPowerRequestAction @ 0x140671F98 (PopLogPowerRequestAction.c)
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

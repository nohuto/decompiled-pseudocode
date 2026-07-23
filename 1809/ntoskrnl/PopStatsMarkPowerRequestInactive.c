/*
 * XREFs of PopStatsMarkPowerRequestInactive @ 0x14058966C
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14058A99C (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PoPauseStopWatch @ 0x140001F30 (PoPauseStopWatch.c)
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopGetStopWatchByRequestType @ 0x1405898A4 (PopGetStopWatchByRequestType.c)
 *     PopLogPowerRequestAction @ 0x14058AC44 (PopLogPowerRequestAction.c)
 */

void __fastcall PopStatsMarkPowerRequestInactive(__int64 a1)
{
  __int64 v2; // rcx
  __int64 StopWatchByRequestType; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(v2, 3LL);
    if ( StopWatchByRequestType )
      PoPauseStopWatch(StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Clear");
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}

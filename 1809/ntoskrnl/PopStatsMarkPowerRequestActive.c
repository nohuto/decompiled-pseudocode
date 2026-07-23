/*
 * XREFs of PopStatsMarkPowerRequestActive @ 0x140589904
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14058A99C (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PoStartStopWatch @ 0x140001F80 (PoStartStopWatch.c)
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopGetStopWatchByRequestType @ 0x1405898A4 (PopGetStopWatchByRequestType.c)
 *     PopLogPowerRequestAction @ 0x14058AC44 (PopLogPowerRequestAction.c)
 */

void __fastcall PopStatsMarkPowerRequestActive(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *StopWatchByRequestType; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(v2, 3);
    if ( StopWatchByRequestType )
      PoStartStopWatch((__int64)StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Set");
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}

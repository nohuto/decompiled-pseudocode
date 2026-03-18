/*
 * XREFs of PopStatsMarkPowerRequestActive @ 0x14069E364
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406A0280 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PoStartStopWatch @ 0x1400EBCFC (PoStartStopWatch.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopGetStopWatchByRequestType @ 0x14069E304 (PopGetStopWatchByRequestType.c)
 *     PopLogPowerRequestAction @ 0x14069FE80 (PopLogPowerRequestAction.c)
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

/*
 * XREFs of PopStatsMarkPowerRequestActive @ 0x1406E146C
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x140671CA0 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PoStartStopWatch @ 0x140132CB4 (PoStartStopWatch.c)
 *     PopLogPowerRequestAction @ 0x140671F98 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x1406E15F4 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestActive(__int64 a1)
{
  __int64 v2; // rcx
  __int64 StopWatchByRequestType; // rax
  int v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 3;
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(v2, 3LL);
    if ( StopWatchByRequestType )
      PoStartStopWatch(StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Set", a1, v4);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}

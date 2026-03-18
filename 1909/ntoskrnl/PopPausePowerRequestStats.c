/*
 * XREFs of PopPausePowerRequestStats @ 0x1406E14DC
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x140671F10 (PopStatsDeletePowerRequest.c)
 * Callees:
 *     PoPauseStopWatch @ 0x140132C74 (PoPauseStopWatch.c)
 *     PoIsRunningStopWatch @ 0x140132E0C (PoIsRunningStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x1406E15F4 (PopGetStopWatchByRequestType.c)
 */

char __fastcall PopPausePowerRequestStats(__int64 a1)
{
  unsigned int i; // ebx
  __int64 StopWatchByRequestType; // rax
  __int64 v4; // rcx

  for ( i = 0; i < 4; ++i )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(a1, i);
    if ( StopWatchByRequestType )
    {
      LOBYTE(StopWatchByRequestType) = PoIsRunningStopWatch(StopWatchByRequestType);
      if ( (_BYTE)StopWatchByRequestType )
        LOBYTE(StopWatchByRequestType) = PoPauseStopWatch(v4);
    }
  }
  return StopWatchByRequestType;
}

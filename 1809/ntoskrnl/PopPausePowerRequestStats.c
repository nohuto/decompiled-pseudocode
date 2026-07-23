/*
 * XREFs of PopPausePowerRequestStats @ 0x14058978C
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14058ABBC (PopStatsDeletePowerRequest.c)
 * Callees:
 *     PoIsRunningStopWatch @ 0x140001DB4 (PoIsRunningStopWatch.c)
 *     PoPauseStopWatch @ 0x140001F30 (PoPauseStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x1405898A4 (PopGetStopWatchByRequestType.c)
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

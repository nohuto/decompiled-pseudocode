/*
 * XREFs of PopPausePowerRequestStats @ 0x14069E1EC
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14069FDF8 (PopStatsDeletePowerRequest.c)
 * Callees:
 *     PoIsRunningStopWatch @ 0x1400EB40C (PoIsRunningStopWatch.c)
 *     PoPauseStopWatch @ 0x1400EBC0C (PoPauseStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x14069E304 (PopGetStopWatchByRequestType.c)
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

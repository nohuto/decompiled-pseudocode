/*
 * XREFs of PopStatsNotifyAudioState @ 0x1406DC96C
 * Callers:
 *     PopPowerRequestNotifyAudioStateChanged @ 0x140141FA0 (PopPowerRequestNotifyAudioStateChanged.c)
 * Callees:
 *     PoPauseStopWatch @ 0x140001F30 (PoPauseStopWatch.c)
 *     PoStartStopWatch @ 0x140001F80 (PoStartStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x1405898A4 (PopGetStopWatchByRequestType.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1406DC9D8 (PopAvlFindOrMakeStatsForAudio.c)
 */

char __fastcall PopStatsNotifyAudioState(char a1)
{
  volatile signed __int32 *StatsForAudio; // rax
  volatile signed __int32 *v3; // rbx
  signed __int32 v4; // ecx

  StatsForAudio = (volatile signed __int32 *)PopAvlFindOrMakeStatsForAudio();
  v3 = StatsForAudio;
  if ( StatsForAudio )
  {
    StatsForAudio = (volatile signed __int32 *)PopGetStopWatchByRequestType((__int64)StatsForAudio, 3);
    if ( StatsForAudio )
    {
      v4 = _InterlockedExchangeAdd(v3, 0);
      if ( a1 )
      {
        if ( !v4 )
        {
          _InterlockedIncrement(v3);
          LOBYTE(StatsForAudio) = PoStartStopWatch((__int64)StatsForAudio);
        }
      }
      else if ( v4 == 1 )
      {
        _InterlockedDecrement(v3);
        LOBYTE(StatsForAudio) = PoPauseStopWatch((__int64)StatsForAudio);
      }
    }
  }
  return (char)StatsForAudio;
}

/*
 * XREFs of PopStatsNotifyAudioState @ 0x14072017C
 * Callers:
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14015D014 (PopPowerRequestNotifyAudioStateChanged.c)
 * Callees:
 *     PoPauseStopWatch @ 0x140132C74 (PoPauseStopWatch.c)
 *     PoStartStopWatch @ 0x140132CB4 (PoStartStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x1406E15F4 (PopGetStopWatchByRequestType.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1407201E8 (PopAvlFindOrMakeStatsForAudio.c)
 */

volatile signed __int32 *__fastcall PopStatsNotifyAudioState(char a1)
{
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v3; // rbx
  signed __int32 v4; // ecx

  result = (volatile signed __int32 *)PopAvlFindOrMakeStatsForAudio();
  v3 = result;
  if ( result )
  {
    result = (volatile signed __int32 *)PopGetStopWatchByRequestType((__int64)result, 3);
    if ( result )
    {
      v4 = _InterlockedExchangeAdd(v3, 0);
      if ( a1 )
      {
        if ( !v4 )
        {
          _InterlockedIncrement(v3);
          return (volatile signed __int32 *)PoStartStopWatch((__int64)result);
        }
      }
      else if ( v4 == 1 )
      {
        _InterlockedDecrement(v3);
        return (volatile signed __int32 *)PoPauseStopWatch((__int64)result);
      }
    }
  }
  return result;
}

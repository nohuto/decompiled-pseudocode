/*
 * XREFs of PoPauseStopWatch @ 0x140001F30
 * Callers:
 *     PopStatsMarkPowerRequestInactive @ 0x14058966C (PopStatsMarkPowerRequestInactive.c)
 *     PopPausePowerRequestStats @ 0x14058978C (PopPausePowerRequestStats.c)
 *     PopStatsNotifyAudioState @ 0x1406DC96C (PopStatsNotifyAudioState.c)
 * Callees:
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x140001E98 (PopInternalUpdateActiveStopWatchesCollectionState.c)
 *     PopInternalUpdateStopWatchState @ 0x140001EF8 (PopInternalUpdateStopWatchState.c)
 */

char __fastcall PoPauseStopWatch(__int64 a1)
{
  bool v1; // zf
  signed __int32 v2; // eax
  __int64 *v3; // r10
  __int64 v4; // rcx
  unsigned int v5; // r11d

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF);
  v1 = v2 == 1;
  LOBYTE(v2) = v2 - 1;
  if ( v1 )
  {
    PopInternalUpdateStopWatchState(a1);
    v4 = *v3;
    v2 = v5 + _InterlockedExchangeAdd((volatile signed __int32 *)(*v3 + 48), v5);
    if ( !v2 )
      LOBYTE(v2) = PopInternalUpdateActiveStopWatchesCollectionState(v4);
  }
  return v2;
}

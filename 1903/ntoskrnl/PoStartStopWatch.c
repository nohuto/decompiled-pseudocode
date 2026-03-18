/*
 * XREFs of PoStartStopWatch @ 0x1400EBCFC
 * Callers:
 *     PopStatsMarkPowerRequestActive @ 0x14069E364 (PopStatsMarkPowerRequestActive.c)
 *     PopStatsNotifyAudioState @ 0x14071E2EC (PopStatsNotifyAudioState.c)
 * Callees:
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x1400EB3D8 (PopInternalUpdateActiveStopWatchesCollectionState.c)
 *     PopInternalUpdateStopWatchState @ 0x1400EB4F0 (PopInternalUpdateStopWatchState.c)
 */

char __fastcall PoStartStopWatch(__int64 a1)
{
  signed __int32 v1; // eax
  __int64 *v2; // r10
  __int64 v3; // rcx
  unsigned int v4; // r11d

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 1u);
  if ( v1 == 1 )
  {
    PopInternalUpdateStopWatchState(a1);
    v3 = *v2;
    v1 = v4 + _InterlockedExchangeAdd((volatile signed __int32 *)(*v2 + 48), v4);
    if ( v1 == v4 )
      LOBYTE(v1) = PopInternalUpdateActiveStopWatchesCollectionState(v3);
  }
  return v1;
}

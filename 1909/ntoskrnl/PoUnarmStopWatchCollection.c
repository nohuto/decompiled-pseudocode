/*
 * XREFs of PoUnarmStopWatchCollection @ 0x14030631C
 * Callers:
 *     PopStatsNotifyPowerRequestDamPhase @ 0x1408B70B8 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x1408B7134 (PopStatsNotifyPowerRequestLpePhase.c)
 * Callees:
 *     PopInternalUpdateStopWatchState @ 0x140132D00 (PopInternalUpdateStopWatchState.c)
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x140132E1C (PopInternalUpdateActiveStopWatchesCollectionState.c)
 */

char __fastcall PoUnarmStopWatchCollection(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  char v3; // bl
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  __int64 *v6; // r11

  v1 = a1[2];
  v2 = (__int64)a1;
  if ( !v1 )
    return 0;
  v3 = 1;
  v4 = *a1;
  v5 = MEMORY[0xFFFFF78000000008] + a1[3] - v1;
  if ( v5 < a1[3] )
    v5 = -1LL;
  a1[2] = 0LL;
  a1[3] = v5;
  while ( v4 != v2 )
  {
    PopInternalUpdateStopWatchState(v4 - 8);
    v4 = *v6;
  }
  PopInternalUpdateActiveStopWatchesCollectionState(v2);
  return v3;
}

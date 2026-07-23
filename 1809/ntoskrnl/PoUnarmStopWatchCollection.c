/*
 * XREFs of PoUnarmStopWatchCollection @ 0x1402E9494
 * Callers:
 *     PopStatsNotifyPowerRequestDamPhase @ 0x14087C450 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x14087C4CC (PopStatsNotifyPowerRequestLpePhase.c)
 * Callees:
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x140001E98 (PopInternalUpdateActiveStopWatchesCollectionState.c)
 *     PopInternalUpdateStopWatchState @ 0x140001EF8 (PopInternalUpdateStopWatchState.c)
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

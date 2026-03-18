/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x1403067E8
 * Callers:
 *     PopStatsNotifyPowerRequestDamPhase @ 0x1408B77E8 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x1408B7864 (PopStatsNotifyPowerRequestLpePhase.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}

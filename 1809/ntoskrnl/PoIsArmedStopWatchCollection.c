/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x1402E9120
 * Callers:
 *     PopStatsNotifyPowerRequestDamPhase @ 0x14087B210 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x14087B28C (PopStatsNotifyPowerRequestLpePhase.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}

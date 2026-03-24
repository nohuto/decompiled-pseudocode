/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x1402E9220
 * Callers:
 *     PopStatsNotifyPowerRequestDamPhase @ 0x14087B1F0 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x14087B26C (PopStatsNotifyPowerRequestLpePhase.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}

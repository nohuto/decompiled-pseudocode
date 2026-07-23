/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x1402E9410
 * Callers:
 *     PopStatsNotifyPowerRequestDamPhase @ 0x14087C450 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x14087C4CC (PopStatsNotifyPowerRequestLpePhase.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}

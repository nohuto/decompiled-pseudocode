/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x140306298
 * Callers:
 *     PopStatsNotifyPowerRequestDamPhase @ 0x1408B70B8 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x1408B7134 (PopStatsNotifyPowerRequestLpePhase.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}

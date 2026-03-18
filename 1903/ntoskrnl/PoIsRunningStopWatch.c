/*
 * XREFs of PoIsRunningStopWatch @ 0x1400EB40C
 * Callers:
 *     PopPausePowerRequestStats @ 0x14069E1EC (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}

/*
 * XREFs of PoIsRunningStopWatch @ 0x140001DB4
 * Callers:
 *     PopPausePowerRequestStats @ 0x14058878C (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}

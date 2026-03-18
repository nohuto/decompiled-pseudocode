/*
 * XREFs of PoIsRunningStopWatch @ 0x140132E0C
 * Callers:
 *     PopPausePowerRequestStats @ 0x1406E14DC (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}

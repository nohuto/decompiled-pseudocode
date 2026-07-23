/*
 * XREFs of PoIsInitializedStopWatch @ 0x140001F70
 * Callers:
 *     PopGetStopWatchByRequestType @ 0x1405898A4 (PopGetStopWatchByRequestType.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsInitializedStopWatch(_QWORD *a1)
{
  return *a1 != 0LL;
}

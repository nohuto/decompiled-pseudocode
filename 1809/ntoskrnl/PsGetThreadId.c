/*
 * XREFs of PsGetThreadId @ 0x1401228B0
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x140573A7C (PfpScenCtxServiceThreadSet.c)
 *     PfSnBeginTrace @ 0x140668544 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x140845790 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}

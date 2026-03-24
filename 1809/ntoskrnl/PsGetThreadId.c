/*
 * XREFs of PsGetThreadId @ 0x1401228D0
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x140573A7C (PfpScenCtxServiceThreadSet.c)
 *     PfSnBeginTrace @ 0x140668524 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x140845770 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}

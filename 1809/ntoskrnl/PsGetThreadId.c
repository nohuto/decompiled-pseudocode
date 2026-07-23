/*
 * XREFs of PsGetThreadId @ 0x1401229A0
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x140574A7C (PfpScenCtxServiceThreadSet.c)
 *     PfSnBeginTrace @ 0x1406696E4 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x1408469D0 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}

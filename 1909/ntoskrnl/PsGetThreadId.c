/*
 * XREFs of PsGetThreadId @ 0x14011FEE0
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x1405A3124 (PfpScenCtxServiceThreadSet.c)
 *     PsOpenThread @ 0x140678030 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x1406D9D68 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x140880460 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}

/*
 * XREFs of PsGetThreadId @ 0x14011F190
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x1405A3144 (PfpScenCtxServiceThreadSet.c)
 *     PsOpenThread @ 0x140672920 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x1406D9C78 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}

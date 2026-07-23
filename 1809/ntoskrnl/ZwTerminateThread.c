/*
 * XREFs of ZwTerminateThread @ 0x1401B8D50
 * Callers:
 *     KiParkUmsThread @ 0x14029D8B0 (KiParkUmsThread.c)
 *     RtlAssert @ 0x1402EFA50 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1408469D0 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}

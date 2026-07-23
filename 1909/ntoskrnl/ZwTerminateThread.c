/*
 * XREFs of ZwTerminateThread @ 0x1401C16B0
 * Callers:
 *     KiParkUmsThread @ 0x1402B5E90 (KiParkUmsThread.c)
 *     RtlAssert @ 0x14030DE60 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x140880460 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}

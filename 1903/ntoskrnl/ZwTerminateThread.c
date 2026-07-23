/*
 * XREFs of ZwTerminateThread @ 0x1401C0B30
 * Callers:
 *     KiParkUmsThread @ 0x1402B6130 (KiParkUmsThread.c)
 *     RtlAssert @ 0x14030E410 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}

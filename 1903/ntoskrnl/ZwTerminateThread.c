/*
 * XREFs of ZwTerminateThread @ 0x1401C0B30
 * Callers:
 *     KiParkUmsThread @ 0x1402B6130 (KiParkUmsThread.c)
 *     RtlAssert @ 0x14030E410 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&ExitStatus, v2);
}

/*
 * XREFs of ZwTerminateThread @ 0x1401B8BF0
 * Callers:
 *     KiParkUmsThread @ 0x14029D6C0 (KiParkUmsThread.c)
 *     RtlAssert @ 0x1402EF860 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x140845770 (KiSwapToUmsThread.c)
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

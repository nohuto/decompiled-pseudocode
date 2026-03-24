/*
 * XREFs of ZwTerminateProcess @ 0x1401B8710
 * Callers:
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x14029D6C0 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x140845770 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x14088D580 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ExitStatus, v2);
}

/*
 * XREFs of ZwTerminateProcess @ 0x1401B8870
 * Callers:
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x14029D8B0 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1408469D0 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

/*
 * XREFs of ZwTerminateProcess @ 0x1401C11D0
 * Callers:
 *     KiDispatchException @ 0x1400161A0 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x1402B5E90 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x140880460 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x1408CB3F0 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

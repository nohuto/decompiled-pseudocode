/*
 * XREFs of ZwSetEvent @ 0x1401C0E10
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F1F00 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x1408C5264 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, PreviousState, v2);
}

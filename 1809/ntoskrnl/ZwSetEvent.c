/*
 * XREFs of ZwSetEvent @ 0x1401B84B0
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140681F20 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x140888854 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}

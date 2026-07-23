/*
 * XREFs of ZwSetDefaultHardErrorPort @ 0x1401BB3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetDefaultHardErrorPort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

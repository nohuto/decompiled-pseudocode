/*
 * XREFs of ZwImpersonateClientOfPort @ 0x1401B86D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE ClientMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

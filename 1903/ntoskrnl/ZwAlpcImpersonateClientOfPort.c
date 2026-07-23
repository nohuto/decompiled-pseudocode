/*
 * XREFs of ZwAlpcImpersonateClientOfPort @ 0x1401C1150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

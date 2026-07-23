/*
 * XREFs of ZwRegisterThreadTerminatePort @ 0x1401C3930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRegisterThreadTerminatePort(HANDLE TerminationPort)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TerminationPort);
}

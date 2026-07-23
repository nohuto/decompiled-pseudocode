/*
 * XREFs of ZwAlpcDisconnectPort @ 0x1401C1C90
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

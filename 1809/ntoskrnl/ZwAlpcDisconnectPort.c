/*
 * XREFs of ZwAlpcDisconnectPort @ 0x1401B9330
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140703740 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

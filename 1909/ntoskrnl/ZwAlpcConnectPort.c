/*
 * XREFs of ZwAlpcConnectPort @ 0x1401C1B30
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSID RequiredServerSid,
        PPORT_MESSAGE ConnectionMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

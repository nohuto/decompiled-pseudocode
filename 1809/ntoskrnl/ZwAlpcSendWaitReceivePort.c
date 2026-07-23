/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1401B9430
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400035C0 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x140004B48 (PopUmpoProcessMessages.c)
 *     PopMonitorProcessLoop @ 0x140761708 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

/*
 * XREFs of NtReplyWaitReceivePort @ 0x140645B10
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x140645B30 (NtReplyWaitReceivePortEx.c)
 */

NTSTATUS __stdcall NtReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  return NtReplyWaitReceivePortEx(PortHandle, PortContext, ReplyMessage, ReceiveMessage, 0LL);
}

/*
 * XREFs of NtReplyWaitReceivePort @ 0x140659B50
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x140659B70 (NtReplyWaitReceivePortEx.c)
 */

NTSTATUS __stdcall NtReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  return NtReplyWaitReceivePortEx(PortHandle, PortContext, ReplyMessage, ReceiveMessage, 0LL);
}

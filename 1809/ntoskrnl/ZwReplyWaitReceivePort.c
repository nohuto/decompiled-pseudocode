/*
 * XREFs of ZwReplyWaitReceivePort @ 0x1401B82D0
 * Callers:
 *     SepRmCommandServerThread @ 0x1407402C0 (SepRmCommandServerThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, PortContext, ReplyMessage);
}

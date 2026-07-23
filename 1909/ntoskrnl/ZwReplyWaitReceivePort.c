/*
 * XREFs of ZwReplyWaitReceivePort @ 0x1401C0DB0
 * Callers:
 *     SepRmCommandServerThread @ 0x1407683E0 (SepRmCommandServerThread.c)
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
  return KiServiceInternal(PortHandle);
}

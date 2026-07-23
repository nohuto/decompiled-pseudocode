/*
 * XREFs of ZwReplyWaitReceivePort @ 0x1401C0230
 * Callers:
 *     SepRmCommandServerThread @ 0x1407639D0 (SepRmCommandServerThread.c)
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

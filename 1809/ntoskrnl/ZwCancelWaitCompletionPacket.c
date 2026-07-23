/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x1401B9550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WaitCompletionPacketHandle);
}

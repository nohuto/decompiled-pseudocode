/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1401C0510
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14013286C (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

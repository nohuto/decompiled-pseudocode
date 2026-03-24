/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1401B85D0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14012FD64 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, LpcReply, LpcRequest);
}

/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1401B85B0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14012FD44 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, LpcReply, LpcRequest);
}

/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1401B8730
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14012FE34 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

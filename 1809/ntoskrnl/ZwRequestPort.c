/*
 * XREFs of ZwRequestPort @ 0x1401BB0F0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14012FE34 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE LpcMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

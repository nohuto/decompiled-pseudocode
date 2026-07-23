/*
 * XREFs of ZwCompleteConnectPort @ 0x1401B9670
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407415E4 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCompleteConnectPort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

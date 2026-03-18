/*
 * XREFs of ZwCompleteConnectPort @ 0x1401C1450
 * Callers:
 *     SepRmLsaConnectRequest @ 0x140763B3C (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCompleteConnectPort(HANDLE PortHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, v1, v2);
}

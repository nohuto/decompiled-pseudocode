/*
 * XREFs of UsbhBusPnpStop @ 0x1C0048220
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C001B760 (UsbhDispatch_BusEvent.c)
 *     UsbhDisableHardReset @ 0x1C004C7D0 (UsbhDisableHardReset.c)
 */

__int64 __fastcall UsbhBusPnpStop(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  UsbhDisableHardReset();
  return UsbhDispatch_BusEvent(a1, a2, 3);
}

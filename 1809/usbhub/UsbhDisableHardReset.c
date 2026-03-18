/*
 * XREFs of UsbhDisableHardReset @ 0x1C004AE58
 * Callers:
 *     UsbhBusPnpStop @ 0x1C00469A0 (UsbhBusPnpStop.c)
 *     UsbhAsyncStop @ 0x1C004F3F0 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004FB10 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C00506C0 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001BF30 (UsbhDispatch_HardResetEvent.c)
 */

__int64 __fastcall UsbhDisableHardReset(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192749, 0LL, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, v1 + 2);
}

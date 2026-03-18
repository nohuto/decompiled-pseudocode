/*
 * XREFs of UsbhSyncBusDisconnect @ 0x1C0042AB8
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0004490 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x1C004AF18 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C004B5B4 (Usbh_HRS_Queued.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C001B060 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusDisconnect(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt((__int64)a1);
  Log((__int64)a1, 2048, 1111774014, 0LL, 0LL);
  v5 = UsbhDispatch_BusEvent(a1, a2, v4 + 11);
  Log((__int64)a1, 2048, 1111774012, 0LL, v5);
  return v6;
}

/*
 * XREFs of UsbhSyncBusPause @ 0x1C0003F94
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00033E0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0003E60 (UsbhSshSuspendHub.c)
 *     UsbhHardReset_Action @ 0x1C004C888 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C004CFA4 (Usbh_HRS_Queued.c)
 *     UsbhAsyncStop @ 0x1C0051120 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0052440 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C001B760 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusPause(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  unsigned int v7; // r10d

  FdoExt(a1);
  Log(a1, 2048, 1346458174, a3, a2);
  *(_DWORD *)(a2 + 128) = a3;
  v6 = UsbhDispatch_BusEvent(a1, a2, 7LL);
  Log(a1, 2048, 1346458172, 0, v6);
  return v7;
}

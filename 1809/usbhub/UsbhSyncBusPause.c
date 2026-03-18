/*
 * XREFs of UsbhSyncBusPause @ 0x1C0003E08
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0003CD4 (UsbhSshSuspendHub.c)
 *     UsbhHardReset_Action @ 0x1C004AF18 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C004B5B4 (Usbh_HRS_Queued.c)
 *     UsbhAsyncStop @ 0x1C004F3F0 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C00506C0 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C001B060 (UsbhDispatch_BusEvent.c)
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

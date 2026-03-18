/*
 * XREFs of UsbhSshDisabled @ 0x1C005DB2C
 * Callers:
 *     UsbhSshEnableDisable @ 0x1C001F218 (UsbhSshEnableDisable.c)
 *     UsbhAsyncStop @ 0x1C0051120 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1C0051910 (UsbhFdoPnp_RemoveDevice.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0052440 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x1C000F740 (UsbhDisableTimerObject.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 *     UsbhDecHubBusy @ 0x1C001AEC0 (UsbhDecHubBusy.c)
 */

LONG __fastcall UsbhSshDisabled(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // r9
  int v7; // r10d
  __int64 v8; // rdx

  v4 = FdoExt(a1);
  v5 = (_QWORD *)UsbhIncHubBusy(a1, a2, a1, 1766093683, 1);
  KeWaitForSingleObject(v4 + 790, Executive, 0, 0, 0LL);
  Log(
    a1,
    0x10000,
    1397244971,
    _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 412, (signed __int64)v5, 0LL),
    (__int64)v5);
  if ( v6 )
  {
    Log(a1, v7, 1396978221, v6, (__int64)v5);
    UsbhDecHubBusy(a1, v8, v5);
  }
  UsbhDisableTimerObject(a1, (__int64)(v4 + 800));
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 790), 16, 1, 0);
}

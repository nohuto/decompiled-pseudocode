/*
 * XREFs of UsbhPortDisconnect @ 0x1C0057600
 * Callers:
 *     UsbhHandleSuspend @ 0x1C000C2BC (UsbhHandleSuspend.c)
 *     UsbhPortCycle @ 0x1C0057440 (UsbhPortCycle.c)
 *     UsbhReset1Debounce @ 0x1C0057B80 (UsbhReset1Debounce.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C0001EB8 (UsbhSignalResumeEvent.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0009148 (UsbhUnlinkPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C0046EC8 (UsbhSignalSuspendEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C004AC1C (Usbh_Disconnect_PdoEvent.c)
 *     UsbhBusUnlatchPdo @ 0x1C0056D28 (UsbhBusUnlatchPdo.c)
 *     UsbhDeleteUxdSettings @ 0x1C005E1C8 (UsbhDeleteUxdSettings.c)
 */

__int64 __fastcall UsbhPortDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // r9
  int v9; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v9);
  }
  Log(a1, 1024, 1883523411, a2, *(unsigned __int16 *)(a2 + 4));
  v6 = PdoExt(a3);
  UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740853, 1);
  Log(a1, 1024, 1682457651, a3, 0LL);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSignalSuspendEvent(a1, a2);
  if ( (v6[355] & 0x20000) == 0 )
    UsbhDeleteUxdSettings(a1, a3, 2LL);
  UsbhBusUnlatchPdo(a1, a3, a2, v7, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3, *(_QWORD *)(a2 + 376));
  return 0LL;
}

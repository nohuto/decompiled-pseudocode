/*
 * XREFs of Usbh_BS_BusInit @ 0x1C002B980
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C001B760 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhReleaseBusStateLock @ 0x1C001BAC0 (UsbhReleaseBusStateLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_BS_BusInit(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi

  v4 = a3;
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651722574, a2, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_b5d997cdd6ae31bcea5c4187fdaede3e_Traceguids,
      v4);
  if ( (_DWORD)v4 == 1 )
    v6 = 2;
  return UsbhReleaseBusStateLock(a1, a2, v6);
}

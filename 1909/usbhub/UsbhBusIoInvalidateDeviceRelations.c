/*
 * XREFs of UsbhBusIoInvalidateDeviceRelations @ 0x1C002BBE4
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C000F090 (UsbhBusConnectPdo.c)
 *     UsbhDeregisterPdo @ 0x1C0048838 (UsbhDeregisterPdo.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C004BB60 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhBusIoInvalidateDeviceRelations(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT *v4; // rsi

  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 16, 4812662, a1, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
  IoInvalidateDeviceRelations(v4[149], BusRelations);
}

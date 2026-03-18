/*
 * XREFs of UsbhWmiPnpStart @ 0x1C002A300
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhWmiPnpStart(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_a6355f778b1132e8a13bd07b7543ef0f_Traceguids);
  v2 = FdoExt((__int64)DeviceObject);
  v2[718] = 6;
  *((_QWORD *)v2 + 360) = &USB_WmiGuidList;
  *((_QWORD *)v2 + 361) = UsbhQueryWmiRegInfo;
  *((_QWORD *)v2 + 362) = UsbhQueryWmiDataBlock;
  *((_QWORD *)v2 + 363) = UsbhSetWmiDataBlock;
  *((_QWORD *)v2 + 365) = UsbhExecuteWmiMethod;
  *((_QWORD *)v2 + 364) = 0LL;
  *((_QWORD *)v2 + 366) = 0LL;
  IoWMIRegistrationControl(DeviceObject, 1u);
  v2[640] |= 2u;
  Log((__int64)DeviceObject, 64, 1098345833, 0LL, 0LL);
  return 0LL;
}

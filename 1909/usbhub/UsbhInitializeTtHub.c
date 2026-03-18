/*
 * XREFs of UsbhInitializeTtHub @ 0x1C0026668
 * Callers:
 *     UsbhInitialize @ 0x1C001EBF0 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C0040CC8 (UsbhReinitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhGetDeviceHandle @ 0x1C0026188 (UsbhGetDeviceHandle.c)
 *     Usbh_HubInitialize20Hub @ 0x1C0026760 (Usbh_HubInitialize20Hub.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitializeTtHub(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r14
  unsigned int v5; // edi
  __int64 DeviceHandle; // rsi
  __int64 v7; // r14
  _DWORD *v8; // rax

  v4 = FdoExt(a1);
  v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      30,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  if ( (v4[640] & 0x80u) != 0 )
    v5 = *((unsigned __int8 *)FdoExt(a1) + 2938);
  v7 = (int)Usbh_HubInitialize20Hub(a1, DeviceHandle, v5);
  Log(a1, 8, 1768838228, v7, v5);
  v8 = FdoExt(a1);
  if ( *((_QWORD *)v8 + 559) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v8 + 559))(
      *((_QWORD *)v8 + 529),
      DeviceHandle,
      a2,
      1212445810LL);
  return (unsigned int)v7;
}

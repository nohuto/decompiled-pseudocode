/*
 * XREFs of UsbhIoctlGetNodeConnectionInfo @ 0x1C004D784
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003E370 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004D894 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfo(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // r10d

  v2 = a2;
  v3 = a1;
  Log(a1, 32, 1768898103, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v4 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v4 + 2,
      v4 + 46,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids);
  return UsbhIoctlGetNodeConnectionInfoExApi(v3, v2);
}

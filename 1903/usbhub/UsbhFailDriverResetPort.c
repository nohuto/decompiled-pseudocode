/*
 * XREFs of UsbhFailDriverResetPort @ 0x1C0056F20
 * Callers:
 *     UsbhEnumerate1 @ 0x1C000FF08 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x1C002C33C (UsbhEnumerate2.c)
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C000C6DC (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000CFB4 (UsbhSignalSyncDeviceResetPdo.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhFailDriverResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r10d
  int v8; // [rsp+28h] [rbp-10h]

  Log(a1, 1024, 1884443460, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v6 )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v6 + 1,
      v6 + 41,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v8);
  }
  UsbhSignalSyncDeviceResetPdo(a1, a3, -1073741810);
  UsbhSignalDriverResetEvent(a1, a2);
  return *(unsigned int *)(a2 + 400);
}

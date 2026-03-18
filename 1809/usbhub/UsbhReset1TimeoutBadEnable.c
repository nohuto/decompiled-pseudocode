/*
 * XREFs of UsbhReset1TimeoutBadEnable @ 0x1C0055F50
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0046954 (UsbhAssertBusLock.c)
 *     UsbhDisablePort @ 0x1C00471D4 (UsbhDisablePort.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 *     UsbhReset1Timeout @ 0x1C0055D50 (UsbhReset1Timeout.c)
 */

__int64 __fastcall UsbhReset1TimeoutBadEnable(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x18u,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v7);
  }
  Log(a1, 1024, 1884447333, a2, 0LL);
  UsbhAssertBusLock(a1);
  UsbhException(a1, *(_WORD *)(a2 + 4), 0x3Du, 0LL, 0, -1, -1, usbfile_busfunc_c, 1182, 0);
  UsbhDisablePort(a1, a2);
  return UsbhReset1Timeout(a1, a2, a3);
}

/*
 * XREFs of UsbhReset1DebounceError @ 0x1C0057D10
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C00481DC (UsbhAssertBusLock.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhReset1DebounceError(__int64 a1, __int64 a2)
{
  int v5; // [rsp+28h] [rbp-30h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x11u,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v5);
  }
  Log(a1, 1024, 1883393637, a2, 0LL);
  UsbhAssertBusLock(a1);
  UsbhException(a1, *(_WORD *)(a2 + 4), 0x37u, 0LL, 0, -1, -1, usbfile_busfunc_c, 795, 0);
  return 1LL;
}

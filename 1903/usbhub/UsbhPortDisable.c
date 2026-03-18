/*
 * XREFs of UsbhPortDisable @ 0x1C0057570
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPortDisable(__int64 a1, __int64 a2)
{
  int v5; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x27u,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v5);
  }
  Log(a1, 1024, 1883525954, a2, 0LL);
  return 0LL;
}

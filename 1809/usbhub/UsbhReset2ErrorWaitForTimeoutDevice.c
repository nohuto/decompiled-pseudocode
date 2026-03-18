/*
 * XREFs of UsbhReset2ErrorWaitForTimeoutDevice @ 0x1C0056260
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhReset2ErrorWaitForTimeoutDevice(__int64 a1, __int64 a2)
{
  int v5; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Du,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v5);
  }
  Log(a1, 1024, 1697793362, a2, 0LL);
  return 2LL;
}

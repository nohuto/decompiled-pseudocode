/*
 * XREFs of UsbhQueuePauseChange @ 0x1C004527C
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueuePauseChange(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+78h] [rbp+20h]

  Log(a1, 512, 1769436977, a3, a2);
  LODWORD(v9) = 0x80000;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Fu,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v8);
  }
  result = UsbhGetPortData(a1, a2);
  if ( result )
    result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, result, 4, a3, v9, 0, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v7) = a2;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x50u,
             (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
             v7);
  }
  return result;
}

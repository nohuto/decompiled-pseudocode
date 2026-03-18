/*
 * XREFs of UsbhPCE_QueueChange @ 0x1C0044B90
 * Callers:
 *     UsbhReset1Debounce @ 0x1C00558D0 (UsbhReset1Debounce.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChange(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+28h] [rbp-30h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Bu,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v10);
  }
  result = UsbhGetPortData(a1, a2);
  if ( result )
    result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, result, 4, a4, a3, 0, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v9) = a2;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x4Cu,
             (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
             v9);
  }
  return result;
}

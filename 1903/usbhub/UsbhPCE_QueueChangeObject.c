/*
 * XREFs of UsbhPCE_QueueChangeObject @ 0x1C00463E8
 * Callers:
 *     UsbhResetPortTimerDpc @ 0x1C0049BC0 (UsbhResetPortTimerDpc.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChangeObject(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+28h] [rbp-30h]

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Du,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v12);
  }
  result = UsbhGetPortData(a1, a2);
  if ( result )
    result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, result, 4, a4, a3, 2, a6, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v11) = a2;
      return WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0x4Eu,
               (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
               v11);
    }
  }
  return result;
}

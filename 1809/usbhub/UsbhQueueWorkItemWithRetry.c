/*
 * XREFs of UsbhQueueWorkItemWithRetry @ 0x1C001C7E4
 * Callers:
 *     UsbhSS_SignalPdoWake @ 0x1C0001B44 (UsbhSS_SignalPdoWake.c)
 *     UsbhHubIsr @ 0x1C001A670 (UsbhHubIsr.c)
 *     UsbhInitCallback @ 0x1C002AFF0 (UsbhInitCallback.c)
 *     UsbhIsrRetryTimer @ 0x1C0047E20 (UsbhIsrRetryTimer.c)
 *     UsbhResetIrqPipeRetryTimer @ 0x1C0048240 (UsbhResetIrqPipeRetryTimer.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C004F300 (UsbHubhInitTimeoutTimer.c)
 *     UsbhInitRetryTimer @ 0x1C004FEF0 (UsbhInitRetryTimer.c)
 *     UsbhIdleIrpRetryTimer @ 0x1C005A4E0 (UsbhIdleIrpRetryTimer.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005AA0C (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_WakeIrpRetryTimer @ 0x1C005B2E0 (UsbhSS_WakeIrpRetryTimer.c)
 * Callees:
 *     UsbhEnableTimerObject @ 0x1C000CE80 (UsbhEnableTimerObject.c)
 *     UsbhQueueWorkItemEx @ 0x1C00111F0 (UsbhQueueWorkItemEx.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0040248 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhQueueWorkItemWithRetry(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // ebx
  int v11; // eax
  int v12; // edx

  v8 = 0;
  FdoExt(a1);
  Log(a1, 8, 1364479299, a7, a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
      a6);
  v11 = UsbhQueueWorkItemEx(a1, a4, a3, a5, a6, a7, 0LL);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        1,
        49,
        (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
        a6,
        v11);
    Log(a1, 8, 1364476705, a7, a5);
    if ( a2 )
      UsbhEnableTimerObject(a1, a2, 0, a6, a5, a7);
    v8 = 1;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      1,
      50,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
      a6,
      v8);
  return v8;
}

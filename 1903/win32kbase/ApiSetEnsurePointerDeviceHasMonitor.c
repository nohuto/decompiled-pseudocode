/*
 * XREFs of ApiSetEnsurePointerDeviceHasMonitor @ 0x1C019EB18
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0154F2C (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEnsurePointerDeviceHasMonitor(__int64 a1)
{
  unsigned int HasMonitor; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      50,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  HasMonitor = 0;
  if ( (int)IsEnsurePointerDeviceHasMonitorSupported() >= 0 )
    HasMonitor = EnsurePointerDeviceHasMonitor(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      51,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return HasMonitor;
}

/*
 * XREFs of ApiSetEditionHandleMoveSizeDataOnDestroyMonitor @ 0x1C00B4768
 * Callers:
 *     DestroyMonitor @ 0x1C00B4610 (DestroyMonitor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionHandleMoveSizeDataOnDestroyMonitor(__int64 a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      128,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  result = IsEditionHandleMoveSizeDataOnDestroyMonitorSupported();
  if ( (int)result >= 0 )
    result = EditionHandleMoveSizeDataOnDestroyMonitor(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               129,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}

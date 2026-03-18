/*
 * XREFs of ApiSetGetWakeSourceInputTypeMask @ 0x1C019D4F8
 * Callers:
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C00A9D44 (--0CInputGlobals@@AEAA@XZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetGetWakeSourceInputTypeMask()
{
  unsigned int WakeSourceInputTypeMask; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      436,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  WakeSourceInputTypeMask = GetWakeSourceInputTypeMask();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      437,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return WakeSourceInputTypeMask;
}

/*
 * XREFs of ApiSetGetTouchHoldTime @ 0x1C019F574
 * Callers:
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C016E73C (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetGetTouchHoldTime()
{
  unsigned int TouchHoldTime; // ebx

  TouchHoldTime = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      216,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( (int)IsGetTouchHoldTimeSupported() >= 0 )
    TouchHoldTime = GetTouchHoldTime();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      217,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return TouchHoldTime;
}

/*
 * XREFs of ApiSetTelemPTPConfigUpdate @ 0x1C01A1098
 * Callers:
 *     EnablePTPDevices @ 0x1C0109E50 (EnablePTPDevices.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C011C810 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetTelemPTPConfigUpdate()
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      372,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  result = IsTelemPTPConfigUpdateSupported();
  if ( (int)result >= 0 )
    result = TelemPTPConfigUpdate();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               373,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}

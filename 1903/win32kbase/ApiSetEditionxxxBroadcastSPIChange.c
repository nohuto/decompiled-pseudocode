/*
 * XREFs of ApiSetEditionxxxBroadcastSPIChange @ 0x1C019E98C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0079CC0 (xxxSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionxxxBroadcastSPIChange(unsigned int a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      444,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  result = IsEditionxxxBroadcastSPIChangeSupported();
  if ( (int)result >= 0 )
    result = EditionxxxBroadcastSPIChange(a1, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               445,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}

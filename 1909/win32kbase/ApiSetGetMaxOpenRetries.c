/*
 * XREFs of ApiSetGetMaxOpenRetries @ 0x1C0053364
 * Callers:
 *     RIMOpenDev @ 0x1C00531F0 (RIMOpenDev.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetGetMaxOpenRetries()
{
  unsigned int MaxOpenRetries; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      90,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  MaxOpenRetries = 1;
  if ( (int)IsGetMaxOpenRetriesSupported() >= 0 )
    MaxOpenRetries = GetMaxOpenRetries();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      91,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return MaxOpenRetries;
}

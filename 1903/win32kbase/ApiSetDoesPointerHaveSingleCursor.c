/*
 * XREFs of ApiSetDoesPointerHaveSingleCursor @ 0x1C019B0FC
 * Callers:
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0169A60 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetDoesPointerHaveSingleCursor()
{
  unsigned int HaveSingleCursor; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      286,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  HaveSingleCursor = 0;
  if ( (int)IsDoesPointerHaveSingleCursorSupported() >= 0 )
    HaveSingleCursor = DoesPointerHaveSingleCursor();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      287,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return HaveSingleCursor;
}

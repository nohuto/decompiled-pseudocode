/*
 * XREFs of ApiSetEditionUserBeep @ 0x1C019C60C
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01837A0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionUserBeep()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      408,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( (int)IsEditionUserBeepSupported() >= 0 )
    v0 = EditionUserBeep(440LL, 125LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      409,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return v0;
}

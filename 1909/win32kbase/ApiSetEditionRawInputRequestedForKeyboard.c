/*
 * XREFs of ApiSetEditionRawInputRequestedForKeyboard @ 0x1C019BC20
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01837A0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionRawInputRequestedForKeyboard(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      406,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( (int)IsEditionRawInputRequestedForKeyboardSupported() >= 0 )
    v2 = EditionRawInputRequestedForKeyboard(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      407,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return v2;
}

/*
 * XREFs of ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C0071EAC
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0071D10 (NtUserGetAsyncKeyState.c)
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  unsigned int IsGpqForegroundAccessibleCurrent; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      182,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  IsGpqForegroundAccessibleCurrent = 0;
  if ( (int)IsEditionIsGpqForegroundAccessibleCurrentSupported() >= 0 )
    IsGpqForegroundAccessibleCurrent = EditionIsGpqForegroundAccessibleCurrent(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      183,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return IsGpqForegroundAccessibleCurrent;
}

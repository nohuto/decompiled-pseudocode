/*
 * XREFs of ApiSetEditionIsAppForeground @ 0x1C019C87C
 * Callers:
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C0042BD4 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsAppForeground(__int64 a1)
{
  unsigned int IsAppForeground; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      146,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  IsAppForeground = 0;
  if ( (int)IsEditionIsAppForegroundSupported() >= 0 )
    IsAppForeground = EditionIsAppForeground(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      147,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return IsAppForeground;
}

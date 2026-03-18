/*
 * XREFs of ApiSetEditionPostAccessibility @ 0x1C019D82C
 * Callers:
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015DF00 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x1C015E430 (-MKButtonSelect@@YAHG@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C015E880 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015E8E0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C015EBA0 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C015FA30 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C015FB40 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0160050 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01600B0 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C0160140 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostAccessibility(unsigned int a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      168,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  result = IsEditionPostAccessibilitySupported();
  if ( (int)result >= 0 )
    result = EditionPostAccessibility(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               169,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}

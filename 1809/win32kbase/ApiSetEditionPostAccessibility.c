/*
 * XREFs of ApiSetEditionPostAccessibility @ 0x1C0162E6C
 * Callers:
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01313F0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x1C0131920 (-MKButtonSelect@@YAHG@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C0131D70 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0131DD0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C0132090 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01326F0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0132800 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0132CF0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C0132D50 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C0132DE0 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostAccessibility(unsigned int a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x38u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = IsEditionPostAccessibilitySupported();
  if ( (int)result >= 0 )
    result = EditionPostAccessibility(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x39u,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return result;
}

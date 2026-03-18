/*
 * XREFs of ApiSetEditionKillAccessibilityTimer @ 0x1C013EEA0
 * Callers:
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C006AAA0 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C0109DD0 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0109F10 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C010A080 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C010A520 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C010A810 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C010A860 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionKillAccessibilityTimer(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x3Au,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionKillAccessibilityTimerSupported() >= 0 )
    v3 = EditionKillAccessibilityTimer(0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x3Bu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v3;
}

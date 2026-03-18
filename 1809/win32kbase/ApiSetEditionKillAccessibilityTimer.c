/*
 * XREFs of ApiSetEditionKillAccessibilityTimer @ 0x1C01625BC
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C0048BD0 (-AccessTimeOutReset@@YAXXZ.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C008A200 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01313F0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0131560 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01319B0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C0131B90 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0131BE0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
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
      0x3Cu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionKillAccessibilityTimerSupported() >= 0 )
    v3 = EditionKillAccessibilityTimer(0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x3Du,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v3;
}

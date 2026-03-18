/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C008D558
 * Callers:
 *     NtUserSetBrokeredForeground @ 0x1C000B230 (NtUserSetBrokeredForeground.c)
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00109C0 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     _GhostWindowFromHungWindow @ 0x1C0035084 (_GhostWindowFromHungWindow.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0065BF0 (GreUpdateSpriteVisRgn.c)
 *     NtUserSetWindowFNID @ 0x1C008CFB0 (NtUserSetWindowFNID.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     xxxCreateCaret @ 0x1C00F5EF4 (xxxCreateCaret.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C00F97B0 (UserDetachQueueFromInputWindowApiExt.c)
 *     _HungWindowFromGhostWindow @ 0x1C00FC670 (_HungWindowFromGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0151760 (xxxRegisterGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01526E0 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C015AC94 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C015DE50 (UserRemoveWindowedSwapChain.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7AC0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F90EC (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F91E8 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01F93F0 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C01F9444 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F9570 (xxxRegisterSiblingFrostWindow.c)
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 *     NtUserDisableImmersiveOwner @ 0x1C022A580 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowBeingDestroyed(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  if ( *(char *)(v1 + 19) < 0 )
    return 1;
  if ( *(char *)(v1 + 20) < 0 )
    return 1;
  if ( *(__int16 *)(v1 + 42) < 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 480) & 1) != 0 )
      return 1;
  }
  return v2;
}

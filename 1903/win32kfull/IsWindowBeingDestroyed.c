/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C0048A98
 * Callers:
 *     NtUserSetBrokeredForeground @ 0x1C00106A0 (NtUserSetBrokeredForeground.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C0018230 (UserDetachQueueFromInputWindowApiExt.c)
 *     NtUserSetWindowFNID @ 0x1C0048540 (NtUserSetWindowFNID.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0083958 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     xxxCreateCaret @ 0x1C0086A94 (xxxCreateCaret.c)
 *     _HungWindowFromGhostWindow @ 0x1C00910A8 (_HungWindowFromGhostWindow.c)
 *     _GhostWindowFromHungWindow @ 0x1C0094354 (_GhostWindowFromHungWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00C4520 (GreUpdateSpriteVisRgn.c)
 *     xxxRegisterGhostWindow @ 0x1C01509A0 (xxxRegisterGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0151920 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C0159CE4 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C015CEA0 (UserRemoveWindowedSwapChain.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7C40 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F939C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F9498 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01F96A0 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C01F96F4 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F9820 (xxxRegisterSiblingFrostWindow.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 *     NtUserDisableImmersiveOwner @ 0x1C022ABA0 (NtUserDisableImmersiveOwner.c)
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

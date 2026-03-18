/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C007C6F4
 * Callers:
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0007F84 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C0009E90 (NtUserSetBrokeredForeground.c)
 *     _GhostWindowFromHungWindow @ 0x1C001C6D0 (_GhostWindowFromHungWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C003C0E0 (GreUpdateSpriteVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C00B1B60 (UserDetachQueueFromInputWindowApiExt.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00C913C (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     xxxCreateCaret @ 0x1C00DDB70 (xxxCreateCaret.c)
 *     NtUserSetWindowFNID @ 0x1C0117DA0 (NtUserSetWindowFNID.c)
 *     _HungWindowFromGhostWindow @ 0x1C011916C (_HungWindowFromGhostWindow.c)
 *     UserSetWindowedSwapChain @ 0x1C0153724 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0156B90 (UserRemoveWindowedSwapChain.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01D3000 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01E2938 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01E2A30 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01E36B0 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C01E38B8 (xxxFrostCrashedWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01E3C90 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01E3FD0 (xxxRegisterSiblingFrostWindow.c)
 *     xxxMNMouseMove @ 0x1C020D738 (xxxMNMouseMove.c)
 *     NtUserDisableImmersiveOwner @ 0x1C0212E00 (NtUserDisableImmersiveOwner.c)
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
    if ( (*(_DWORD *)(v3 + 488) & 1) != 0 )
      return 1;
  }
  return v2;
}

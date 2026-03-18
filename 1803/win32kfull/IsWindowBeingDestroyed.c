/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C00C476C
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C000EAB0 (UserDetachQueueFromInputWindowApiExt.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0034050 (GreUpdateSpriteVisRgn.c)
 *     xxxCreateCaret @ 0x1C0063BA8 (xxxCreateCaret.c)
 *     _HungWindowFromGhostWindow @ 0x1C0070DC0 (_HungWindowFromGhostWindow.c)
 *     _GhostWindowFromHungWindow @ 0x1C00710D0 (_GhostWindowFromHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00C0C4C (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00C0D7C (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C00E6E60 (xxxRegisterGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00F1DF0 (NtUserSetBrokeredForeground.c)
 *     NtUserSetWindowFNID @ 0x1C00FB970 (NtUserSetWindowFNID.c)
 *     UserSetWindowedSwapChain @ 0x1C0132514 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0135BC0 (UserRemoveWindowedSwapChain.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BFA8C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BFB78 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01BFD60 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C01BFDB4 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01BFEE0 (xxxRegisterSiblingFrostWindow.c)
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01ECB10 (NtUserDisableImmersiveOwner.c)
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

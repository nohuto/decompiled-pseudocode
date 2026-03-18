/*
 * XREFs of IsDesktopWindow @ 0x1C007A740
 * Callers:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     GreUpdateSpriteVisRgn @ 0x1C003C0E0 (GreUpdateSpriteVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0077534 (CreateOrGetRedirectionBitmap.c)
 *     TrackLayeredZorder @ 0x1C0079E4C (TrackLayeredZorder.c)
 *     ComposeWindowIfNeeded @ 0x1C007A504 (ComposeWindowIfNeeded.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C007A614 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A680 (UserGetRedirectedWindowOrigin.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00C7DC8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00C913C (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     zzzDecomposeDesktop @ 0x1C00CC674 (zzzDecomposeDesktop.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0104F04 (zzzUpdateWindowsAfterModeChange.c)
 *     CreateSpb @ 0x1C0157150 (CreateSpb.c)
 *     MagSlicerControl @ 0x1C01BD9C0 (MagSlicerControl.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDesktopWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      v2 = *(_QWORD *)(v3 + 24);
  }
  return a1 == v2;
}

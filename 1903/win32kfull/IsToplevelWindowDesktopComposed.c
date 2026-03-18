/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x1C0022D88
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000C370 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxDWP_DoNCActivate @ 0x1C000C8BC (xxxDWP_DoNCActivate.c)
 *     ComposeWindowIfNeeded @ 0x1C0022350 (ComposeWindowIfNeeded.c)
 *     DefSetText @ 0x1C0022B3C (DefSetText.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C0026DA0 (EditionUpdateCursorOnMouseMove.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     DecomposeWindowIfNeeded @ 0x1C0044C58 (DecomposeWindowIfNeeded.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxGetTitleBarInfoEx @ 0x1C008616C (xxxGetTitleBarInfoEx.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B5D3C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxSnapWindow @ 0x1C015CA8C (xxxSnapWindow.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0204B4C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023AD50 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C023C6E0 (xxxDrawAnimatedRects.c)
 *     xxxRecreateSmallIcons @ 0x1C02403E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsToplevelWindowDesktopComposed(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8

  v1 = *(_QWORD *)(a1 + 104);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 24);
    }
    if ( v1 == v4 && (unsigned int)IsWindowDesktopComposed(a1) )
      return 1;
  }
  return v2;
}

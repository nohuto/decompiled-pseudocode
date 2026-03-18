/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x1C00291F8
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000BC54 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxGetTitleBarInfoEx @ 0x1C0016514 (xxxGetTitleBarInfoEx.c)
 *     ComposeWindowIfNeeded @ 0x1C00287CC (ComposeWindowIfNeeded.c)
 *     DefSetText @ 0x1C0028FAC (DefSetText.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C002D210 (EditionUpdateCursorOnMouseMove.c)
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0056AEC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     DecomposeWindowIfNeeded @ 0x1C0089628 (DecomposeWindowIfNeeded.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     xxxDWP_DoNCActivate @ 0x1C012EEEC (xxxDWP_DoNCActivate.c)
 *     xxxSnapWindow @ 0x1C015DA3C (xxxSnapWindow.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C020489C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023A730 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C023C0C0 (xxxDrawAnimatedRects.c)
 *     xxxRecreateSmallIcons @ 0x1C023FDC0 (xxxRecreateSmallIcons.c)
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

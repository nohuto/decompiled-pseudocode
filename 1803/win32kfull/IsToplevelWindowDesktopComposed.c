/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x1C002DEDC
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000AF90 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     DefSetText @ 0x1C002FFEC (DefSetText.c)
 *     xxxGetTitleBarInfoEx @ 0x1C0056FA4 (xxxGetTitleBarInfoEx.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C006C084 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C00747C0 (EditionUpdateCursorOnMouseMove.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C0075FC4 (ComposeWindowIfNeeded.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C2AA8 (xxxDWP_DoNCActivate.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C3AB8 (DecomposeWindowIfNeeded.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0139FCC (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01CA4A4 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C01F9FB0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C01FB950 (xxxDrawAnimatedRects.c)
 *     xxxRecreateSmallIcons @ 0x1C01FF6A4 (xxxRecreateSmallIcons.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 */

__int64 __fastcall IsToplevelWindowDesktopComposed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = 0;
  if ( *(_QWORD *)(a1 + 80) )
  {
    DesktopWindow = GetDesktopWindow(a1);
    if ( v4 == DesktopWindow )
      return (unsigned int)IsWindowDesktopComposed(v3) != 0;
  }
  return v1;
}

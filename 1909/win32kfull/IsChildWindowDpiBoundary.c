/*
 * XREFs of IsChildWindowDpiBoundary @ 0x1C006F520
 * Callers:
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C00292C4 (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     GetMonitorTransform @ 0x1C0034A54 (GetMonitorTransform.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00CC090 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CC1C8 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E7E30 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02293C4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 * Callees:
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0070208 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C00F4FD8 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsChildWindowDpiBoundary(struct tagWND *a1)
{
  unsigned int v2; // edi
  unsigned __int16 WindowCoordinateSpaceDpi; // bx

  v2 = 0;
  if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
  {
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
    return WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((struct tagWND **)a1 + 13));
  }
  return v2;
}

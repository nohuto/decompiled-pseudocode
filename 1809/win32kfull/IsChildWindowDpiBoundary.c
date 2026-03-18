/*
 * XREFs of IsChildWindowDpiBoundary @ 0x1C007A5D8
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetMonitorTransform @ 0x1C0079FE8 (GetMonitorTransform.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C007A5A8 (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C01052F0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01D3384 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C0211988 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 * Callees:
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0039E54 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011190C (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsChildWindowDpiBoundary(struct tagWND *a1)
{
  unsigned int v2; // edi
  unsigned __int16 WindowCoordinateSpaceDpi; // bx

  v2 = 0;
  if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
  {
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
    return WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((struct tagWND **)a1 + 10));
  }
  return v2;
}

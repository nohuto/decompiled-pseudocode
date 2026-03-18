/*
 * XREFs of IsChildWindowDpiBoundary @ 0x1C002A5A8
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C002B770 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetMonitorTransform @ 0x1C0073680 (GetMonitorTransform.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C007605C (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F95BC (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01B03C8 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01EB9C0 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 * Callees:
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0028118 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C00FAA00 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
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

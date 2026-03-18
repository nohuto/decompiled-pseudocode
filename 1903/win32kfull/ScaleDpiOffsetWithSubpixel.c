/*
 * XREFs of ScaleDpiOffsetWithSubpixel @ 0x1C01E761C
 * Callers:
 *     OffsetChildren @ 0x1C0025BAC (OffsetChildren.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z @ 0x1C01E58A4 (-GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z.c)
 * Callees:
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011AFC8 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C01E5AD4 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

void __fastcall ScaleDpiOffsetWithSubpixel(int *a1, float *a2, struct tagWND *a3, struct tagWND *a4)
{
  unsigned __int16 WindowCoordinateSpaceDpi; // bp
  unsigned __int16 v8; // ax
  float v9; // xmm2_4

  WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a3);
  v8 = GetWindowCoordinateSpaceDpi(a4);
  if ( v8 )
  {
    v9 = (float)WindowCoordinateSpaceDpi / (float)v8;
    ScaleValueWithSubpixel(a1, a2, v9);
    ScaleValueWithSubpixel(a1 + 1, a2 + 1, v9);
  }
}

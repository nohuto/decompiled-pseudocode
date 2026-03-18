/*
 * XREFs of FillRect @ 0x1C007B5C0
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C0010BC4 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     DrawEdge @ 0x1C007AF44 (DrawEdge.c)
 *     xxxPaintRect @ 0x1C007B3E4 (xxxPaintRect.c)
 *     DrawPushButton @ 0x1C007B7E0 (DrawPushButton.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C007B8B0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C0106C38 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C01105C8 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C01106E0 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDesktopPaintCallback @ 0x1C0131690 (xxxDesktopPaintCallback.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 *     PaintScreenBackground @ 0x1C0136130 (PaintScreenBackground.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C013B49C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01516EC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015DFE8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01D3B58 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01DE658 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01DEA84 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022AD88 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022AF18 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C007B620 (GrePolyPatBlt.c)
 */

int __stdcall FillRect(HDC a1, LPCRECT a2, HBRUSH a3)
{
  HBRUSH v3; // r10
  LONG top; // r9d
  int v5; // eax
  int v6; // eax
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  HBRUSH v9; // [rsp+40h] [rbp-18h]

  v3 = a3;
  if ( (unsigned __int64)a3 - 1 <= 0x1E )
    v3 = *(HBRUSH *)(gpsi + 8LL * ((_QWORD)a3 - 1) + 4696);
  top = a2->top;
  v5 = a2->right - a2->left;
  v8[0] = a2->left;
  v8[2] = v5;
  v6 = a2->bottom - top;
  v8[1] = top;
  v8[3] = v6;
  v9 = v3;
  return GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v8, 1u);
}

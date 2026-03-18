/*
 * XREFs of FillRect @ 0x1C009F914
 * Callers:
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C000C78C (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     DrawPushButton @ 0x1C0010CEC (DrawPushButton.c)
 *     DrawEdge @ 0x1C0010DBC (DrawEdge.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00110A4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0012940 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     xxxPaintRect @ 0x1C009F974 (xxxPaintRect.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00E8CB4 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     xxxDesktopPaintCallback @ 0x1C010F060 (xxxDesktopPaintCallback.c)
 *     PaintScreenBackground @ 0x1C0112AA0 (PaintScreenBackground.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011A924 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C012F934 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01B1070 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01BB03C (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01BBEE4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01FF2E4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02023B8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0202548 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
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
  return GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v8, 1);
}

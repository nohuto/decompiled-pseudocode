/*
 * XREFs of GreSelectFont @ 0x1C012B530
 * Callers:
 *     FinalUserInit @ 0x1C00801F4 (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C0080670 (MNSetupAnimationDC.c)
 *     _ServerFixupMenuDC @ 0x1C00E6B94 (_ServerFixupMenuDC.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00E9A1C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C012A0B0 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C012A7A4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     DrawFrameControl @ 0x1C012B23C (DrawFrameControl.c)
 *     xxxSetNCFonts @ 0x1C013D3B0 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C013E248 (ValidateExternalLogFont.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0158BC0 (CreateCompatiblePublicDC.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C01649B4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     CreateScaledFont @ 0x1C01CC8E0 (CreateScaledFont.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F38A0 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0211494 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0217DE0 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F2F0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023F9CC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C02486C0 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C0248824 (xxxDrawState.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 * Callees:
 *     GreSelectFontInternal @ 0x1C01670A4 (GreSelectFontInternal.c)
 */

__int64 __fastcall GreSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}

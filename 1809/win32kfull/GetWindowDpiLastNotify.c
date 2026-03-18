/*
 * XREFs of GetWindowDpiLastNotify @ 0x1C00A7B60
 * Callers:
 *     xxxCheckFullScreen @ 0x1C001CD74 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C001D674 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCalcClientRect @ 0x1C0068CE0 (xxxCalcClientRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00691A4 (GetWindowBordersWithDpiAwareness.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00A707C (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GetCaptionHeight @ 0x1C00A7388 (GetCaptionHeight.c)
 *     DwmChildRectChange @ 0x1C00A746C (DwmChildRectChange.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C00AB240 (xxxMNCompute.c)
 *     xxxGetMenuBarInfo @ 0x1C00ABF90 (xxxGetMenuBarInfo.c)
 *     xxxMenuBarCompute @ 0x1C00ACA90 (xxxMenuBarCompute.c)
 *     FindNCHit @ 0x1C0123470 (FindNCHit.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C0124364 (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     MNPositionSysMenu @ 0x1C014D710 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C020C99C (xxxMNFindWindowFromPoint.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227A4C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxCalcCaptionButton @ 0x1C022B200 (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C022E368 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowDpiLastNotify(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // cx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_WORD *)(v1 + 286);
  if ( v2 )
    return v2;
  else
    return *(unsigned __int16 *)(v1 + 284);
}

/*
 * XREFs of GetWindowDpiLastNotify @ 0x1C0033D78
 * Callers:
 *     GetWindowBordersWithDpiAwareness @ 0x1C0032DF0 (GetWindowBordersWithDpiAwareness.c)
 *     DwmChildRectChange @ 0x1C0032E90 (DwmChildRectChange.c)
 *     xxxCalcClientRect @ 0x1C003358C (xxxCalcClientRect.c)
 *     GetCaptionHeight @ 0x1C0033D9C (GetCaptionHeight.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCheckFullScreen @ 0x1C0037A28 (xxxCheckFullScreen.c)
 *     FindNCHit @ 0x1C0108614 (FindNCHit.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0128B34 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C012A0B0 (xxxMNCompute.c)
 *     xxxGetMenuBarInfo @ 0x1C012D47C (xxxGetMenuBarInfo.c)
 *     xxxMenuBarCompute @ 0x1C012DEE0 (xxxMenuBarCompute.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C013732C (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     MNPositionSysMenu @ 0x1C015576C (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F2F0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0243AFC (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246400 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
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

/*
 * XREFs of GetDPIServerInfo @ 0x1C00AB9F8
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C001D674 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C00AA6A4 (GetWindowNCMetrics.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0111088 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0151E08 (CreateCompatiblePublicDC.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015DFE8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01DDE74 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01DEA84 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FAD90 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0200C70 (SfnINLPKDRAWSWITCHWND.c)
 *     xxxDrawState @ 0x1C0230354 (xxxDrawState.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024203C (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     IsSysFontAndDefaultMode @ 0x1C02426F4 (IsSysFontAndDefaultMode.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetProcessDpiServerInfo @ 0x1C00ABA24 (GetProcessDpiServerInfo.c)
 */

__int64 __fastcall GetDPIServerInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF) != 0 )
    return GetProcessDpiServerInfo();
  else
    return Get96DpiServerInfo(v3, v2, v4);
}

/*
 * XREFs of GetDpiDependentMetric @ 0x1C0039CF0
 * Callers:
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C000B45C (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00110A4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     xxxMNCompute @ 0x1C0013858 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0013DB8 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetWindowNCMetricsForDpi @ 0x1C0014170 (GetWindowNCMetricsForDpi.c)
 *     GetWindowNCMetrics @ 0x1C0017EC8 (GetWindowNCMetrics.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0022430 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     xxxCalcClientRect @ 0x1C0022534 (xxxCalcClientRect.c)
 *     xxxCheckFullScreen @ 0x1C0035620 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetTiledRect @ 0x1C003813C (SetTiledRect.c)
 *     CalcSBStuff @ 0x1C0038D48 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C0038E5C (CalcSBStuff2.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0039270 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0051E94 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowSmIcon @ 0x1C006ADA8 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C006BF64 (xxxCreateClassSmIcon.c)
 *     _AdjustWindowRectExForDpi @ 0x1C00731D4 (_AdjustWindowRectExForDpi.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0073370 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0073410 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C00734F4 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     xxxGetMenuBarInfo @ 0x1C00C36A8 (xxxGetMenuBarInfo.c)
 *     InternalGetRealClientRect @ 0x1C00F3E30 (InternalGetRealClientRect.c)
 *     _SystemParametersInfoForDpi @ 0x1C00F43E4 (_SystemParametersInfoForDpi.c)
 *     GetCaptionHeight @ 0x1C00F6358 (GetCaptionHeight.c)
 *     FindNCHit @ 0x1C01013E8 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C012D1EC (MNPositionSysMenu.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C012F608 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01A49F4 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01BB370 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01C336C (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C01E4AE0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNFindWindowFromPoint @ 0x1C01E6A2C (xxxMNFindWindowFromPoint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C01FB318 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C01FFB84 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02007D0 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0200A70 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0202548 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0202828 (xxxCalcCaptionButton.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0039D4C (GetDpiCacheSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C0197CD0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall GetDpiDependentMetric(__int64 a1, unsigned int a2)
{
  int DpiCacheSlot; // eax
  __int64 v4; // r11
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 result; // rax

  DpiCacheSlot = GetDpiCacheSlot(a2);
  v5 = v4;
  v6 = 30LL * DpiCacheSlot;
  result = *(unsigned int *)(gpsi + 4 * (v6 + v4) + 2284);
  if ( (_DWORD)result == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(a2);
    result = *(unsigned int *)(gpsi + 4 * (v5 + v6) + 2284);
    if ( (_DWORD)result == -1 )
      return 0LL;
  }
  return result;
}

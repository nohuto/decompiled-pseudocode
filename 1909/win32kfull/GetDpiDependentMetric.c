/*
 * XREFs of GetDpiDependentMetric @ 0x1C004A0E8
 * Callers:
 *     _DrawIconEx @ 0x1C00226D0 (_DrawIconEx.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002464C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     _AdjustWindowRectExForDpi @ 0x1C0033330 (_AdjustWindowRectExForDpi.c)
 *     xxxCalcClientRect @ 0x1C003358C (xxxCalcClientRect.c)
 *     GetCaptionHeight @ 0x1C0033D9C (GetCaptionHeight.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0033F60 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0033FA4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C0034840 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     xxxCheckFullScreen @ 0x1C0037A28 (xxxCheckFullScreen.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0049C90 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetWindowNCMetricsForDpi @ 0x1C004B21C (GetWindowNCMetricsForDpi.c)
 *     CalcSBStuff2 @ 0x1C004B35C (CalcSBStuff2.c)
 *     CalcSBStuff @ 0x1C004B584 (CalcSBStuff.c)
 *     xxxCreateClassSmIcon @ 0x1C0056EB0 (xxxCreateClassSmIcon.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00EA6A4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C00EB1C4 (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     SetTiledRect @ 0x1C00EC050 (SetTiledRect.c)
 *     InternalGetRealClientRect @ 0x1C00EC190 (InternalGetRealClientRect.c)
 *     FindNCHit @ 0x1C0108614 (FindNCHit.c)
 *     xxxCreateWindowSmIcon @ 0x1C0109E88 (xxxCreateWindowSmIcon.c)
 *     _SystemParametersInfoForDpi @ 0x1C01290DC (_SystemParametersInfoForDpi.c)
 *     GetWindowNCMetrics @ 0x1C0129D6C (GetWindowNCMetrics.c)
 *     xxxMNCompute @ 0x1C012A0B0 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C012A7A4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C012AFC4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C012D47C (xxxGetMenuBarInfo.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C01300C8 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C013C600 (xxxUpdateSystemIconsFromRegistry.c)
 *     MNPositionSysMenu @ 0x1C015576C (MNPositionSysMenu.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCBA0 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D9D94 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3C0C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FDEB4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0221FC4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023BA94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02405D8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241688 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0241934 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243808 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0243AFC (xxxCalcCaptionButton.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C004A144 (GetDpiCacheSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01CCB20 (_EnsureDpiDepSysMetCacheForPlateau.c)
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

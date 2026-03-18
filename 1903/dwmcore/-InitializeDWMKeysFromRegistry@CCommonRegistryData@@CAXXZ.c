/*
 * XREFs of ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x1800A949C
 * Callers:
 *     ?Startup@@YAJXZ @ 0x1800A93AC (-Startup@@YAJXZ.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800A9E7C (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

void CCommonRegistryData::InitializeDWMKeysFromRegistry(void)
{
  bool HKLMDword; // al
  unsigned int v1; // ecx
  bool v2; // al
  unsigned int v3; // ecx
  bool v4; // al
  unsigned int v5; // ecx
  bool v6; // al
  unsigned int v7; // ecx
  bool v8; // al
  int v9; // ecx
  bool v10; // al
  unsigned int v11; // ecx
  bool v12; // al
  unsigned int v13; // ecx
  unsigned int v14; // eax
  LONGLONG v15; // rcx
  bool v16; // al
  unsigned int v17; // ecx
  bool v18; // al
  unsigned int v19; // ecx
  bool v20; // al
  unsigned int v21; // ecx
  bool v22; // al
  unsigned int v23; // ecx
  bool v24; // al
  unsigned int v25; // ecx
  bool v26; // al
  unsigned int v27; // ecx
  bool v28; // al
  unsigned int v29; // ecx
  unsigned int v30; // eax
  bool v31; // al
  unsigned int v32; // ecx
  unsigned int v33; // eax
  bool v34; // al
  unsigned int v35; // ecx
  bool v36; // al
  unsigned int v37; // ecx
  bool v38; // al
  unsigned int v39; // ecx
  bool v40; // al
  unsigned int v41; // ecx
  bool v42; // al
  unsigned int v43; // ecx
  bool v44; // al
  unsigned int v45; // ecx
  bool v46; // al
  unsigned int v47; // ecx
  bool v48; // al
  unsigned int v49; // ecx
  bool v50; // al
  unsigned int v51; // ecx
  bool v52; // al
  unsigned int v53; // ecx
  bool v54; // al
  unsigned int v55; // edx
  bool v56; // al
  unsigned int v57; // ecx
  unsigned int v58; // [rsp+40h] [rbp+20h] BYREF

  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayTestMode", &v58) )
  {
    CCommonRegistryData::m_dwOverlayTestMode = v58;
    CCommonRegistryData::m_fOverlayTestMode = 1;
  }
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableDesktopPlaneSplit", &v58) )
    CCommonRegistryData::m_fEnableDesktopPlaneSplit = v58 != 0;
  v58 = 0;
  HKLMDword = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyInterval", &v58);
  v1 = CCommonRegistryData::m_dwOverlayQualifyInterval;
  if ( HKLMDword )
    v1 = v58;
  CCommonRegistryData::m_dwOverlayQualifyInterval = v1;
  v58 = 0;
  v2 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyInterval", &v58);
  v3 = CCommonRegistryData::m_dwOverlayDisqualifyInterval;
  if ( v2 )
    v3 = v58;
  CCommonRegistryData::m_dwOverlayDisqualifyInterval = v3;
  v58 = 0;
  v4 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyCount", &v58);
  v5 = CCommonRegistryData::m_uOverlayQualifyCount;
  if ( v4 )
    v5 = v58;
  CCommonRegistryData::m_uOverlayQualifyCount = v5;
  v58 = 0;
  v6 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyCount", &v58);
  v7 = CCommonRegistryData::m_uOverlayDisqualifyCount;
  if ( v6 )
    v7 = v58;
  CCommonRegistryData::m_uOverlayDisqualifyCount = v7;
  RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableAdvancedDirectFlip", &v58);
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableIndependentFlip", &v58) )
    CCommonRegistryData::m_fDisableIndependentFlip = v58 != 0;
  v8 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"UniformSpaceDpiMode", &v58);
  v9 = CCommonRegistryData::m_fUniformSpaceDpiMode;
  v58 = 0;
  if ( v8 )
    v9 = 1;
  CCommonRegistryData::m_fUniformSpaceDpiMode = v9;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"FrameCounterPosition", &v58) )
    CCommonRegistryData::m_fDebugFrameCounterIsVertical = v58 != 0;
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"FlattenVirtualSurfaceEffectInput", &v58) )
    CCommonRegistryData::m_fFlattenVirtualSurfaceBrush = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCpuClipping", &v58) )
    CCommonRegistryData::m_fEnableCpuClipping = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCommonSuperSets", &v58) )
    CCommonRegistryData::m_fEnableCommonSuperSets = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnablePrimitiveReordering", &v58) )
    CCommonRegistryData::m_fEnablePrimitiveReordering = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableMegaRects", &v58) )
    CCommonRegistryData::m_fEnableMegaRects = v58 != 0;
  v10 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSize", &v58);
  v11 = CCommonRegistryData::m_dwMegaRectSize;
  if ( v10 )
    v11 = v58;
  CCommonRegistryData::m_dwMegaRectSize = v11;
  v12 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSearchCount", &v58);
  v13 = CCommonRegistryData::m_dwMegaRectSearchCount;
  if ( v12 )
    v13 = v58;
  CCommonRegistryData::m_dwMegaRectSearchCount = v13;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"CpuClipAreaThreshold", &v58) )
    CCommonRegistryData::m_flCpuClipAreaThreshold = (float)(int)v58;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"UseHWDrawListEntriesOnWARP", &v58) )
    CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableDrawListCaching", &v58) )
    CCommonRegistryData::m_fDisableDrawListCaching = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"LogExpressionPerfStats", &v58) )
    CCommonRegistryData::m_fLogExpressionPerfStats = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OptimizeForDirtyExpressions", &v58) )
    CCommonRegistryData::m_fOptimizeForDirtyExpressions = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"InteractionOutputPredictionDisabled", &v58) )
    CCommonRegistryData::m_fDisableInteractionOutputPrediction = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableEffectCaching", &v58) )
    CCommonRegistryData::m_fEnableEffectCaching = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"BackdropBlurCachingThrottleMs", &v58) )
  {
    v14 = v58;
    if ( v58 > 0x3E8 )
      v14 = 1000;
    v15 = g_qpcFrequency.QuadPart * v14;
  }
  else
  {
    v15 = 25 * g_qpcFrequency.QuadPart;
  }
  CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta = v15 / 1000;
  v16 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MaxD3DFeatureLevel", &v58);
  v17 = CCommonRegistryData::m_dwMaxD3DFeatureLevel;
  if ( v16 )
    v17 = v58;
  CCommonRegistryData::m_dwMaxD3DFeatureLevel = v17;
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"EnableBloom", &v58) )
    CCommonRegistryData::m_fSceneEnableBloom = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"EnableDrawToBackbuffer", &v58) )
    CCommonRegistryData::m_fSceneEnableDrawToBackbuffer = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"EnableImageProcessing", &v58) )
    CCommonRegistryData::m_fSceneEnableImageProcessing = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"EnableShadow", &v58) )
    CCommonRegistryData::m_fSceneEnableShadow = v58 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"ForceNonPrimaryDisplayAdapter", &v58) )
    CCommonRegistryData::m_fSceneForceNonPrimaryDisplayAdapter = v58 != 0;
  v18 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"MsaaQualityMode", &v58);
  v19 = CCommonRegistryData::m_dwSceneMsaaQualityMode;
  if ( v18 )
    v19 = v58;
  CCommonRegistryData::m_dwSceneMsaaQualityMode = v19;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"ImageProcessing8bit", &v58) )
    CCommonRegistryData::m_fSceneImageProcessing8bit = v58 != 0;
  v20 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"ImageProcessingMinWidth", &v58);
  v21 = CCommonRegistryData::m_dwSceneImageProcessingMinWidth;
  if ( v20 )
    v21 = v58;
  CCommonRegistryData::m_dwSceneImageProcessingMinWidth = v21;
  v22 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"ImageProcessingMinHeight", &v58);
  v23 = CCommonRegistryData::m_dwSceneImageProcessingMinHeight;
  if ( v22 )
    v23 = v58;
  CCommonRegistryData::m_dwSceneImageProcessingMinHeight = v23;
  v24 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"ImageProcessingResizeGrowth", &v58);
  v25 = CCommonRegistryData::m_dwSceneImageProcessingResizeGrowth;
  if ( v24 )
    v25 = v58;
  CCommonRegistryData::m_dwSceneImageProcessingResizeGrowth = v25;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"ImageProcessingResizeThreshold", &v58) )
    CCommonRegistryData::m_flSceneImageProcessingResizeThreshold = (float)(int)v58 / 100.0;
  v26 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Scene", L"SceneVisualCutoffThresholdInMS", &v58);
  v27 = CCommonRegistryData::m_dwSceneVisualCutoffThresholdInMS;
  if ( v26 )
    v27 = v58;
  CCommonRegistryData::m_dwSceneVisualCutoffThresholdInMS = v27;
  v28 = RegGetHKLMDword(
          L"Software\\Microsoft\\Windows\\Dwm\\Scene",
          L"SceneVisualCutoffCountOfConsecutiveIncidentsAllowed",
          &v58);
  v29 = CCommonRegistryData::m_dwSceneVisualCutoffCountOfConsecutiveIncidentsAllowed;
  if ( v28 )
    v29 = v58;
  CCommonRegistryData::m_dwSceneVisualCutoffCountOfConsecutiveIncidentsAllowed = v29;
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"GammaBlendPencil", &v58) )
    CCommonRegistryData::m_fGammaBlendPencil = v58 != 0;
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"GammaBlendWithFP16", &v58) )
    CCommonRegistryData::m_fGammaBlendWithFP16 = v58 != 0;
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableRenderPathTestMode", &v58) )
    CCommonRegistryData::m_fRenderPathTestMode = v58 != 0;
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisallowNonDrawListRendering", &v58) )
    CCommonRegistryData::m_fEnableDisallowNonDrawListRendering = v58 != 0;
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ForceEffectMode", &v58) )
  {
    v30 = CCommonRegistryData::m_forceEffectMode;
    if ( v58 <= 2 )
      v30 = v58;
    CCommonRegistryData::m_forceEffectMode = v30;
  }
  v58 = 0;
  v31 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ParallelModeLeaveAfterThresholdMS", &v58);
  v32 = CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS;
  if ( v31 )
    v32 = v58;
  CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS = v32;
  v58 = 1;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ParallelModePolicy", &v58) )
  {
    v33 = v58;
    if ( v58 >= 4 || v58 == 2 && !CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS )
      v33 = 1;
    CCommonRegistryData::m_parallelModePolicy = v33;
  }
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"SDRBoostPercentOverride", &v58) )
    CCommonRegistryData::m_flSDRBoostOverride = (float)(int)v58 / 100.0;
  v58 = 0;
  v34 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesReportPeriodMilliseconds", &v58);
  v35 = CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds;
  if ( v34 )
    v35 = v58;
  CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds = v35;
  v58 = 0;
  v36 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesSequenceMaximumPeriodMilliseconds", &v58);
  v37 = CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds;
  if ( v36 )
    v37 = v58;
  CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds = v37;
  v58 = 0;
  v38 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesSequenceIdleIntervalMilliseconds", &v58);
  v39 = CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds;
  if ( v38 )
    v39 = v58;
  CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds = v39;
  v58 = 1;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ConfigureInput", &v58) )
    CCommonRegistryData::m_fConfigureInput = v58 != 0;
  v58 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"SuperWetEnabled", &v58) )
    CCommonRegistryData::m_fSuperWetEnabled = v58 != 0;
  RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"SuperWetExtensionTimeMicroseconds", &v58);
  v40 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"InkGPUAccelOverrideVendorWhitelist", &v58);
  v41 = CCommonRegistryData::m_fInkGPUAccelOverrideVendorWhitelist;
  if ( v40 )
    v41 = v58;
  CCommonRegistryData::m_fInkGPUAccelOverrideVendorWhitelist = v41;
  v58 = 0;
  v42 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MousewheelScrollingMode", &v58);
  v43 = CCommonRegistryData::m_dwMousewheelScrollingMode;
  if ( v42 )
    v43 = v58;
  CCommonRegistryData::m_dwMousewheelScrollingMode = v43;
  v58 = 0;
  v44 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MousewheelAnimationDurationMs", &v58);
  v45 = CCommonRegistryData::m_dwMousewheelAnimationDurationMs;
  if ( v44 )
    v45 = v58;
  CCommonRegistryData::m_dwMousewheelAnimationDurationMs = v45;
  v58 = 0;
  v46 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"RenderThreadWatchdogTimeoutMilliseconds", &v58);
  v47 = CCommonRegistryData::m_renderThreadWatchdogTimeoutMilliseconds;
  if ( v46 )
    v47 = v58;
  CCommonRegistryData::m_renderThreadWatchdogTimeoutMilliseconds = v47;
  v58 = 0;
  v48 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"InitialWatchdogTelemetryTimeoutMilliseconds", &v58);
  v49 = CCommonRegistryData::m_initialWatchdogTelemetryTimeoutMilliseconds;
  if ( v48 )
    v49 = v58;
  CCommonRegistryData::m_initialWatchdogTelemetryTimeoutMilliseconds = v49;
  v58 = 0;
  v50 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"RecurringWatchdogTelemetryTimeoutMilliseconds", &v58);
  v51 = CCommonRegistryData::m_recurringWatchdogTelemetryTimeoutMilliseconds;
  if ( v50 )
    v51 = v58;
  CCommonRegistryData::m_recurringWatchdogTelemetryTimeoutMilliseconds = v51;
  v58 = 0;
  v52 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableProjectedShadows", &v58);
  v53 = CCommonRegistryData::m_fDisableProjectedShadows;
  if ( v52 )
    v53 = v58;
  CCommonRegistryData::m_fDisableProjectedShadows = v53;
  v58 = 0;
  v54 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableProjectedShadowsRendering", &v58);
  v55 = CCommonRegistryData::m_fDisableProjectedShadowsRendering;
  if ( v54 )
    v55 = v58;
  CCommonRegistryData::m_fDisableProjectedShadowsRendering = v55;
  v58 = 0;
  v56 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableFrontBufferRenderChecks", &v58);
  v57 = CCommonRegistryData::m_fEnableFrontBufferRenderChecks;
  if ( v56 )
    v57 = v58;
  CCommonRegistryData::m_fEnableFrontBufferRenderChecks = v57;
}

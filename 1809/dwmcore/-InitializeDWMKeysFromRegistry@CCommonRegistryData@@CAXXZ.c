/*
 * XREFs of ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x180084FD8
 * Callers:
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x180084F78 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800856A0 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
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
  unsigned int v9; // ecx
  bool v10; // al
  unsigned int v11; // ecx
  LONGLONG v12; // rcx
  bool v13; // al
  unsigned int v14; // ecx
  bool v15; // al
  unsigned int v16; // ecx
  bool v17; // al
  unsigned int v18; // ecx
  bool v19; // al
  unsigned int v20; // ecx
  bool v21; // al
  unsigned int v22; // ecx
  bool v23; // al
  unsigned int v24; // ecx
  bool v25; // al
  unsigned int v26; // ecx
  bool v27; // al
  unsigned int v28; // ecx
  bool v29; // al
  unsigned int v30; // ecx
  bool v31; // al
  unsigned int v32; // ecx
  bool v33; // al
  unsigned int v34; // ecx
  bool v35; // al
  unsigned int v36; // ecx
  bool v37; // al
  unsigned int v38; // ecx
  bool v39; // al
  unsigned int v40; // ecx
  bool v41; // al
  unsigned int v42; // edx
  bool v43; // al
  unsigned int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // [rsp+30h] [rbp+10h] BYREF

  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayTestMode", &v48) )
  {
    CCommonRegistryData::m_dwOverlayTestMode = v48;
    CCommonRegistryData::m_fOverlayTestMode = 1;
  }
  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableDesktopPlaneSplit", &v48) )
    CCommonRegistryData::m_fEnableDesktopPlaneSplit = v48 != 0;
  v48 = 0;
  HKLMDword = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyInterval", &v48);
  v1 = CCommonRegistryData::m_dwOverlayQualifyInterval;
  if ( HKLMDword )
    v1 = v48;
  CCommonRegistryData::m_dwOverlayQualifyInterval = v1;
  v48 = 0;
  v2 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyInterval", &v48);
  v3 = CCommonRegistryData::m_dwOverlayDisqualifyInterval;
  if ( v2 )
    v3 = v48;
  CCommonRegistryData::m_dwOverlayDisqualifyInterval = v3;
  v48 = 0;
  v4 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyCount", &v48);
  v5 = CCommonRegistryData::m_uOverlayQualifyCount;
  if ( v4 )
    v5 = v48;
  CCommonRegistryData::m_uOverlayQualifyCount = v5;
  v48 = 0;
  v6 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyCount", &v48);
  v7 = CCommonRegistryData::m_uOverlayDisqualifyCount;
  if ( v6 )
    v7 = v48;
  CCommonRegistryData::m_uOverlayDisqualifyCount = v7;
  RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableAdvancedDirectFlip", &v48);
  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"FrameCounterPosition", &v48) )
    CCommonRegistryData::m_fDebugFrameCounterIsVertical = v48 != 0;
  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"FlattenVirtualSurfaceEffectInput", &v48) )
    CCommonRegistryData::m_fFlattenVirtualSurfaceBrush = v48 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCpuClipping", &v48) )
    CCommonRegistryData::m_fEnableCpuClipping = v48 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCommonSuperSets", &v48) )
    CCommonRegistryData::m_fEnableCommonSuperSets = v48 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnablePrimitiveReordering", &v48) )
    CCommonRegistryData::m_fEnablePrimitiveReordering = v48 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableMegaRects", &v48) )
    CCommonRegistryData::m_fEnableMegaRects = v48 != 0;
  v8 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSize", &v48);
  v9 = CCommonRegistryData::m_dwMegaRectSize;
  if ( v8 )
    v9 = v48;
  CCommonRegistryData::m_dwMegaRectSize = v9;
  v10 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSearchCount", &v48);
  v11 = CCommonRegistryData::m_dwMegaRectSearchCount;
  if ( v10 )
    v11 = v48;
  CCommonRegistryData::m_dwMegaRectSearchCount = v11;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"CpuClipAreaThreshold", &v48) )
    CCommonRegistryData::m_flCpuClipAreaThreshold = (float)(int)v48;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"UseHWDrawListEntriesOnWARP", &v48) )
    CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP = v48 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableDrawListCaching", &v48) )
    CCommonRegistryData::m_fDisableDrawListCaching = v48 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"LogExpressionPerfStats", &v48) )
    CCommonRegistryData::m_fLogExpressionPerfStats = v48 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OptimizeForDirtyExpressions", &v48) )
    CCommonRegistryData::m_fOptimizeForDirtyExpressions = v48 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"InteractionOutputPredictionDisabled", &v48) )
    CCommonRegistryData::m_fDisableInteractionOutputPrediction = v48 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableEffectCaching", &v48) )
    CCommonRegistryData::m_fEnableEffectCaching = v48 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"BackdropBlurCachingThrottleMs", &v48) )
  {
    v45 = v48;
    if ( v48 > 0x3E8 )
      v45 = 1000;
    v12 = g_qpcFrequency.QuadPart * v45;
  }
  else
  {
    v12 = 25 * g_qpcFrequency.QuadPart;
  }
  CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta = v12 / 1000;
  v13 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MaxD3DFeatureLevel", &v48);
  v14 = CCommonRegistryData::m_dwMaxD3DFeatureLevel;
  if ( v13 )
    v14 = v48;
  CCommonRegistryData::m_dwMaxD3DFeatureLevel = v14;
  v48 = 0;
  v15 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Spatial", L"RenderPipelineLevel", &v48);
  v16 = CCommonRegistryData::m_uSpatialRenderPipelineLevel;
  if ( v15 )
    v16 = v48;
  CCommonRegistryData::m_uSpatialRenderPipelineLevel = v16;
  v17 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Spatial", L"CpuThreadPoolSize", &v48);
  v18 = CCommonRegistryData::m_uSpatialCpuThreadPoolSize;
  if ( v17 )
    v18 = v48;
  CCommonRegistryData::m_uSpatialCpuThreadPoolSize = v18;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Spatial", L"DisableDrawToBackbuffer", &v48) )
    CCommonRegistryData::m_fSpatialDisableDrawToBackbuffer = v48 != 0;
  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"GammaBlendPencil", &v48) )
    CCommonRegistryData::m_fGammaBlendPencil = v48 != 0;
  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"GammaBlendWithFP16", &v48) )
    CCommonRegistryData::m_fGammaBlendWithFP16 = v48 != 0;
  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableRenderPathTestMode", &v48) )
    CCommonRegistryData::m_fRenderPathTestMode = v48 != 0;
  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisallowNonDrawListRendering", &v48) )
    CCommonRegistryData::m_fEnableDisallowNonDrawListRendering = v48 != 0;
  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ForceEffectMode", &v48) )
  {
    v46 = CCommonRegistryData::m_forceEffectMode;
    if ( v48 <= 2 )
      v46 = v48;
    CCommonRegistryData::m_forceEffectMode = v46;
  }
  v48 = 0;
  v19 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ParallelModeLeaveAfterThresholdMS", &v48);
  v20 = CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS;
  if ( v19 )
    v20 = v48;
  CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS = v20;
  v48 = 1;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ParallelModePolicy", &v48) )
  {
    v47 = v48;
    if ( v48 >= 4 || v48 == 2 && !CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS )
      v47 = 1;
    CCommonRegistryData::m_parallelModePolicy = v47;
  }
  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"SDRBoostPercentOverride", &v48) )
    CCommonRegistryData::m_flSDRBoostOverride = (float)(int)v48 / 100.0;
  v48 = 0;
  v21 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesReportPeriodMilliseconds", &v48);
  v22 = CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds;
  if ( v21 )
    v22 = v48;
  CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds = v22;
  v48 = 0;
  v23 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesSequenceMaximumPeriodMilliseconds", &v48);
  v24 = CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds;
  if ( v23 )
    v24 = v48;
  CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds = v24;
  v48 = 0;
  v25 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesSequenceIdleIntervalMilliseconds", &v48);
  v26 = CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds;
  if ( v25 )
    v26 = v48;
  CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds = v26;
  v48 = 0;
  v27 = RegGetHKLMDword(
          L"Software\\Microsoft\\Windows\\Dwm",
          L"TelemetryFatFramesAlarmConsecutiveGlitchCountThreshold",
          &v48);
  v28 = CCommonRegistryData::m_telemetryFatFramesAlarmConsecutiveGlitchCountThreshold;
  if ( v27 )
    v28 = v48;
  CCommonRegistryData::m_telemetryFatFramesAlarmConsecutiveGlitchCountThreshold = v28;
  v48 = 0;
  v29 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFatFramesAlarmTimeoutMilliseconds", &v48);
  v30 = CCommonRegistryData::m_telemetryFatFramesAlarmTimeoutMilliseconds;
  if ( v29 )
    v30 = v48;
  CCommonRegistryData::m_telemetryFatFramesAlarmTimeoutMilliseconds = v30;
  v48 = 1;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ConfigureInput", &v48) )
    CCommonRegistryData::m_fConfigureInput = v48 != 0;
  v48 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"SuperWetEnabled", &v48) )
    CCommonRegistryData::m_fSuperWetEnabled = v48 != 0;
  v31 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"SuperWetExtensionTimeMicroseconds", &v48);
  v32 = CCommonRegistryData::m_dwSuperWetExtensionTimeMicroseconds;
  if ( v31 )
    v32 = v48;
  CCommonRegistryData::m_dwSuperWetExtensionTimeMicroseconds = v32;
  v33 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"InkGPUAccelOverrideVendorWhitelist", &v48);
  v34 = CCommonRegistryData::m_fInkGPUAccelOverrideVendorWhitelist;
  if ( v33 )
    v34 = v48;
  CCommonRegistryData::m_fInkGPUAccelOverrideVendorWhitelist = v34;
  v48 = 0;
  v35 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MousewheelScrollingMode", &v48);
  v36 = CCommonRegistryData::m_dwMousewheelScrollingMode;
  if ( v35 )
    v36 = v48;
  CCommonRegistryData::m_dwMousewheelScrollingMode = v36;
  v48 = 0;
  v37 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MousewheelAnimationDurationMs", &v48);
  v38 = CCommonRegistryData::m_dwMousewheelAnimationDurationMs;
  if ( v37 )
    v38 = v48;
  CCommonRegistryData::m_dwMousewheelAnimationDurationMs = v38;
  v48 = 0;
  v39 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"RenderThreadWatchdogTimeoutMilliseconds", &v48);
  v40 = CCommonRegistryData::m_renderThreadWatchdogTimeoutMilliseconds;
  if ( v39 )
    v40 = v48;
  CCommonRegistryData::m_renderThreadWatchdogTimeoutMilliseconds = v40;
  v48 = 0;
  v41 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableProjectedShadows", &v48);
  v42 = CCommonRegistryData::m_fDisableProjectedShadows;
  if ( v41 )
    v42 = v48;
  CCommonRegistryData::m_fDisableProjectedShadows = v42;
  v48 = 0;
  v43 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableProjectedShadowsRendering", &v48);
  v44 = CCommonRegistryData::m_fDisableProjectedShadowsRendering;
  if ( v43 )
    v44 = v48;
  CCommonRegistryData::m_fDisableProjectedShadowsRendering = v44;
}

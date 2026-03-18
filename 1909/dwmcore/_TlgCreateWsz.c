/*
 * XREFs of _TlgCreateWsz @ 0x180158BD8
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z @ 0x18001B9CC (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001BB98 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x1800A98E0 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800A9990 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800A9A28 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800B2EC4 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B3DA8 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x1800C2780 (--1CGlobalCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEAG@Z @ 0x180158BCC (-_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEAG@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018DE1C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801BE460 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801BE7F8 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x1801D3F88 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x18020629C (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1802076B0 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x18020E190 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x18020E3D0 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?StartInContact@CMotion@@IEAAX_N@Z @ 0x18020E808 (-StartInContact@CMotion@@IEAAX_N@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18020E8DC (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18022C404 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18022C5AC (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z @ 0x1802342F0 (-BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( pwsz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( pwsz[v2] );
  }
  pDesc->Reserved = 0;
  if ( !pwsz )
    pwsz = &::pwsz;
  pDesc->Ptr = (ULONGLONG)pwsz;
  pDesc->Size = 2 * v2 + 2;
}

/*
 * XREFs of ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180019A68
 * Callers:
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x180019058 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z @ 0x180019648 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180019810 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800199EC (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014D694 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014E1D4 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
        CTelemetryTouchLatencyAnalysis *this,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 result; // rax

  v3 = *((_QWORD *)this + 392);
  result = 0LL;
  if ( v3 )
    return (a3 - a2) / v3;
  return result;
}

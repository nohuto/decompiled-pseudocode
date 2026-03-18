/*
 * XREFs of ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800DEFB0
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z @ 0x18001D8AC (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001DA78 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800DEC2C (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18018E700 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018F55C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x1801912F4 (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 * Callees:
 *     ?IsVailContainer@@YAHXZ @ 0x1800DEFFC (-IsVailContainer@@YAHXZ.c)
 */

_DWORD *__fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // rdx

  v2 = a1;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    a1[5] = a2[5];
    a1[6] = a2[6];
    a1[7] = a2[7];
    a1[8] = a2[8];
    if ( (unsigned int)IsVailContainer() )
    {
      v2[2] = v3[2];
      v2[3] = v3[3];
      v2[4] = v3[4];
    }
  }
  return v2;
}

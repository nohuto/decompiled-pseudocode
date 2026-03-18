/*
 * XREFs of ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x18014F9AC
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z @ 0x180019648 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014D694 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 * Callees:
 *     <none>
 */

void __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(_DWORD *this, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax

  v2 = *this;
  if ( *this )
  {
    if ( v2 <= *a2 )
      v2 = *a2;
    *this = v2;
    v3 = this[1];
    if ( v3 <= a2[1] )
      v3 = a2[1];
    this[1] = v3;
    v4 = this[2];
    if ( v4 <= a2[2] )
      v4 = a2[2];
    this[2] = v4;
    v5 = this[3];
    if ( v5 <= a2[3] )
      v5 = a2[3];
    this[3] = v5;
    v6 = this[4];
    if ( v6 <= a2[4] )
      v6 = a2[4];
    this[4] = v6;
    v7 = this[5];
    if ( v7 <= a2[5] )
      v7 = a2[5];
    this[5] = v7;
  }
  else
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(this, a2);
  }
}

/*
 * XREFs of ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x1801912F4
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z @ 0x18001D8AC (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18018E700 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 * Callees:
 *     ?IsVailContainer@@YAHXZ @ 0x1800DEFFC (-IsVailContainer@@YAHXZ.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
        CTelemetryTouchLatencyAnalysis::CLatencyInfo *this,
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  _DWORD *v8; // rdx
  _DWORD *v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    if ( v2 <= *(_DWORD *)a2 )
      v2 = *(_DWORD *)a2;
    *(_DWORD *)this = v2;
    v3 = *((_DWORD *)this + 1);
    if ( v3 <= *((_DWORD *)a2 + 1) )
      v3 = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 1) = v3;
    v4 = *((_DWORD *)this + 5);
    if ( v4 <= *((_DWORD *)a2 + 5) )
      v4 = *((_DWORD *)a2 + 5);
    *((_DWORD *)this + 5) = v4;
    v5 = *((_DWORD *)this + 6);
    if ( v5 <= *((_DWORD *)a2 + 6) )
      v5 = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 6) = v5;
    v6 = *((_DWORD *)this + 7);
    if ( v6 <= *((_DWORD *)a2 + 7) )
      v6 = *((_DWORD *)a2 + 7);
    *((_DWORD *)this + 7) = v6;
    v7 = *((_DWORD *)this + 8);
    if ( v7 <= *((_DWORD *)a2 + 8) )
      v7 = *((_DWORD *)a2 + 8);
    *((_DWORD *)this + 8) = v7;
    if ( (unsigned int)IsVailContainer() )
    {
      v10 = v9[2];
      if ( v10 <= v8[2] )
        v10 = v8[2];
      v9[2] = v10;
      v11 = v9[3];
      if ( v11 <= v8[3] )
        v11 = v8[3];
      v9[3] = v11;
      v12 = v9[4];
      if ( v12 <= v8[4] )
        v12 = v8[4];
      v9[4] = v12;
    }
  }
  else
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(this, a2);
  }
}

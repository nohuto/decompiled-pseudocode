/*
 * XREFs of ??HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@AEBV01@@Z @ 0x18018E5D8
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z @ 0x18001D8AC (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18018E700 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 * Callees:
 *     ?IsVailContainer@@YAHXZ @ 0x1800DEFFC (-IsVailContainer@@YAHXZ.c)
 */

_DWORD *__fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator+(_DWORD *a1, __int64 a2, char *a3)
{
  signed __int64 v4; // r11
  __int64 v5; // r10
  int v6; // eax
  _DWORD *v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // r8
  _DWORD *v10; // r9

  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  v4 = a3 - (char *)a1;
  *(_DWORD *)(a2 + 32) = 0;
  v5 = 4LL;
  *(_DWORD *)a2 = *a1 + *(_DWORD *)a3;
  v6 = a1[1] + *((_DWORD *)a3 + 1);
  v7 = a1 + 5;
  *(_DWORD *)(a2 + 4) = v6;
  do
  {
    *(_DWORD *)((char *)v7 + a2 - (_QWORD)a1) = *v7 + *(_DWORD *)((char *)v7 + v4);
    ++v7;
    --v5;
  }
  while ( v5 );
  if ( (unsigned int)IsVailContainer() )
  {
    v8[2] = v10[2] + v9[2];
    v8[3] = v10[3] + v9[3];
    v8[4] = v10[4] + v9[4];
  }
  return v8;
}

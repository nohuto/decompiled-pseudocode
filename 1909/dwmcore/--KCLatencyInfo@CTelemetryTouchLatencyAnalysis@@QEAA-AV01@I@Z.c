/*
 * XREFs of ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x18018CF28
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001BB98 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018DE1C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     ?IsVailContainer@@YAHXZ @ 0x1800DF934 (-IsVailContainer@@YAHXZ.c)
 */

_DWORD *__fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r11
  unsigned int v5; // eax
  int *v6; // rcx
  char *v7; // rbx
  unsigned int v8; // r8d
  _DWORD *v9; // r9
  _DWORD *v10; // r10

  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = 0;
  v4 = 4LL;
  *(_DWORD *)a2 = *a1 / a3;
  v5 = a1[1];
  v6 = (int *)(a2 + 20);
  v7 = (char *)a1 - a2;
  *(_DWORD *)(a2 + 4) = v5 / a3;
  do
  {
    *v6 = *(int *)((char *)v6 + (_QWORD)v7) / a3;
    ++v6;
    --v4;
  }
  while ( v4 );
  if ( (unsigned int)IsVailContainer() )
  {
    v9[2] = v10[2] / v8;
    v9[3] = v10[3] / v8;
    v9[4] = v10[4] / v8;
  }
  return v9;
}

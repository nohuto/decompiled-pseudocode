/*
 * XREFs of GetWindowNCMetrics @ 0x1C0129D6C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     GetScaledLogFontForDpi @ 0x1C012A5EC (GetScaledLogFontForDpi.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     GetResizeBorderWidthForDpi @ 0x1C012C1DC (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C012C374 (GetWindowFrameMetricForDpi.c)
 */

__int64 __fastcall GetWindowNCMetrics(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int DpiForSystem; // esi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 DPIServerInfo; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  HBRUSH *DPIMetrics; // rdi

  DpiForSystem = GetDpiForSystem(a1, a2, a3);
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13LL, DpiForSystem);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26LL, DpiForSystem);
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidthForDpi(DpiForSystem);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0LL, DpiForSystem);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10LL, DpiForSystem);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12LL, DpiForSystem);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23LL, DpiForSystem);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24LL, DpiForSystem);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25LL, DpiForSystem);
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetricForDpi(v5, DpiForSystem);
  DPIServerInfo = GetDPIServerInfo(v7, v6, v8);
  DPIMetrics = (HBRUSH *)GetDPIMetrics(v11, v10, v12);
  GreExtGetObjectW(*(HBRUSH *)(DPIServerInfo + 8), 92LL, (char *)(a1 + 24));
  GreExtGetObjectW(DPIMetrics[4], 92LL, (char *)(a1 + 124));
  GreExtGetObjectW(*DPIMetrics, 92LL, (char *)(a1 + 224));
  GreExtGetObjectW(DPIMetrics[7], 92LL, (char *)(a1 + 316));
  return GetScaledLogFontForDpi(5LL, DpiForSystem, a1 + 408);
}

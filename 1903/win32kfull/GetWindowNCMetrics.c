/*
 * XREFs of GetWindowNCMetrics @ 0x1C00911AC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GetScaledLogFontForDpi @ 0x1C0021E28 (GetScaledLogFontForDpi.c)
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00913B8 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00913E0 (GetWindowFrameMetricForDpi.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 */

_BOOL8 __fastcall GetWindowNCMetrics(__int64 a1, __int64 a2)
{
  __int64 DpiForSystem; // rsi
  __int64 v4; // rcx
  __int64 DPIServerInfo; // rbx
  HBRUSH *DPIMetrics; // rdi

  DpiForSystem = (unsigned int)GetDpiForSystem(a1, a2);
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13LL, DpiForSystem);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidthForDpi(DpiForSystem);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetricForDpi(v4, (unsigned int)DpiForSystem);
  DPIServerInfo = GetDPIServerInfo();
  DPIMetrics = (HBRUSH *)GetDPIMetrics();
  GreExtGetObjectW(*(HBRUSH *)(DPIServerInfo + 8), 92LL, (char *)(a1 + 24));
  GreExtGetObjectW(DPIMetrics[4], 92LL, (char *)(a1 + 124));
  GreExtGetObjectW(*DPIMetrics, 92LL, (char *)(a1 + 224));
  GreExtGetObjectW(DPIMetrics[7], 92LL, (char *)(a1 + 316));
  return GetScaledLogFontForDpi(5u, DpiForSystem, a1 + 408);
}

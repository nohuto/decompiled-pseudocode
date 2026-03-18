/*
 * XREFs of GetWindowNCMetrics @ 0x1C00AA6A4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     GetScaledLogFontForDpi @ 0x1C00AB0C0 (GetScaledLogFontForDpi.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00ABA6C (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00ABA94 (GetWindowFrameMetricForDpi.c)
 */

__int64 __fastcall GetWindowNCMetrics(__int64 a1)
{
  unsigned int DpiForSystem; // esi
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 DPIServerInfo; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  HSURF *DPIMetrics; // rdi

  DpiForSystem = GetDpiForSystem();
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13LL, DpiForSystem, v3);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26LL, DpiForSystem, v4);
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidthForDpi(DpiForSystem);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0LL, DpiForSystem, v5);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10LL, DpiForSystem, v6);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12LL, DpiForSystem, v7);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23LL, DpiForSystem, v8);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24LL, DpiForSystem, v9);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25LL, DpiForSystem, v10);
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetricForDpi(v11, DpiForSystem);
  DPIServerInfo = GetDPIServerInfo(v13, v12, v14, v15);
  DPIMetrics = (HSURF *)GetDPIMetrics(v18, v17, v19, v20);
  GreExtGetObjectW(*(HSURF *)(DPIServerInfo + 8), 92LL, (char *)(a1 + 24));
  GreExtGetObjectW(DPIMetrics[4], 92LL, (char *)(a1 + 124));
  GreExtGetObjectW(*DPIMetrics, 92LL, (char *)(a1 + 224));
  GreExtGetObjectW(DPIMetrics[7], 92LL, (char *)(a1 + 316));
  return GetScaledLogFontForDpi(5LL, DpiForSystem, a1 + 408);
}

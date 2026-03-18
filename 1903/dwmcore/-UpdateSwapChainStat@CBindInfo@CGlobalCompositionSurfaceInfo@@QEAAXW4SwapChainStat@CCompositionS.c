/*
 * XREFs of ?UpdateSwapChainStat@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180022538
 * Callers:
 *     ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x18003A720 (--1CGlobalCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x18003D588 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAXPEAG@Z.c)
 *     ?UpdateSwapChainStat@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x18025DDD0 (-UpdateSwapChainStat@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfaceInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(_QWORD *a1, int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // r10

  v4 = a2;
  if ( a1[37] )
  {
    v6 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 24LL) + 8LL))(*(_QWORD *)(*a1 + 24LL)) + 496);
    if ( a3 )
      a1[2 * v4 + 29] = v6;
    else
      a1[2 * v4 + 30] += (v6 - a1[2 * v4 + 29]) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
  }
}

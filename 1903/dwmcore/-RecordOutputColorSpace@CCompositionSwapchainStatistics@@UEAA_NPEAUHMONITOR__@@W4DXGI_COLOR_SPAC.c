/*
 * XREFs of ?RecordOutputColorSpace@CCompositionSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180265590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOrCreateCompositionStatsForMonitor@CCompositionSwapchainStatistics@@AEAAAEAUCompositionStatsPerMonitor@1@PEAUHMONITOR__@@@Z @ 0x1802653A8 (-GetOrCreateCompositionStatsForMonitor@CCompositionSwapchainStatistics@@AEAAAEAUCompositionStats.c)
 */

char __fastcall CCompositionSwapchainStatistics::RecordOutputColorSpace(
        CCompositionSwapchainStatistics *this,
        HMONITOR a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  *((_DWORD *)CCompositionSwapchainStatistics::GetOrCreateCompositionStatsForMonitor(
                (CCompositionSwapchainStatistics *)((char *)this - 16),
                a2)
  + 20) = a3;
  return 1;
}

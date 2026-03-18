/*
 * XREFs of ?RecordTransform@CCompositionSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x180263D00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOrCreateCompositionStatsForMonitor@CCompositionSwapchainStatistics@@AEAAAEAUCompositionStatsPerMonitor@1@PEAUHMONITOR__@@@Z @ 0x180263AE8 (-GetOrCreateCompositionStatsForMonitor@CCompositionSwapchainStatistics@@AEAAAEAUCompositionStats.c)
 */

char __fastcall CCompositionSwapchainStatistics::RecordTransform(
        CCompositionSwapchainStatistics *this,
        HMONITOR a2,
        const struct CMILMatrix *a3)
{
  struct CCompositionSwapchainStatistics::CompositionStatsPerMonitor *CompositionStatsForMonitor; // rax

  CompositionStatsForMonitor = CCompositionSwapchainStatistics::GetOrCreateCompositionStatsForMonitor(
                                 (CCompositionSwapchainStatistics *)((char *)this - 16),
                                 a2);
  *(_OWORD *)CompositionStatsForMonitor = *(_OWORD *)a3;
  *((_OWORD *)CompositionStatsForMonitor + 1) = *((_OWORD *)a3 + 1);
  *((_OWORD *)CompositionStatsForMonitor + 2) = *((_OWORD *)a3 + 2);
  *((_OWORD *)CompositionStatsForMonitor + 3) = *((_OWORD *)a3 + 3);
  *((_DWORD *)CompositionStatsForMonitor + 16) = *((_DWORD *)a3 + 16);
  return 1;
}

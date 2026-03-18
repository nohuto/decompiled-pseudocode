/*
 * XREFs of ?RecordCompositionMode@CCompositionSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@W4BufferCompositionMode@@@Z @ 0x180263C90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOrCreateCompositionStatsForMonitor@CCompositionSwapchainStatistics@@AEAAAEAUCompositionStatsPerMonitor@1@PEAUHMONITOR__@@@Z @ 0x180263AE8 (-GetOrCreateCompositionStatsForMonitor@CCompositionSwapchainStatistics@@AEAAAEAUCompositionStats.c)
 */

char __fastcall CCompositionSwapchainStatistics::RecordCompositionMode(__int64 a1, HMONITOR a2, int a3)
{
  struct CCompositionSwapchainStatistics::CompositionStatsPerMonitor *CompositionStatsForMonitor; // rax

  CompositionStatsForMonitor = CCompositionSwapchainStatistics::GetOrCreateCompositionStatsForMonitor(
                                 (CCompositionSwapchainStatistics *)(a1 - 16),
                                 a2);
  if ( a3 )
  {
    if ( a3 == 1 )
      *((_BYTE *)CompositionStatsForMonitor + 84) = 1;
  }
  else
  {
    *((_BYTE *)CompositionStatsForMonitor + 85) = 1;
  }
  return 1;
}

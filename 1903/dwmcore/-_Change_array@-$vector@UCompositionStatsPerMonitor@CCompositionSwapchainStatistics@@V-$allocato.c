/*
 * XREFs of ?_Change_array@?$vector@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@V?$allocator@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@@std@@@std@@AEAAXQEAUCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@_K1@Z @ 0x180265604
 * Callers:
 *     ??$_Emplace_reallocate@AEBUCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@@?$vector@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@V?$allocator@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@@std@@@std@@QEAAPEAUCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@QEAU23@AEBU23@@Z @ 0x180264D34 (--$_Emplace_reallocate@AEBUCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@@-$vector.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CCompositionSwapchainStatistics::CompositionStatsPerMonitor>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 88 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 88LL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 88 * a3;
  result = a2 + 88 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

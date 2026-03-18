/*
 * XREFs of ??$_Emplace_reallocate@AEBUCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@@?$vector@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@V?$allocator@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@@std@@@std@@QEAAPEAUCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@QEAU23@AEBU23@@Z @ 0x180263474
 * Callers:
 *     ?GetOrCreateCompositionStatsForMonitor@CCompositionSwapchainStatistics@@AEAAAEAUCompositionStatsPerMonitor@1@PEAUHMONITOR__@@@Z @ 0x180263AE8 (-GetOrCreateCompositionStatsForMonitor@CCompositionSwapchainStatistics@@AEAAAEAUCompositionStats.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@V?$allocator@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@@std@@@std@@AEAAXQEAUCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@_K1@Z @ 0x180263D44 (-_Change_array@-$vector@UCompositionStatsPerMonitor@CCompositionSwapchainStatistics@@V-$allocato.c)
 */

__int64 __fastcall std::vector<CCompositionSwapchainStatistics::CompositionStatsPerMonitor>::_Emplace_reallocate<CCompositionSwapchainStatistics::CompositionStatsPerMonitor const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  SIZE_T v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r14
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // xmm1_8
  __int64 v20; // rcx
  __int64 v22; // xmm1_8

  v3 = a2;
  v5 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v5 / 88;
  if ( v7 / 88 == 0x2E8BA2E8BA2E8BALL )
    std::_Xlength_error((const char *)v7);
  v9 = v7 / 88 + 1;
  v10 = (a1[2] - *a1) / 88;
  v11 = v10 >> 1;
  if ( v10 <= 0x2E8BA2E8BA2E8BALL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 88 * v12;
  if ( v12 > 0x2E8BA2E8BA2E8BALL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = 88 * v8;
  v16 = (_OWORD *)v14;
  *(_OWORD *)(v15 + v14) = *(_OWORD *)a3;
  *(_OWORD *)(v15 + v14 + 16) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(v15 + v14 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(v15 + v14 + 48) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(v15 + v14 + 64) = *(_OWORD *)(a3 + 64);
  *(_QWORD *)(v15 + v14 + 80) = *(_QWORD *)(a3 + 80);
  v17 = a1[1];
  v18 = *a1;
  if ( v3 == v17 )
  {
    while ( v18 != v17 )
    {
      *v16 = *(_OWORD *)v18;
      v16 = (_OWORD *)((char *)v16 + 88);
      *(_OWORD *)((char *)v16 - 72) = *(_OWORD *)(v18 + 16);
      *(_OWORD *)((char *)v16 - 56) = *(_OWORD *)(v18 + 32);
      *(_OWORD *)((char *)v16 - 40) = *(_OWORD *)(v18 + 48);
      *(_OWORD *)((char *)v16 - 24) = *(_OWORD *)(v18 + 64);
      v22 = *(_QWORD *)(v18 + 80);
      v18 += 88LL;
      *((_QWORD *)v16 - 1) = v22;
    }
  }
  else
  {
    if ( v18 != v3 )
    {
      do
      {
        *v16 = *(_OWORD *)v18;
        v16 = (_OWORD *)((char *)v16 + 88);
        *(_OWORD *)((char *)v16 - 72) = *(_OWORD *)(v18 + 16);
        *(_OWORD *)((char *)v16 - 56) = *(_OWORD *)(v18 + 32);
        *(_OWORD *)((char *)v16 - 40) = *(_OWORD *)(v18 + 48);
        *(_OWORD *)((char *)v16 - 24) = *(_OWORD *)(v18 + 64);
        v19 = *(_QWORD *)(v18 + 80);
        v18 += 88LL;
        *((_QWORD *)v16 - 1) = v19;
      }
      while ( v18 != v3 );
      v17 = a1[1];
    }
    if ( v3 != v17 )
    {
      v20 = v14 + v15 - v3;
      do
      {
        *(_OWORD *)(v20 + v3 + 88) = *(_OWORD *)v3;
        *(_OWORD *)(v20 + v3 + 104) = *(_OWORD *)(v3 + 16);
        *(_OWORD *)(v20 + v3 + 120) = *(_OWORD *)(v3 + 32);
        *(_OWORD *)(v20 + v3 + 136) = *(_OWORD *)(v3 + 48);
        *(_OWORD *)(v20 + v3 + 152) = *(_OWORD *)(v3 + 64);
        *(_QWORD *)(v20 + v3 + 168) = *(_QWORD *)(v3 + 80);
        v3 += 88LL;
      }
      while ( v3 != v17 );
    }
  }
  std::vector<CCompositionSwapchainStatistics::CompositionStatsPerMonitor>::_Change_array(a1, v14, v9, v12);
  return v15 + *a1;
}

/*
 * XREFs of ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x180224458
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18008B940 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z @ 0x18022568C (-PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z.c)
 *     ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x18022571C (-_Change_array@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollectio.c)
 *     ?pop_back@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAXXZ @ 0x180225828 (-pop_back@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollection@@@s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CDepthSortingLayer>::_Tidy(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        if ( *(_QWORD *)v1 )
        {
          std::_Deallocate<16,0>(*(void **)v1, (*(_QWORD *)(v1 + 16) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFFCuLL);
          *(_QWORD *)v1 = 0LL;
          *(_QWORD *)(v1 + 8) = 0LL;
          *(_QWORD *)(v1 + 16) = 0LL;
        }
        v1 += 40LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    std::_Deallocate<16,0>((void *)v1, 40 * ((a1[2] - v1) / 40));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}

/*
 * XREFs of ?pop_back@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAXXZ @ 0x180225828
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z @ 0x1802255A8 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x180224458 (-_Tidy@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::vector<CDepthSortedVisualCollection>::pop_back(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(void **)(v1 - 24);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, 176 * ((*(_QWORD *)(v1 - 8) - (_QWORD)v3) / 176LL));
    *(_QWORD *)(v1 - 24) = 0LL;
    *(_QWORD *)(v1 - 16) = 0LL;
    *(_QWORD *)(v1 - 8) = 0LL;
  }
  std::vector<CDepthSortingLayer>::_Tidy((__int64 *)(v1 - 56));
  *(_QWORD *)(a1 + 8) -= 56LL;
}

/*
 * XREFs of ?_Tidy@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ @ 0x18025CC28
 * Callers:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18025C8E8 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DepthGraphNode>::_Tidy(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // rsi
  void *v5; // rcx

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v1 != v3 )
    {
      v4 = v1 + 5;
      do
      {
        v5 = (void *)*(v4 - 2);
        if ( v5 )
        {
          std::_Deallocate<16,0>(v5, (*v4 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
          *(v4 - 2) = 0LL;
          *(v4 - 1) = 0LL;
          *v4 = 0LL;
        }
        v1 += 7;
        v4 += 7;
      }
      while ( v1 != v3 );
      v1 = *(_QWORD **)a1;
    }
    std::_Deallocate<16,0>(v1, 56 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 56LL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

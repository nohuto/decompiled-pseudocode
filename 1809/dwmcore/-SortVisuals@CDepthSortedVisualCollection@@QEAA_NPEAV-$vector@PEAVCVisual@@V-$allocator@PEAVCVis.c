/*
 * XREFs of ?SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180231BE0
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z @ 0x1802255A8 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x180231FA0 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 */

char __fastcall CDepthSortedVisualCollection::SortVisuals(__int64 *a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi

  v2 = *((_DWORD *)a1 + 6);
  if ( v2 == -1 )
    return 1;
  v5 = *a1;
  while ( 1 )
  {
    v6 = 5LL * v2;
    if ( !(unsigned __int8)CDepthSortingLayer::SortVisuals(v5 + 40LL * v2, a2, a1 + 4) )
      break;
    v5 = *a1;
    v2 = *(_DWORD *)(*a1 + 8 * v6 + 32);
    if ( v2 == -1 )
      return 1;
  }
  return 0;
}

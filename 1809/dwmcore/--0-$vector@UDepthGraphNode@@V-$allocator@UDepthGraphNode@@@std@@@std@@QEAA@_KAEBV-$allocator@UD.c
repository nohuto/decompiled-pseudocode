/*
 * XREFs of ??0?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@QEAA@_KAEBV?$allocator@UDepthGraphNode@@@1@@Z @ 0x180231DB4
 * Callers:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x180231FA0 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 *__fastcall std::vector<DepthGraphNode>::vector<DepthGraphNode>(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v2 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x492492492492492LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v4 = 56 * a2;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(56 * a2);
    *a1 = v5;
    a1[1] = v5;
    a1[2] = v4 + v5;
    if ( v2 )
    {
      v6 = v5 + 40;
      v5 += v4;
      do
      {
        *(_QWORD *)(v6 - 16) = 0LL;
        *(_QWORD *)(v6 - 8) = 0LL;
        *(_QWORD *)v6 = 0LL;
        *(_DWORD *)(v6 + 8) = 0;
        *(_BYTE *)(v6 - 24) = 1;
        v6 += 56LL;
        --v2;
      }
      while ( v2 );
    }
    a1[1] = v5;
  }
  return a1;
}

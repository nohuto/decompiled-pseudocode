/*
 * XREFs of ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18000A624
 * Callers:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18000A32C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x18000A4D8 (-AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180024F00 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 * Callees:
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000A6C4 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListEntryBatch@@AEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x18000A710 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListEntryBatch@@AEBV-$span@PEAVCBaseDrawListEntry@@.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CBatchOptimizer::DiscardEmptyLayers(CBatchOptimizer *this, int a2, unsigned int a3)
{
  __int64 v4; // rdi
  unsigned int i; // esi
  __int64 v7; // r14
  gsl::details *v8; // rcx
  gsl::details *v9; // [rsp+20h] [rbp-28h] BYREF
  char *v10; // [rsp+28h] [rbp-20h]

  if ( a3 )
  {
    v4 = a2;
    for ( i = 0; i < a3; ++i )
    {
      v7 = 520LL * *((int *)this + v4 + 12);
      v10 = (char *)this + v7 + 120;
      v8 = (gsl::details *)*(unsigned int *)((char *)this + v7 + 96);
      v9 = v8;
      if ( !v10 && v8 )
      {
        gsl::details::terminate(v8);
        JUMPOUT(0x1800F3216LL);
      }
      CBatchOptimizer::DiscardEntries(*(_QWORD *)(*((_QWORD *)this + 1) + 168LL), &v9);
      *(_DWORD *)((char *)this + v7 + 96) = 0;
      CBatchOptimizer::RecycleLayer(this, v4);
    }
  }
}

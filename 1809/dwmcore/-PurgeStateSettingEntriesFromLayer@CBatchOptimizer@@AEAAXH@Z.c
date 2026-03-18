/*
 * XREFs of ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000A440
 * Callers:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18000A32C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x180025784 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListEntryBatch@@AEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x18000A710 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListEntryBatch@@AEBV-$span@PEAVCBaseDrawListEntry@@.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CBatchOptimizer::PurgeStateSettingEntriesFromLayer(CBatchOptimizer *this, int a2)
{
  _DWORD *v2; // rbx
  int v3; // eax
  __int64 v4; // rdi
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_DWORD *)((char *)this + 520 * *((int *)this + a2 + 12));
  v3 = v2[24] - v2[25];
  if ( v3 )
  {
    v4 = v3;
    v5[0] = v3;
    if ( v3 < 0 || (v5[1] = v2 + 30, v2 == (_DWORD *)-120LL) )
    {
      gsl::details::terminate(this);
      JUMPOUT(0x18000A4CELL);
    }
    CBatchOptimizer::DiscardEntries(*(_QWORD *)(*((_QWORD *)this + 1) + 168LL), v5);
    memmove_0(v2 + 30, &v2[2 * v4 + 30], 8LL * (unsigned int)v2[25]);
    v2[24] = v2[25];
  }
}

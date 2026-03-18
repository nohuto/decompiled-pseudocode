/*
 * XREFs of ?AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z @ 0x1801AEA34
 * Callers:
 *     ?AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18015FDE8 (-AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVCli.c)
 * Callees:
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x18004DFD8 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBatch::AppendDrawListEntry(CDrawListEntryBatch *this, struct CDrawListEntry *a2)
{
  __int64 v2; // rax
  CBatchOptimizer *v3; // rcx

  ++dword_18033C758;
  v2 = *((_QWORD *)this + 3);
  v3 = *(CBatchOptimizer **)(v2 + 184);
  if ( !v3 )
    return CDrawListBatchManager::BatchDrawListEntry((CDrawListBatchManager *)(v2 + 8), a2);
  CBatchOptimizer::AddRenderingDrawListEntry(v3, a2);
  return 0LL;
}

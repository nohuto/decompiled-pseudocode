/*
 * XREFs of ?AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z @ 0x180189CE0
 * Callers:
 *     ?AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801FDC60 (-AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVCli.c)
 * Callees:
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180024778 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBatch::AppendDrawListEntry(CDrawListEntryBatch *this, struct CDrawListEntry *a2)
{
  __int64 v2; // rax
  CBatchOptimizer *v3; // rcx

  ++dword_180308078;
  v2 = *((_QWORD *)this + 3);
  v3 = *(CBatchOptimizer **)(v2 + 184);
  if ( !v3 )
    return CDrawListBatchManager::BatchDrawListEntry((CDrawListBatchManager *)(v2 + 8), a2);
  CBatchOptimizer::AddRenderingDrawListEntry(v3, a2);
  return 0LL;
}

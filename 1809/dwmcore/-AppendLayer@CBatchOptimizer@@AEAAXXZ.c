/*
 * XREFs of ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180024CD0
 * Callers:
 *     ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x18000A4D8 (-AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180024778 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 * Callees:
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000A6C4 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180024D34 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x180025284 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 */

void __fastcall CBatchOptimizer::AppendLayer(CBatchOptimizer *this)
{
  __int64 v2; // rcx
  __int128 v3; // xmm0

  if ( *((_DWORD *)this + 8) == 8 && (!*((_BYTE *)this + 4240) || !CBatchOptimizer::TryMergeOneLayer(this)) )
  {
    CBatchOptimizer::FlushBottomLayer(this);
    CBatchOptimizer::RecycleLayer(this, 0);
  }
  v2 = *((int *)this + 8);
  v3 = *((_OWORD *)this + 1);
  *((_DWORD *)this + 8) = v2 + 1;
  *(_OWORD *)((char *)this + 520 * *((int *)this + v2 + 12) + 80) = v3;
}

/*
 * XREFs of ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x18004E740
 * Callers:
 *     ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x18001177C (-AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18004D4D0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x18004DFD8 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180015D84 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18004C89C (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18004D0FC (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
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

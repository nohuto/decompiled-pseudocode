/*
 * XREFs of ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180057BA8
 * Callers:
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18000CC48 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800582A8 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180065430 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800666A0 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::RecycleLayer(CBatchOptimizer *this, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r8
  int *v6; // rdx
  int v7; // r11d

  v2 = *((int *)this + 8);
  if ( a2 != (_DWORD)v2 - 1 )
  {
    v3 = a2;
    v4 = *((int *)this + 8);
    v5 = v2 - 1;
    v6 = (int *)((char *)this + 4 * a2 + 48);
    v7 = *v6;
    do
    {
      ++v3;
      *v6 = v6[1];
      ++v6;
    }
    while ( v3 != v5 );
    *((_DWORD *)this + v4 + 11) = v7;
    LODWORD(v2) = *((_DWORD *)this + 8);
  }
  *((_DWORD *)this + 8) = v2 - 1;
}

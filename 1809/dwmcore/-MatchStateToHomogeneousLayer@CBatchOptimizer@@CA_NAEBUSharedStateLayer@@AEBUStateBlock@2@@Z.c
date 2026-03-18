/*
 * XREFs of ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x180017198
 * Callers:
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x180025784 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBatchOptimizer::MatchStateToHomogeneousLayer(
        const struct SharedStateLayer *a1,
        const struct SharedStateLayer::StateBlock *a2)
{
  int v4; // eax

  if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
    return 0;
  if ( *((_QWORD *)a1 + 4) )
    return *((_DWORD *)a1 + 2) == *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a1 + 5);
  if ( v4 == 1 )
    return *((_DWORD *)a1 + 2) == *((_DWORD *)a2 + 2);
  else
    return v4 == 0;
}

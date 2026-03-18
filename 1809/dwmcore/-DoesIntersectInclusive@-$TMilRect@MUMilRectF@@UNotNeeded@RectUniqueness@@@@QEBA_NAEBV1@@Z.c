/*
 * XREFs of ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180025934
 * Callers:
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180024778 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x180025284 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180047930 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(float *a1, float *a2)
{
  if ( a1[2] < *a2 )
    return 0;
  if ( a2[2] < *a1 || a1[3] < a2[1] )
    return 0;
  return a2[3] >= a1[1];
}

/*
 * XREFs of ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801617A0
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180162930 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Buy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAA_N_K@Z @ 0x180167654 (-_Buy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAA_N_K@Z.c)
 */

__int64 *__fastcall std::vector<MilRectF>::vector<MilRectF>(__int64 *a1, __int64 a2)
{
  size_t v4; // rbx
  __int64 v5; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (unsigned __int8)std::vector<MilRectF>::_Buy(a1, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4) )
  {
    v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v5 = *a1;
    memmove_0((void *)*a1, *(const void **)a2, v4);
    a1[1] = v4 + v5;
  }
  return a1;
}

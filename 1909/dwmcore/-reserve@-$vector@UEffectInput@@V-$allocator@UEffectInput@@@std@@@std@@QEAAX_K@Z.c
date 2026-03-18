/*
 * XREFs of ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x18003CE40
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x18003D154 (-_Reallocate_exactly@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall std::vector<EffectInput>::reserve(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  result = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x4EC4EC4EC4EC4EC5LL) >> 64) >> 63;
  if ( a2 > v2 / 104 )
  {
    if ( a2 > 0x276276276276276LL )
      std::_Xlength_error((const char *)a1);
    return std::vector<EffectInput>::_Reallocate_exactly(a1, a2);
  }
  return result;
}

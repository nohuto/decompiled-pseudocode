/*
 * XREFs of ?_Buy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAA_N_K@Z @ 0x180171BB4
 * Callers:
 *     ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18016BF60 (--0-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801C2588 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char __fastcall std::vector<MilRectF>::_Buy(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  __int64 v4; // rdi
  __int64 v5; // rax

  result = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    v4 = 16 * a2;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(16 * a2);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v4 + v5;
    return 1;
  }
  return result;
}

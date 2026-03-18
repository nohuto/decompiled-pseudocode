/*
 * XREFs of ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800303B0
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@1@AEBV?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@1@@Z @ 0x180030358 (--0-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_compare@PEAV.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800DBA58 (--1CDropShadow@@UEAA@XZ.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1801CAA50 (-_Check_size@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_co.c)
 * Callees:
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x180030444 (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCVis.c)
 *     ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180030590 (-_Reallocate_exactly@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_sim_ea_180030590.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Init(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 24;
  v4 = 2 * a2;
  if ( 2 * a2 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) >> 3) )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>>::_Reallocate_exactly(
      a1 + 24,
      2 * a2);
  }
  v7 = *(_QWORD *)(a1 + 8);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>::assign(
    v2,
    v4,
    &v7);
  result = a2 - 1;
  *(_QWORD *)(a1 + 48) = a2 - 1;
  *(_QWORD *)(a1 + 56) = a2;
  return result;
}

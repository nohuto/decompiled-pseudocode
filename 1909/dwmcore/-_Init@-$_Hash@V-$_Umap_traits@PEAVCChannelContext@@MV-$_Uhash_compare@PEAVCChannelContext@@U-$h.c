/*
 * XREFs of ?_Init@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800C5758
 * Callers:
 *     ??1CChannelContext@@UEAA@XZ @ 0x18004B180 (--1CChannelContext@@UEAA@XZ.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800C55F4 (-_Check_size@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1800E28AC (--0CExpressionManager@@AEAA@XZ.c)
 * Callees:
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@@Z @ 0x1800C57EC (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCCha.c)
 *     ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800C58E8 (-_Reallocate_exactly@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_sim_ea_1800C58E8.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Init(
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
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CChannelContext * const,float>>>>>::_Reallocate_exactly(
      a1 + 24,
      2 * a2);
  }
  v7 = *(_QWORD *)(a1 + 8);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CChannelContext * const,float>>>>>::assign(
    v2,
    v4,
    &v7);
  result = a2 - 1;
  *(_QWORD *)(a1 + 48) = a2 - 1;
  *(_QWORD *)(a1 + 56) = a2;
  return result;
}

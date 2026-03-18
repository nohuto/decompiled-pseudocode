/*
 * XREFs of ?_Init@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E53C8
 * Callers:
 *     ??0CExpressionManager@@AEAA@XZ @ 0x180062CE8 (--0CExpressionManager@@AEAA@XZ.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180069298 (-_Check_size@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext.c)
 *     ??1CChannelContext@@UEAA@XZ @ 0x1800949F0 (--1CChannelContext@@UEAA@XZ.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800E4E48 (-_Reallocate_exactly@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_sim_ea_1800E4E48.c)
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@@Z @ 0x1800E545C (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCCha.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Init(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 3;
  v4 = 2 * a2;
  if ( 2 * a2 > (unsigned __int64)((__int64)(a1[5] - a1[3]) >> 3) )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CChannelContext * const,float>>>>>::_Reallocate_exactly(
      a1 + 3,
      2 * a2);
  }
  v8 = a1[1];
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CChannelContext * const,float>>>>>::assign(
    v2,
    v4,
    &v8);
  result = a2 - 1;
  a1[6] = a2 - 1;
  a1[7] = a2;
  return result;
}

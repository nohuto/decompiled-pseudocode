/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@2@@Z @ 0x18039B994
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@1@AEAU?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@1@1@Z @ 0x180399CDC (--$_Insert_at@AEAU-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@s.c)
 *     _std::_Tree_std::_Tmap_traits_HSTRING_______ptr64_std::shared_ptr_TwinUI::Lighting::IAssistantLight__std::less_HSTRING_______ptr64__std::allocator_std::pair_HSTRING_______ptr64_const_std::shared_ptr_TwinUI::Lighting::IAssistantLight______0___::_Insert_hint_std::pair_HSTRING_______ptr64_const_std::shared_ptr_TwinUI::Lighting::IAssistantLight____&___ptr64_std::_Tree_node_std::pair_HSTRING_______ptr64_const_std::shared_ptr_TwinUI::Lighting::IAssistantLight____void_____ptr64______ptr64__::_1_::catch$75 @ 0x18039A062 (_std--_Tree_std--_Tmap_traits_HSTRING_______ptr64_std--shared_ptr_TwinUI--Lighting--IAssistantLi.c)
 *     _std::_Tree_std::_Tmap_traits_HSTRING_______ptr64_std::shared_ptr_TwinUI::Lighting::IAssistantLight__std::less_HSTRING_______ptr64__std::allocator_std::pair_HSTRING_______ptr64_const_std::shared_ptr_TwinUI::Lighting::IAssistantLight______0___::_Insert_nohint_std::pair_HSTRING_______ptr64_const_std::shared_ptr_TwinUI::Lighting::IAssistantLight____&___ptr64_std::_Tree_node_std::pair_HSTRING_______ptr64_const_std::shared_ptr_TwinUI::Lighting::IAssistantLight____void_____ptr64______ptr64__::_1_::catch$31 @ 0x18039A1CD (_std--_Tree_std--_Tmap_traits_HSTRING_______ptr64_std--shared_ptr_TwinUI--Lighting-_ea_18039A1CD.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a2[6];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x38);
}

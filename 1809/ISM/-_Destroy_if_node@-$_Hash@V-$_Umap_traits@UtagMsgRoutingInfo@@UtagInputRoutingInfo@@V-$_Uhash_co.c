/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@@Z @ 0x1800D523C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std::_Uhash_compare_tagMsgRoutingInfo_std::hash_tagMsgRoutingInfo__std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo____0___::_Insert_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__________::_1_::catch$1 @ 0x1801343D4 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std--_Uhash_compare_tagMsgRo.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  operator delete(a2, (const struct std::nothrow_t *)0x68);
}

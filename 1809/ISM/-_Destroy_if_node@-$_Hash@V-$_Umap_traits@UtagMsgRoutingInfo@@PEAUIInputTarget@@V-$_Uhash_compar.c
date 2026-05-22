/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@Z @ 0x18008DDE0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_IInputTarget_____ptr64_std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__IInputTarget_____ptr64____0___::_Insert_std::pair_tagMsgRoutingInfo_const__IInputTarget_____ptr64__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__IInputTarget_____ptr64__________::_1_::catch$1 @ 0x180132561 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_IInputTarget_____ptr64_std--_Uhash_compare_tagMs.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  operator delete(a2, (const struct std::nothrow_t *)0x40);
}

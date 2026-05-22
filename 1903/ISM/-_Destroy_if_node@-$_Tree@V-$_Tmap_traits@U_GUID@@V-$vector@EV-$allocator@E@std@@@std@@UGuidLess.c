/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x1801605F4
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@1@1@Z @ 0x18014CB7C (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@std@@@std@@PEAU-$_Tree_node.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_std::vector_unsigned_char_std::allocator_unsigned_char____Windows::Internal::Holographic::PropertyCache::GuidLess_std::allocator_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char________0___::_Insert_hint_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______&_std::_Tree_node_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______void_______::_1_::catch$41 @ 0x18014E52D (_std--_Tree_std--_Tmap_traits__GUID_std--vector_unsigned_char_std--allocator_unsigned_char____Wi.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_std::vector_unsigned_char_std::allocator_unsigned_char____Windows::Internal::Holographic::PropertyCache::GuidLess_std::allocator_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char________0___::_Insert_nohint_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______&_std::_Tree_node_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______void_______::_1_::catch$21 @ 0x18014F82B (_std--_Tree_std--_Tmap_traits__GUID_std--vector_unsigned_char_std--allocator_unsign_ea_18014F82B.c)
 * Callees:
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800B5E44 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Destroy_if_node(
        __int64 a1,
        void *a2)
{
  std::vector<unsigned char>::_Tidy((__int64)a2 + 48);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x48);
}

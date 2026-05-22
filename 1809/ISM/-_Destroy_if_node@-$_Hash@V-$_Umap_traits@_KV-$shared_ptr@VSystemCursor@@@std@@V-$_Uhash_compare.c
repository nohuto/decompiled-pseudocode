/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180064C08
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::shared_ptr_LegacyDeviceInfo__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo______0___::_Insert_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo____________::_1_::catch$1 @ 0x180131348 (_std--_Hash_std--_Umap_traits_unsigned_long_std--shared_ptr_LegacyDeviceInfo__std--_Uhash_compar.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_SystemCursor__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursor______0___::_Insert_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursor____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursor____________::_1_::catch$1 @ 0x180132AEE (_std--_Hash_std--_Umap_traits_unsigned___int64_std--shared_ptr_SystemCursor__std--_Uhash_compare.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180064864 (-erase@-$list@U-$pair@$$CBKV-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V-$allocator@U-$pair@$$C.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::_Destroy_if_node(
        __int64 a1,
        void *a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>::erase(a1 + 8, &v3, a2);
}

/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_DataSourcePrincipal__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_DataSourcePrincipal______0___::_Insert_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_DataSourcePrincipal____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_DataSourcePrincipal____________::_1_::catch$56 @ 0x180069AA7
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18006E68C (-erase@-$list@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V-$allocator@U-.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_DataSourcePrincipal__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_DataSourcePrincipal______0___::_Insert_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_DataSourcePrincipal______std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_DataSourcePrincipal____________::_1_::catch_56(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>::erase(
    *(_QWORD *)(a2 + 80) + 8LL,
    a2 + 80,
    *(_QWORD *)(a2 + 104));
  throw;
}

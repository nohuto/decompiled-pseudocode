/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned_long_unsigned_short_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_short____0___::_Insert_std::pair_unsigned_long_const__unsigned_short__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__unsigned_short__________::_1_::catch$56 @ 0x1800B9DC7
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?erase@?$list@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@@Z @ 0x180034768 (-erase@-$list@PEAUISystemContextObserver@@V-$allocator@PEAUISystemContextObserver@@@std@@@std@@Q.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned_long_unsigned_short_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_short____0___::_Insert_std::pair_unsigned_long_const__unsigned_short____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__unsigned_short__________::_1_::catch_56(
        __int64 a1,
        __int64 a2)
{
  std::list<ISystemContextObserver *>::erase(*(_QWORD *)(a2 + 80) + 8LL, (_QWORD *)(a2 + 80), *(__int64 **)(a2 + 104));
  throw;
}

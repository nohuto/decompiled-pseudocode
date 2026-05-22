/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned_long_InputContext_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputContext____0___::_Insert_std::pair_unsigned_long_const__InputContext__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__InputContext__________::_1_::catch$91 @ 0x18003AD10
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CBKUInputContext@@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@Z @ 0x1800C59E4 (-erase@-$list@U-$pair@$$CBKUInputContext@@@std@@V-$allocator@U-$pair@$$CBKUInputContext@@@std@@@.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned_long_InputContext_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputContext____0___::_Insert_std::pair_unsigned_long_const__InputContext____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__InputContext__________::_1_::catch_91(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<unsigned long const,InputContext>>::erase(
    *(_QWORD *)(a2 + 112) + 8LL,
    a2 + 112,
    *(_QWORD *)(a2 + 136));
  throw;
}

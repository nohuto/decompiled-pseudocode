/*
 * XREFs of ?erase@?$list@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x1803A8624
 * Callers:
 *     _std::_Hash_std::_Umap_traits_HostIdentifierKey_unsigned_int_std::_Uhash_compare_HostIdentifierKey_std::hash_HostIdentifierKey__std::equal_to_HostIdentifierKey____std::allocator_std::pair_HostIdentifierKey_const__unsigned_int____1___::_Insert_std::pair_HostIdentifierKey_const__unsigned_int__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_HostIdentifierKey_const__unsigned_int__________::_1_::catch$54 @ 0x1803A4772 (_std--_Hash_std--_Umap_traits_HostIdentifierKey_unsigned_int_std--_Uhash_compare_HostIdentifierK.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x1803A8524 (-erase@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<HostIdentifierKey const,unsigned int>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rbx

  v4 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  std::_Deallocate<16,0>(a3, (const struct std::nothrow_t *)0x20);
  *a2 = v4;
  return a2;
}

/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@Z @ 0x18000FADC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_ViewHierarchy::ViewHierarchyEntry_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry____0___::_Insert_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry__________::_1_::catch$3 @ 0x18012E617 (_std--_Hash_std--_Umap_traits_unsigned_int_ViewHierarchy--ViewHierarchyEntry_std--_Uhash_compare.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx

  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  v3 = a2[3];
  if ( v3 )
  {
    a2[3] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  }
  operator delete(a2, (const struct std::nothrow_t *)0x28);
}

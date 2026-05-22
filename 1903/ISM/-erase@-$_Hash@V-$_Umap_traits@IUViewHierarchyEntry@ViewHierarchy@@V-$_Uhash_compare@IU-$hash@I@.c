/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@Z @ 0x180059F58
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_ViewHierarchy::ViewHierarchyEntry_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry____0___::_Insert_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry__________::_1_::catch$90 @ 0x18003B76F (_std--_Hash_std--_Umap_traits_unsigned_int_ViewHierarchy--ViewHierarchyEntry_std--__ea_18003B76F.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@Z @ 0x18005A020 (-erase@-$list@U-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$allocator@U-$pair@$$CBIUV.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax

  v5 = 0xCBF29CE484222325uLL;
  v6 = (unsigned __int8 *)(a3 + 2);
  if ( a3 + 2 <= (_QWORD *)((char *)a3 + 20) )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - (unsigned __int8 *)(a3 + 2) != ((_QWORD *)((char *)a3 + 20) >= a3 + 2 ? 4 : 0) );
  }
  v8 = a1[3];
  v9 = 2 * (v5 & a1[6]);
  if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == a3 )
    {
      *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = a1[1];
      v8 = a1[3];
      v10 = a1[1];
    }
    else
    {
      v10 = a3[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == a3 )
  {
    *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = *a3;
  }
  std::list<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>::erase(a1 + 1, a2, a3);
  return a2;
}

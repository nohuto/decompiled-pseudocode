/*
 * XREFs of ?at@?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEBAAEBUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x180059BC8
 * Callers:
 *     ?GetAllAncestors@ViewHierarchy@@UEBA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x180059370 (-GetAllAncestors@ViewHierarchy@@UEBA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?GetTopLevelHostView@ViewHierarchy@@UEBAII@Z @ 0x1800594B0 (-GetTopLevelHostView@ViewHierarchy@@UEBAII@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180002000 (-lower_bound@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$h.c)
 */

__int64 *__fastcall std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::lower_bound(
    (_QWORD *)a1,
    &v4,
    a2);
  if ( v4 == *(__int64 **)(a1 + 8) )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
  }
  return v4 + 3;
}

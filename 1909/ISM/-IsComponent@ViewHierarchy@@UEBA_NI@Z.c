/*
 * XREFs of ?IsComponent@ViewHierarchy@@UEBA_NI@Z @ 0x1800595B0
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180002000 (-lower_bound@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$h.c)
 */

bool __fastcall ViewHierarchy::IsComponent(ViewHierarchy *this, int a2)
{
  char v3; // di
  __int64 *v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::lower_bound(
    (_QWORD *)this + 10,
    &v5,
    (unsigned __int8 *)&v6);
  if ( v5 != *((__int64 **)this + 11) )
    return *((_DWORD *)v5 + 8) != 0;
  return v3;
}

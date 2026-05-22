/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180002000
 * Callers:
 *     ?GetView@ViewHierarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@I@Z @ 0x1800022B0 (-GetView@ViewHierarchy@@UEBA-AV-$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@I@Z.c)
 *     ?IsComponent@ViewHierarchy@@UEBA_NI@Z @ 0x180059830 (-IsComponent@ViewHierarchy@@UEBA_NI@Z.c)
 *     ?at@?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEBAAEBUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x180059E48 (-at@-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::lower_bound(
        _QWORD *a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // r9
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // r10
  __int64 v13; // r11
  __int64 *v14; // rcx

  v5 = 0xCBF29CE484222325uLL;
  v6 = a3;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v7 = *v6++;
      v5 = 0x100000001B3LL * (v7 ^ v5);
    }
    while ( v6 - a3 != 4 );
  }
  v8 = a1[3];
  v9 = (__int64 *)a1[1];
  v10 = 2 * (v5 & a1[6]);
  v11 = *(__int64 **)(v8 + 16 * (v5 & a1[6]));
  v12 = *(__int64 **)(v8 + 8 * v10);
  v13 = v8 + 8 * v10;
  while ( 1 )
  {
    v14 = v12 == v9 ? (__int64 *)a1[1] : **(__int64 ***)(v13 + 8);
    if ( v11 == v14 )
      break;
    if ( *((_DWORD *)v11 + 4) == *(_DWORD *)a3 )
    {
      *a2 = v11;
      return a2;
    }
    v11 = (__int64 *)*v11;
  }
  *a2 = v9;
  return a2;
}

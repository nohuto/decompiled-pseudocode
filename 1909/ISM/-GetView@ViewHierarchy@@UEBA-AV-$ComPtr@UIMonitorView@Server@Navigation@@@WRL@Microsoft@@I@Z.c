/*
 * XREFs of ?GetView@ViewHierarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@I@Z @ 0x1800022B0
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180002000 (-lower_bound@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$h.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall ViewHierarchy::GetView(__int64 a1, __int64 **a2, int a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  if ( *(_QWORD *)(a1 + 48) || *(_DWORD *)(a1 + 144) == 1 )
  {
    v5 = 0LL;
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::lower_bound(
      (_QWORD *)(a1 + 80),
      &v10,
      (unsigned __int8 *)&v11);
    v6 = 0LL;
    v7 = 0LL;
    if ( v10 != *(__int64 **)(a1 + 88) )
    {
      v8 = v10[3];
      if ( v8 )
      {
        v5 = v10[3];
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 8LL))(v8, 0LL);
        v6 = (__int64 *)v5;
        v7 = v5;
      }
    }
    *a2 = 0LL;
    if ( a2 == &v10 )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}

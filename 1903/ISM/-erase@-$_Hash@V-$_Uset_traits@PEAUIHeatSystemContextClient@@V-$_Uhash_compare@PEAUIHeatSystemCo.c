/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIHeatSystemContextClient@@@Z @ 0x18007B9EC
 * Callers:
 *     ?UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18007B760 (-UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSy.c)
 * Callees:
 *     ?clear@?$list@IV?$allocator@I@std@@@std@@QEAAXXZ @ 0x1800347E0 (-clear@-$list@IV-$allocator@I@std@@@std@@QEAAXXZ.c)
 *     ?equal_range@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@V12@@2@AEB_K@Z @ 0x1800567AC (-equal_range@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D964 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V32@@Z @ 0x18007B91C (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::erase(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 *v8; // r8
  __int64 *v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::equal_range(
    a1,
    &v9,
    a2);
  v3 = v9;
  v4 = v9;
  v5 = 0LL;
  while ( v4 != v10 )
  {
    ++v5;
    v4 = (__int64 *)*v4;
  }
  v6 = (__int64 *)a1[1];
  if ( v9 == (__int64 *)*v6 && v10 == v6 )
  {
    std::list<unsigned int>::clear((__int64)(a1 + 1));
    std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
      a1,
      8LL);
  }
  else
  {
    while ( v3 != v10 )
    {
      v8 = v3;
      v3 = (__int64 *)*v3;
      std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
        a1,
        &v11,
        v8);
    }
  }
  return v5;
}

/*
 * XREFs of ?UnregisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800687A0
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180056710 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x180068418 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 *     ?GlobalUnsuppressInput@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x180068498 (-GlobalUnsuppressInput@-$CBaseInputObserverServer@$0M@@@AEAAXXZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@@Z @ 0x1800689F8 (-erase@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0M@@@V-$_Uhash.c)
 */

__int64 __fastcall CBaseInputObserverServer<12>::UnregisterObserverClient(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  __int64 v4; // rbx
  unsigned __int64 ClientId; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  ClientId = GetClientId(a3);
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    a1 + 144,
    (__int64)&v7,
    (unsigned __int8 *)&ClientId);
  v4 = v7;
  if ( v7 != *(_QWORD *)(a1 + 152) )
  {
    if ( !*(_DWORD *)(v7 + 32) )
      CBaseInputObserverServer<12>::GlobalUnsuppressInput(a1);
    std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>,0>>::erase(
      a1 + 144,
      &ClientId,
      v4);
  }
  return 0LL;
}

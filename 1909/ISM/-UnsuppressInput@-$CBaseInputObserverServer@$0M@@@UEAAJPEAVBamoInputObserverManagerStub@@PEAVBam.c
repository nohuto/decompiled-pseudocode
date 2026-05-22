/*
 * XREFs of ?UnsuppressInput@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180068820
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180056710 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x180068418 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 *     ?GlobalUnsuppressInput@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x180068498 (-GlobalUnsuppressInput@-$CBaseInputObserverServer@$0M@@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseInputObserverServer<12>::UnsuppressInput(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  unsigned __int64 ClientId; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  ClientId = GetClientId(a3);
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    a1 + 144,
    (__int64)&v6,
    (unsigned __int8 *)&ClientId);
  if ( v6 != *(_QWORD *)(a1 + 152) && !*(_DWORD *)(v6 + 32) )
  {
    *(_DWORD *)(v6 + 32) = 1;
    CBaseInputObserverServer<12>::GlobalUnsuppressInput(a1);
  }
  return 0LL;
}

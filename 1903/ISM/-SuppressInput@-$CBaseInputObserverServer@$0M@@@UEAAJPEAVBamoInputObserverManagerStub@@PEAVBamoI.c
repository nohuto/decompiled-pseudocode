/*
 * XREFs of ?SuppressInput@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180068930
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x1800569B0 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ?DoesClientHaveRequiredCapablity@@YA_NPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x180068608 (-DoesClientHaveRequiredCapablity@@YA_NPEBVBamoInputObserverClientProxy@@PEBG@Z.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x180068658 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 *     ?GlobalSuppressInput@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x180068690 (-GlobalSuppressInput@-$CBaseInputObserverServer@$0M@@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseInputObserverServer<12>::SuppressInput(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  __int64 v5; // rbx
  unsigned __int64 ClientId; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  ClientId = GetClientId(a3);
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    a1 + 144,
    (__int64)&v8,
    (unsigned __int8 *)&ClientId);
  v5 = v8;
  if ( v8 != *(_QWORD *)(a1 + 152)
    && *(_DWORD *)(v8 + 32) == 1
    && DoesClientHaveRequiredCapablity(a3, L"inputSuppression") )
  {
    try
    {
      CBaseInputObserverServer<12>::GlobalSuppressInput(a1);
      *(_DWORD *)(v5 + 32) = 0;
    }
    catch ( msl::utilities::SafeIntException )
    {
    }
  }
  return 0LL;
}

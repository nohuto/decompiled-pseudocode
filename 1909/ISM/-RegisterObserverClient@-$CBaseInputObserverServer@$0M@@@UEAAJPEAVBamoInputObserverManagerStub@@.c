/*
 * XREFs of ?RegisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800685C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180056710 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180067F14 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Hash@_ea_180067F14.c)
 *     ?DoesClientHaveRequiredCapablity@@YA_NPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x1800683C8 (-DoesClientHaveRequiredCapablity@@YA_NPEBVBamoInputObserverClientProxy@@PEBG@Z.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x180068418 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseInputObserverServer<12>::RegisterObserverClient(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  __int64 v5; // rsi
  __int64 v6; // r8
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 *v10; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 ClientId; // [rsp+80h] [rbp+20h] BYREF
  unsigned __int64 *p_ClientId; // [rsp+98h] [rbp+38h] BYREF

  ClientId = GetClientId(a3);
  v5 = a1 + 144;
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    a1 + 144,
    (__int64)&p_ClientId,
    (unsigned __int8 *)&ClientId);
  if ( p_ClientId == *(unsigned __int64 **)(a1 + 152) && DoesClientHaveRequiredCapablity(a3, L"inputObservation") )
  {
    *((_DWORD *)a3 + 14) = *(_DWORD *)(a1 + 212);
    p_ClientId = (unsigned __int64 *)a3;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&p_ClientId);
    std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
      a1 + 144,
      (__int64)&p_ClientId,
      (unsigned __int8 *)&ClientId);
    v7 = p_ClientId;
    if ( p_ClientId == *(unsigned __int64 **)(v5 + 8) )
    {
      p_ClientId = &ClientId;
      std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        v5,
        (__int64)&v10,
        v6,
        &p_ClientId);
      v7 = v10;
    }
    v8 = v7[3];
    v7[3] = (unsigned __int64)a3;
    if ( v8 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 8LL))(v8);
    *((_DWORD *)v7 + 8) = 1;
  }
  return 0LL;
}

/*
 * XREFs of ?InvokeNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@234@@Z @ 0x180159444
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C020 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014B578 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Inte.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x180161608 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::InvokeNodePropertiesUpdatedCallback(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF

  if ( a3 )
  {
    v9[1] = -2LL;
    v9[0] = 0LL;
    v6 = (RTL_SRWLOCK *)(a1 + 136);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 136));
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
      a1 + 168,
      &v11,
      a2);
    if ( v11 != *(_QWORD *)(a1 + 168) )
      WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>>>(
        (_QWORD *)(v11 + 48),
        v9);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    if ( v9[0] )
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v11);
      v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
             a1,
             &GUID_e9d88ae7_9177_4d6f_99dc_c960a35e0928,
             &v11);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          694LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v9[0] + 48LL))(v9[0], v11, a2, a3);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          695LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v11);
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v9);
  }
}

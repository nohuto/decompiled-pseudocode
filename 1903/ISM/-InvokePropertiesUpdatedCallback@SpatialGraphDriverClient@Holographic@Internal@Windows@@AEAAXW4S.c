/*
 * XREFs of ?InvokePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXW4SpatialGraphPropertyFlags@234@@Z @ 0x18015958C
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C010 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     ?StaticNodesChangeIdTimerCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18015E5F0 (-StaticNodesChangeIdTimerCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAXPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UISpatialGraphPropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UISpatialGraphPropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014B5FC (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UISpatialGraphPropertiesUpdatedCallback@Holographic@Internal.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::InvokePropertiesUpdatedCallback(
        __int64 a1,
        unsigned int a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
  {
    v6 = 0LL;
    if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback>>>(
                (_QWORD *)(a1 + 160),
                &v6) >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 48LL))(
             v6,
             *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL),
             a2);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          666LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v4);
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v6);
  }
}

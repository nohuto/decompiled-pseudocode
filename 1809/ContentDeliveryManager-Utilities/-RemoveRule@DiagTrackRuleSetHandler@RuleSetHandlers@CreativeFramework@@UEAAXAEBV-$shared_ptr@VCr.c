/*
 * XREFs of ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180078BB0
 * Callers:
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180062C70 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180063EC4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180023CE8 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800603E4 (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_1800603E4.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180065FE4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180077ED4 (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180078078 (-Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDelive.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x1800789EC (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x180079188 (--$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsyncOpera.c)
 *     ??$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@$$ZW4423@@wil@@YAXPEAUIStorageItem@Storage@Windows@@P8123@EAAJW4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@@Z$$QEAW4423@@Z @ 0x180079210 (--$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyn.c)
 *     ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x180079304 (-GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA-AV-$basic_st.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800794AC (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800798E0 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800A4FD0 (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15 #try_helpers=1
void __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule(__int64 a1, void ***a2)
{
  __int64 v4; // rdi
  const wchar_t *v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  int SoftLandingFolderForUser; // eax
  unsigned __int64 v9; // rax
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  Microsoft::WRL::Details *v12; // rcx
  unsigned int v13; // eax
  Microsoft::WRL::Details *v14; // rcx
  UINT32 v15; // edx
  HRESULT v16; // eax
  const WCHAR *v17; // rax
  __int64 v18; // r8
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // [rsp+20h] [rbp-4C8h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-4C0h] BYREF
  int v28; // [rsp+30h] [rbp-4B8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-4B0h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-4A8h]
  unsigned int v31; // [rsp+44h] [rbp-4A4h]
  unsigned int v32; // [rsp+48h] [rbp-4A0h]
  unsigned int v33; // [rsp+4Ch] [rbp-49Ch]
  HRESULT v34; // [rsp+50h] [rbp-498h]
  int v35; // [rsp+54h] [rbp-494h]
  HSTRING v36; // [rsp+58h] [rbp-490h] BYREF
  __int64 v37; // [rsp+60h] [rbp-488h] BYREF
  const WCHAR *v38; // [rsp+68h] [rbp-480h] BYREF
  _QWORD v39[4]; // [rsp+70h] [rbp-478h] BYREF
  __int64 *v40; // [rsp+90h] [rbp-458h]
  __int64 v41; // [rsp+98h] [rbp-450h]
  __int64 v42; // [rsp+A0h] [rbp-448h]
  __int64 v43; // [rsp+A8h] [rbp-440h]
  wil::details::in1diag3 *v44; // [rsp+B0h] [rbp-438h]
  __int64 v45; // [rsp+B8h] [rbp-430h]
  wil::details::in1diag3 *v46; // [rsp+C0h] [rbp-428h]
  __int64 v47; // [rsp+C8h] [rbp-420h]
  __int64 (__fastcall ***v48)(_QWORD, GUID *, _QWORD *); // [rsp+D0h] [rbp-418h]
  __int64 v49; // [rsp+D8h] [rbp-410h]
  wchar_t *v50[2]; // [rsp+E0h] [rbp-408h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-3F8h]
  unsigned __int64 v52; // [rsp+F8h] [rbp-3F0h]
  void *v53[3]; // [rsp+100h] [rbp-3E8h] BYREF
  unsigned __int64 v54; // [rsp+118h] [rbp-3D0h]
  HSTRING_HEADER hstringHeader; // [rsp+120h] [rbp-3C8h] BYREF
  HSTRING string; // [rsp+138h] [rbp-3B0h] BYREF
  void **v57; // [rsp+140h] [rbp-3A8h] BYREF
  _QWORD v58[3]; // [rsp+148h] [rbp-3A0h] BYREF
  int v59; // [rsp+160h] [rbp-388h]
  int *v60; // [rsp+168h] [rbp-380h]
  int *v61; // [rsp+170h] [rbp-378h]
  int v62; // [rsp+178h] [rbp-370h] BYREF
  char v63; // [rsp+17Ch] [rbp-36Ch]
  int v64; // [rsp+1A0h] [rbp-348h] BYREF
  const char *v65; // [rsp+1A8h] [rbp-340h]
  __int64 v66; // [rsp+1B0h] [rbp-338h]
  char v67; // [rsp+1B8h] [rbp-330h]
  __int64 v68; // [rsp+1C0h] [rbp-328h]
  _BYTE v69[144]; // [rsp+1C8h] [rbp-320h] BYREF
  __int64 v70; // [rsp+258h] [rbp-290h]
  __int64 v71; // [rsp+260h] [rbp-288h]
  __int64 v72; // [rsp+268h] [rbp-280h]
  volatile signed __int32 *v73; // [rsp+270h] [rbp-278h]
  _BYTE v74[24]; // [rsp+280h] [rbp-268h] BYREF
  __int64 v75; // [rsp+298h] [rbp-250h]
  WCHAR sourceString[264]; // [rsp+2A0h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4E8h] [rbp+0h]

  v39[2] = -2LL;
  v39[1] = a1;
  v4 = *(_QWORD *)(a1 + 8);
  v52 = 7LL;
  v51 = 0LL;
  LOWORD(v50[0]) = 0;
  std::wstring::assign((void **)v50, *a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = (const wchar_t *)v50;
  if ( v52 >= 8 )
    v5 = v50[0];
  v57 = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v58[0] = 0LL;
  v58[1] = &v57;
  v58[2] = 0LL;
  v59 = 0;
  v60 = &v64;
  v61 = &v62;
  v62 = 0;
  v63 = 0;
  v67 = 0;
  v64 = 0;
  v65 = "DiagTrackRuleSetHandlerRemoveRule";
  v66 = 0LL;
  v68 = 1LL;
  v70 = 0LL;
  memset_0(v69, 0, sizeof(v69));
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v57 = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)&v57,
    v5,
    0,
    (const char *)(v4 + 8));
  if ( v52 >= 8 )
    operator delete(v50[0]);
  v52 = 7LL;
  v51 = 0LL;
  LOWORD(v50[0]) = 0;
  CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::GetFileNameForRule(v6, v53, *a2);
  SoftLandingFolderForUser = GetSoftLandingFolderForUser((HANDLE)0xFFFFFFFFFFFFFFFALL, sourceString, v7);
  if ( SoftLandingFolderForUser < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)SoftLandingFolderForUser);
LABEL_38:
    Microsoft::WRL::Details::RaiseException(v12);
LABEL_39:
    Microsoft::WRL::Details::RaiseException(v14);
LABEL_40:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
LABEL_41:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x4F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)0x80070490LL);
    goto LABEL_42;
  }
  v9 = -1LL;
  do
    ++v9;
  while ( sourceString[v9] );
  v39[3] = v9;
  v10 = -1;
  v11 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v11 = v9;
  v30 = v11;
  v12 = v9 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0LL;
  v31 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v9 > 0xFFFFFFFF )
    goto LABEL_38;
  v13 = v11 + 1;
  if ( v11 + 1 >= v11 )
    v10 = v11 + 1;
  v32 = v10;
  v14 = v13 < v11 ? (Microsoft::WRL::Details *)0x80070216LL : 0LL;
  v33 = v13 < v11 ? 0x80070216 : 0;
  if ( v13 < v11 )
    goto LABEL_39;
  v15 = v10 - 1;
  if ( v11 < v10 )
    v15 = v11;
  v16 = WindowsCreateStringReference(sourceString, v15, &hstringHeader, &string);
  v34 = v16;
  if ( v16 < 0 )
    goto LABEL_40;
  v36 = string;
  v40 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>(&v37);
  v41 = *v40;
  ___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
    (__int64)&v29,
    v41,
    (__int64 (__fastcall *)(__int64, _QWORD, __int64 *)) Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}},
    &v36);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  string = 0LL;
  v17 = (const WCHAR *)v53;
  if ( v54 >= 8 )
    v17 = (const WCHAR *)v53[0];
  v38 = v17;
  v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v74, &v38);
  v43 = *(_QWORD *)(v42 + 24);
  v39[0] = v43;
  ___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
    &v27,
    v29,
    v18,
    v39);
  v75 = 0LL;
  v19 = retaddr;
  v44 = retaddr;
  if ( !v27 )
    goto LABEL_41;
  v26 = 0LL;
  v45 = 0LL;
  v20 = (**v27)(v27, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v26);
  v35 = v20;
  v21 = retaddr;
  v46 = retaddr;
  if ( v20 < 0 )
  {
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0x52,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)v20);
    JUMPOUT(0x18007917DLL);
  }
  v28 = 1;
  ___CallAndWaitForCompletion_UIStorageItem_Storage_Windows__W4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3___ZW4423__wil__YAXPEAUIStorageItem_Storage_Windows__P8123_EAAJW4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3__Z__QEAW4423__Z(
    v26,
     Windows::Storage::IStorageItem::`vcall'{72,{flat}},
    &v28);
  v22 = v26;
  v47 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v27;
  v48 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v23)[2])(v23);
  }
  v24 = v29;
  v49 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  *(_BYTE *)(a1 + 24) = 1;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)&v57,
    (const char *)(*(_QWORD *)(a1 + 8) + 8LL));
  if ( v54 >= 8 )
    operator delete(v53[0]);
  v54 = 7LL;
  v53[2] = 0LL;
  LOWORD(v53[0]) = 0;
  v57 = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v57);
  if ( v73 )
  {
    if ( _InterlockedExchangeAdd(v73, 0xFFFFFFFF) == 1 )
    {
      v25 = v73;
      if ( v73 )
      {
        wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v73 + 2));
        operator delete((void *)v25);
      }
    }
    v73 = 0LL;
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)&v62);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v58);
}

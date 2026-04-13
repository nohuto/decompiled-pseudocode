/*
 * XREFs of ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007A780
 * Callers:
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180064750 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800659C4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180024388 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180061BD4 (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_180061BD4.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180067D10 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180079A3C (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180079BF4 (-Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDelive.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x18007A598 (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ??$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@$$ZW4423@@wil@@YAXPEAUIStorageItem@Storage@Windows@@P8123@EAAJW4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@@Z$$QEAW4423@@Z @ 0x18007ADE4 (--$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyn.c)
 *     ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x18007AED4 (-GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA-AV-$basic_st.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007B07C (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18007B4D8 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ??$wait_for_completion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18007B6E8 (--$wait_for_completion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@.c)
 *     ??_9IStorageFolder@Storage@Windows@@$BFA@AA @ 0x18007BE74 (--_9IStorageFolder@Storage@Windows@@$BFA@AA.c)
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800A9040 (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
void __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule(__int64 a1, void ***a2)
{
  __int64 v4; // rdi
  const wchar_t *v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  int SoftLandingFolderForUser; // eax
  unsigned __int64 v9; // rax
  HRESULT v10; // eax
  __int64 v11; // r8
  const WCHAR *v12; // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rcx
  wil::details::in1diag3 *v16; // rcx
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rdx
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rbx
  __int64 v25; // [rsp+20h] [rbp-4F8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-4F0h] BYREF
  int v27; // [rsp+30h] [rbp-4E8h]
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-4E0h] BYREF
  int v29; // [rsp+40h] [rbp-4D8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-4D0h] BYREF
  int v31; // [rsp+50h] [rbp-4C8h]
  int v32; // [rsp+54h] [rbp-4C4h]
  HRESULT v33; // [rsp+58h] [rbp-4C0h]
  int v34; // [rsp+60h] [rbp-4B8h]
  int v35; // [rsp+68h] [rbp-4B0h]
  HSTRING v36; // [rsp+70h] [rbp-4A8h] BYREF
  __int64 v37; // [rsp+78h] [rbp-4A0h] BYREF
  const WCHAR *v38[4]; // [rsp+80h] [rbp-498h] BYREF
  __int64 *v39; // [rsp+A0h] [rbp-478h]
  __int64 v40; // [rsp+A8h] [rbp-470h]
  HSTRING_HEADER *v41; // [rsp+B0h] [rbp-468h]
  PVOID Reserved1; // [rsp+B8h] [rbp-460h]
  __int64 v43; // [rsp+C0h] [rbp-458h]
  __int64 *v44; // [rsp+C8h] [rbp-450h]
  __int64 v45; // [rsp+D0h] [rbp-448h]
  wil::details::in1diag3 *v46; // [rsp+D8h] [rbp-440h]
  __int64 v47; // [rsp+E0h] [rbp-438h]
  wil::details::in1diag3 *v48; // [rsp+E8h] [rbp-430h]
  __int64 v49; // [rsp+F0h] [rbp-428h]
  wil::details::in1diag3 *v50; // [rsp+F8h] [rbp-420h]
  __int64 v51; // [rsp+100h] [rbp-418h]
  __int64 (__fastcall ***v52)(_QWORD, _QWORD, _QWORD); // [rsp+108h] [rbp-410h]
  __int64 v53; // [rsp+110h] [rbp-408h]
  wchar_t *v54[2]; // [rsp+118h] [rbp-400h] BYREF
  __int64 v55; // [rsp+128h] [rbp-3F0h]
  unsigned __int64 v56; // [rsp+130h] [rbp-3E8h]
  void *v57[3]; // [rsp+138h] [rbp-3E0h] BYREF
  unsigned __int64 v58; // [rsp+150h] [rbp-3C8h]
  HSTRING_HEADER hstringHeader; // [rsp+158h] [rbp-3C0h] BYREF
  HSTRING string; // [rsp+170h] [rbp-3A8h] BYREF
  void **v61; // [rsp+180h] [rbp-398h] BYREF
  _QWORD v62[3]; // [rsp+188h] [rbp-390h] BYREF
  int v63; // [rsp+1A0h] [rbp-378h]
  int *v64; // [rsp+1A8h] [rbp-370h]
  int *v65; // [rsp+1B0h] [rbp-368h]
  int v66; // [rsp+1B8h] [rbp-360h] BYREF
  char v67; // [rsp+1BCh] [rbp-35Ch]
  int v68; // [rsp+1E0h] [rbp-338h] BYREF
  const char *v69; // [rsp+1E8h] [rbp-330h]
  __int64 v70; // [rsp+1F0h] [rbp-328h]
  char v71; // [rsp+1F8h] [rbp-320h]
  __int64 v72; // [rsp+200h] [rbp-318h]
  _BYTE v73[144]; // [rsp+208h] [rbp-310h] BYREF
  __int64 v74; // [rsp+298h] [rbp-280h]
  __int64 v75; // [rsp+2A0h] [rbp-278h]
  __int64 v76; // [rsp+2A8h] [rbp-270h]
  volatile signed __int32 *v77; // [rsp+2B0h] [rbp-268h]
  HSTRING_HEADER v78; // [rsp+2C0h] [rbp-258h] BYREF
  __int64 v79; // [rsp+2D8h] [rbp-240h]
  WCHAR sourceString[264]; // [rsp+2E0h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+518h] [rbp+0h]

  v38[2] = (const WCHAR *)-2LL;
  v38[1] = (const WCHAR *)a1;
  v27 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v56 = 7LL;
  v55 = 0LL;
  LOWORD(v54[0]) = 0;
  std::wstring::assign((void **)v54, *a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v27 = 1;
  v5 = (const wchar_t *)v54;
  if ( v56 >= 8 )
    v5 = v54[0];
  v61 = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v62[0] = 0LL;
  v62[1] = &v61;
  v62[2] = 0LL;
  v63 = 0;
  v64 = &v68;
  v65 = &v66;
  v66 = 0;
  v67 = 0;
  v71 = 0;
  v68 = 0;
  v69 = "DiagTrackRuleSetHandlerRemoveRule";
  v70 = 0LL;
  v72 = 1LL;
  v74 = 0LL;
  memset_0(v73, 0, sizeof(v73));
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v61 = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)&v61,
    v5,
    0,
    (const char *)(v4 + 8));
  if ( v56 >= 8 )
    operator delete(v54[0]);
  v56 = 7LL;
  v55 = 0LL;
  LOWORD(v54[0]) = 0;
  CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::GetFileNameForRule(v6, v57, *a2);
  SoftLandingFolderForUser = GetSoftLandingFolderForUser((HANDLE)0xFFFFFFFFFFFFFFFALL, sourceString, v7);
  if ( SoftLandingFolderForUser < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)SoftLandingFolderForUser);
LABEL_35:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x64B,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v13);
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x4F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)0x80070490LL);
    goto LABEL_38;
  }
  v9 = -1LL;
  do
    ++v9;
  while ( sourceString[v9] );
  v38[3] = (const WCHAR *)v9;
  if ( v9 > 0xFFFFFFFF )
  {
LABEL_40:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    JUMPOUT(0x18007ADDCLL);
  }
  v31 = v9;
  if ( (int)v9 + 1 < (unsigned int)v9 )
  {
LABEL_39:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    goto LABEL_40;
  }
  v32 = v9 + 1;
  v10 = WindowsCreateStringReference(sourceString, v9, &hstringHeader, &string);
  v33 = v10;
  if ( v10 < 0 )
    goto LABEL_35;
  v36 = string;
  v39 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>(&v37);
  v40 = *v39;
  ___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
    (__int64)&v30,
    v40,
    v11,
    &v36);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  string = 0LL;
  v12 = (const WCHAR *)v57;
  if ( v58 >= 8 )
    v12 = (const WCHAR *)v57[0];
  v38[0] = v12;
  v41 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v78, v38);
  Reserved1 = v41[1].Reserved.Reserved1;
  v43 = v30;
  v25 = 0LL;
  v44 = &v25;
  v45 = 0LL;
  v13 =  Windows::Storage::IStorageFolder::`vcall'{80,{flat}}(v30, Reserved1, &v25);
  v34 = v13;
  v14 = retaddr;
  v46 = retaddr;
  if ( v13 < 0 )
    goto LABEL_36;
  wil::wait_for_completion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
    &v28,
    v25);
  v15 = v25;
  v47 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v27 = 1;
  v79 = 0LL;
  v16 = retaddr;
  v48 = retaddr;
  if ( !v28 )
    goto LABEL_37;
  v26 = 0LL;
  v17 = **v28;
  v49 = 0LL;
  v18 = v17(v28, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v26);
  v35 = v18;
  v20 = retaddr;
  v50 = retaddr;
  if ( v18 < 0 )
  {
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x52,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_39;
  }
  v29 = 1;
  ___CallAndWaitForCompletion_UIStorageItem_Storage_Windows__W4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3___ZW4423__wil__YAXPEAUIStorageItem_Storage_Windows__P8123_EAAJW4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3__Z__QEAW4423__Z(
    v26,
    v19,
    &v29);
  v21 = v26;
  v51 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v28;
  v52 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v22)[2])(v22);
  }
  v23 = v30;
  v53 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  *(_BYTE *)(a1 + 24) = 1;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)&v61,
    (const char *)(*(_QWORD *)(a1 + 8) + 8LL));
  if ( v58 >= 8 )
    operator delete(v57[0]);
  v58 = 7LL;
  v57[2] = 0LL;
  LOWORD(v57[0]) = 0;
  v61 = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v61);
  if ( v77 )
  {
    if ( _InterlockedExchangeAdd(v77, 0xFFFFFFFF) == 1 )
    {
      v24 = v77;
      if ( v77 )
      {
        wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v77 + 2));
        operator delete((void *)v24);
      }
    }
    v77 = 0LL;
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)&v66);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v62);
}

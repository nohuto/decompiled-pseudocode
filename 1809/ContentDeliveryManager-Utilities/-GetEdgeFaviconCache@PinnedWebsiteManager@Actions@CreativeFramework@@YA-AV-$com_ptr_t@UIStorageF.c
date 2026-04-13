/*
 * XREFs of ?GetEdgeFaviconCache@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180095230
 * Callers:
 *     ?CopyFaviconToEdge@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800954EC (-CopyFaviconToEdge@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AVHString@Wrappers@WRL@Mic.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x1800789EC (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800798E0 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@W4CreationCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@$$QEAW4856@@Z @ 0x18009517C (--$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionO.c)
 *     ??$GetStateFolder@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$0BAE@@@YAJPEAXW4tag_STATE_PERSIST_ATTRIB@@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800965A0 (--$GetStateFolder@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@$0BAE@@@YAJPE.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1800A517C (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall CreativeFramework::Actions::PinnedWebsiteManager::GetEdgeFaviconCache(
        _QWORD *a1,
        __int64 a2,
        void **a3)
{
  int StateHandle; // eax
  __int64 v5; // rdx
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  const WCHAR *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  HRESULT v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rdi
  const WCHAR *v17; // rcx
  HRESULT v18; // eax
  __int64 *v19; // rax
  __int64 v20; // rcx
  const WCHAR *v21; // rcx
  const WCHAR *v23; // [rsp+38h] [rbp-69h] BYREF
  int v24; // [rsp+40h] [rbp-61h]
  unsigned __int16 v25[4]; // [rsp+48h] [rbp-59h] BYREF
  HSTRING v26; // [rsp+50h] [rbp-51h]
  __int64 v27; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v28[4]; // [rsp+60h] [rbp-41h] BYREF
  void *v29[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v30; // [rsp+90h] [rbp-11h]
  unsigned __int64 v31; // [rsp+98h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-1h] BYREF
  HSTRING string; // [rsp+B8h] [rbp+17h] BYREF
  _BYTE v34[24]; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v35; // [rsp+D8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v28[1] = -2LL;
  *(_QWORD *)v25 = 0LL;
  StateHandle = CallerIdentity::GetStateHandle((CallerIdentity *)L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe", v25, a3);
  v6 = retaddr;
  if ( StateHandle < 0 )
    goto LABEL_25;
  v31 = 7LL;
  v30 = 0LL;
  LOWORD(v29[0]) = 0;
  v7 = GetStateFolder<std::wstring,260>(*(_QWORD *)v25, v5, v29);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x7D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_27;
  }
  v9 = (const WCHAR *)v29;
  if ( v31 >= 8 )
    v9 = (const WCHAR *)v29[0];
  v23 = v9;
  v23 = *(const WCHAR **)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v34, &v23) + 24);
  v10 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>((const WCHAR *)v28);
  v11 = (__int64 *)___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
                     (__int64)&v27,
                     *v10,
                     (__int64 (__fastcall *)(__int64, _QWORD, __int64 *)) Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}},
                     &v23);
  v12 = *v11;
  *v11 = 0LL;
  v28[2] = v12;
  v13 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v28[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
  v35 = 0LL;
  v24 = 3;
  string = 0LL;
  v14 = WindowsCreateStringReference(L"Favicons", 8u, &hstringHeader, &string);
  if ( v14 < 0 )
  {
LABEL_27:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    JUMPOUT(0x1800954E2LL);
  }
  v26 = string;
  v15 = ___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____W4CreationCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7___QEAW4856__Z(
          &v23,
          v12);
  v16 = *v15;
  *v15 = 0LL;
  v28[3] = v16;
  v17 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v24 = 3;
  string = 0LL;
  v18 = WindowsCreateStringReference(L"Provided", 8u, &hstringHeader, &string);
  if ( v18 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
LABEL_25:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x7A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)StateHandle);
    goto LABEL_26;
  }
  v26 = string;
  v19 = ___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____W4CreationCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7___QEAW4856__Z(
          &v23,
          v16);
  v20 = *v19;
  *v19 = 0LL;
  *a1 = v20;
  v21 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  string = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v31 >= 8 )
    operator delete(v29[0]);
  v31 = 7LL;
  v30 = 0LL;
  LOWORD(v29[0]) = 0;
  if ( *(_QWORD *)v25 )
    CloseState(*(_QWORD *)v25);
  return a1;
}

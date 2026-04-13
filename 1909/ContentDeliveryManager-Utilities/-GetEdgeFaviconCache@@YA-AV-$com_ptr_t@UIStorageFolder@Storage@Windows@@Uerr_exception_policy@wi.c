/*
 * XREFs of ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180098E18
 * Callers:
 *     ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x180099220 (-CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x18007A598 (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18007B4D8 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@W4CreationCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@$$QEAW4856@@Z @ 0x18009915C (--$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionO.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAE@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x18009A520 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6A.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1800A91EC (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall GetEdgeFaviconCache(_QWORD *a1, __int64 a2, void **a3)
{
  int StateHandle; // eax
  wil::details::in1diag3 *v5; // rcx
  HSTRING v6; // rdi
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  WCHAR *v9; // rbx
  unsigned __int64 v10; // rax
  HRESULT v11; // eax
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  HRESULT v17; // eax
  int v18; // r8d
  __int64 *v19; // rax
  __int64 v20; // rsi
  HSTRING v21; // rcx
  HRESULT v22; // eax
  int v23; // r8d
  __int64 *v24; // rax
  __int64 v25; // rcx
  HSTRING v26; // rcx
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING v29; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING v30; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v31[4]; // [rsp+50h] [rbp-B8h] BYREF
  PCWSTR sourceString; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+70h] [rbp-98h]
  __int64 v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h]
  _BYTE v38[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 (__fastcall **v39)(); // [rsp+98h] [rbp-70h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-68h]
  __int64 (__fastcall ***v41)(); // [rsp+100h] [rbp-8h]
  HSTRING_HEADER v42; // [rsp+108h] [rbp+0h] BYREF
  HSTRING v43; // [rsp+120h] [rbp+18h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+128h] [rbp+20h] BYREF
  HSTRING string; // [rsp+140h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v36 = -2LL;
  v30 = (HSTRING)a1;
  *(_QWORD *)v31 = 0LL;
  StateHandle = CallerIdentity::GetStateHandle((CallerIdentity *)L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe", v31, a3);
  v5 = retaddr;
  if ( StateHandle < 0 )
    goto LABEL_29;
  sourceString = 0LL;
  LODWORD(v28) = 1;
  v6 = *(HSTRING *)v31;
  v29 = *(HSTRING *)v31;
  *(_QWORD *)&v35 = &v29;
  *((_QWORD *)&v35 + 1) = &v28;
  v39 = off_1800E5E78;
  v40 = v35;
  v41 = &v39;
  v7 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>,260>(
         &sourceString,
         v38);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_30;
  string = 0LL;
  v9 = (WCHAR *)sourceString;
  v10 = -1LL;
  do
    ++v10;
  while ( sourceString[v10] );
  if ( v10 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x1C,
      (__int64)"shellcommon\\shell\\inc\\copyedgeassetshelper.h",
      (const char *)(unsigned int)StateHandle);
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x1F,
      (__int64)"shellcommon\\shell\\inc\\copyedgeassetshelper.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  if ( (int)v10 + 1 < (unsigned int)v10 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v11 = WindowsCreateStringReference(sourceString, v10, &hstringHeader, &string);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
LABEL_32:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    goto LABEL_33;
  }
  v29 = string;
  v12 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>((const WCHAR *)&v34);
  v14 = (__int64 *)___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
                     (__int64)&v33,
                     *v12,
                     v13,
                     &v29);
  v15 = *v14;
  *v14 = 0LL;
  v37 = v15;
  v16 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  string = 0LL;
  LODWORD(v28) = 3;
  v43 = 0LL;
  v17 = WindowsCreateStringReference(L"Favicons", 8u, &v42, &v43);
  if ( v17 < 0 )
    goto LABEL_32;
  v30 = v43;
  v19 = (__int64 *)___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____W4CreationCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7___QEAW4856__Z(
                     (unsigned int)&v29,
                     v15,
                     v18,
                     (unsigned int)&v30,
                     (__int64)&v28);
  v20 = *v19;
  *v19 = 0LL;
  *(_QWORD *)&v35 = v20;
  v21 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
  }
  LODWORD(v28) = 3;
  v43 = 0LL;
  v22 = WindowsCreateStringReference(L"Provided", 8u, &v42, &v43);
  if ( v22 < 0 )
  {
LABEL_33:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
    JUMPOUT(0x180099153LL);
  }
  v30 = v43;
  v24 = (__int64 *)___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____W4CreationCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7___QEAW4856__Z(
                     (unsigned int)&v29,
                     v20,
                     v23,
                     (unsigned int)&v30,
                     (__int64)&v28);
  v25 = *v24;
  *v24 = 0LL;
  *a1 = v25;
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v43 = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v9 )
    CoTaskMemFree(v9);
  if ( v6 )
    CloseState(v6);
  return a1;
}

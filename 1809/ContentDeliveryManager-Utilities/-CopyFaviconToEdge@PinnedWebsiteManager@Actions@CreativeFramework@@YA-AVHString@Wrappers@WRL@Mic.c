/*
 * XREFs of ?CopyFaviconToEdge@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800954EC
 * Callers:
 *     _lambda_2e8bb15b569abf147acfccd9115572b3_::operator() @ 0x180095954 (_lambda_2e8bb15b569abf147acfccd9115572b3_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180074AAC (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFileStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x180078A78 (--$CallAndWaitForCompletion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsync.c)
 *     ??$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFile@Storage@Windows@@P8456@EAAJPEAUIStorageFolder@56@PEAUHSTRING__@@W4NameCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU756@$$QEAPEAU8@$$QEAW4956@@Z @ 0x180078B04 (--$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@.c)
 *     ??$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFileStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180079A28 (--$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorageFi.c)
 *     ?GetEdgeFaviconCache@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180095230 (-GetEdgeFaviconCache@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIStorageF.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
HSTRING *__fastcall CreativeFramework::Actions::PinnedWebsiteManager::CopyFaviconToEdge(
        HSTRING *newString,
        __int64 a2,
        void **a3)
{
  __int64 v3; // rbx
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // r15
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  char *StringRawBuffer; // rax
  unsigned __int64 v15; // r8
  const WCHAR *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r8
  const WCHAR **v19; // rax
  const WCHAR *v20; // r12
  const WCHAR *v21; // rcx
  const WCHAR *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  HRESULT v25; // eax
  __int64 v27; // [rsp+38h] [rbp-99h] BYREF
  HSTRING string; // [rsp+40h] [rbp-91h] BYREF
  const WCHAR *v29; // [rsp+48h] [rbp-89h] BYREF
  const WCHAR *v30; // [rsp+50h] [rbp-81h] BYREF
  int v31; // [rsp+58h] [rbp-79h]
  const WCHAR *v32; // [rsp+60h] [rbp-71h] BYREF
  _QWORD v33[4]; // [rsp+68h] [rbp-69h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v35; // [rsp+98h] [rbp-39h]
  unsigned __int64 v36; // [rsp+A0h] [rbp-31h]
  _BYTE v37[32]; // [rsp+A8h] [rbp-29h] BYREF
  _BYTE v38[32]; // [rsp+C8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v33[1] = -2LL;
  v3 = a2;
  v33[2] = newString;
  v31 = 0;
  CreativeFramework::Actions::PinnedWebsiteManager::GetEdgeFaviconCache(v33, a2, a3);
  if ( *(_QWORD *)(v3 + 24) >= 8uLL )
    v3 = *(_QWORD *)v3;
  v29 = (const WCHAR *)v3;
  v29 = *(const WCHAR **)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v37, &v29) + 24);
  v5 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFileStatics>((const WCHAR *)&v30);
  v6 = (__int64 *)___CallAndWaitForCompletion_UIStorageFileStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFileStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
                    (__int64)&v27,
                    *v5,
                    (__int64 (__fastcall *)(__int64, _QWORD, __int64 *)) Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}},
                    &v29);
  v7 = *v6;
  *v6 = 0LL;
  v33[3] = v7;
  v8 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v30 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v30 + 16LL))(v30);
  string = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
         v7,
         &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
         &v27);
  v10 = retaddr;
  if ( v9 < 0 )
    goto LABEL_30;
  v31 = 2;
  v11 = v27;
  WindowsDeleteString(string);
  string = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 88LL))(v11, &string);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x9E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x180095870LL);
  }
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  v36 = 7LL;
  v35 = 0LL;
  LOWORD(Src[0]) = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)&StringRawBuffer[2 * v15] );
  }
  else
  {
    v15 = 0LL;
  }
  std::wstring::assign(Src, StringRawBuffer, v15);
  std::wstring::append(Src, (char *)L".png", aPng[0] != 0 ? 4 : 0);
  LODWORD(v27) = 1;
  v16 = (const WCHAR *)Src;
  if ( v36 >= 8 )
    v16 = (const WCHAR *)Src[0];
  v30 = v16;
  v30 = *(const WCHAR **)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v37, &v30) + 24);
  v17 = v33[0];
  v32 = (const WCHAR *)v33[0];
  v19 = (const WCHAR **)___CallAndWaitForCompletion_UIStorageFile_Storage_Windows__PEAUIStorageFolder_23_PEAUHSTRING____W4NameCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU423_PEAU5_W4623__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFile_Storage_Windows__P8456_EAAJPEAUIStorageFolder_56_PEAUHSTRING____W4NameCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU756___QEAPEAU8___QEAW4956__Z(
                          (__int64)&v29,
                          v7,
                          v18,
                          &v32,
                          &v30,
                          (unsigned int *)&v27);
  v20 = *v19;
  *v19 = 0LL;
  v30 = v20;
  v21 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  *newString = 0LL;
  v31 = 3;
  v22 = (const WCHAR *)Src;
  if ( v36 >= 8 )
    v22 = (const WCHAR *)Src[0];
  v32 = v22;
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v37, &v32);
  v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v38, (const WCHAR **)off_1800F1958);
  WindowsDeleteString(*newString);
  *newString = 0LL;
  v25 = WindowsConcatString(*(HSTRING *)(v24 + 24), *(HSTRING *)(v23 + 24), newString);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v25);
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
    goto LABEL_31;
  }
  if ( v20 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v36 >= 8 )
    operator delete(Src[0]);
  v36 = 7LL;
  v35 = 0LL;
  LOWORD(Src[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return newString;
}

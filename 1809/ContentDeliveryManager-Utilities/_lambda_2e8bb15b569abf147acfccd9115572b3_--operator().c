/*
 * XREFs of _lambda_2e8bb15b569abf147acfccd9115572b3_::operator() @ 0x180095954
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_2e8bb15b569abf147acfccd9115572b3__&___ptr64_::Run @ 0x180096B80 (wil--details--functor_wrapper_void__lambda_2e8bb15b569abf147acfccd9115572b3__-___ptr64_--Run.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180049F28 (--$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA-AV-$com_ptr_t@UIUr.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x180094D90 (-GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z.c)
 *     ?CopyFaviconToEdge@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800954EC (-CopyFaviconToEdge@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AVHString@Wrappers@WRL@Mic.c)
 *     ?CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AVHString@Wrappers@WRL@Microsoft@@PEB_W@Z @ 0x180095878 (-CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AVHString@Wrapp.c)
 *     ??$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UISecondaryTile@StartScreen@UI@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180096600 (--$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA-AV-$com_ptr_t@UISecondaryTi.c)
 *     ??$GetActivationFactory@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180096704 (--$GetActivationFactory@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@@wil@@YA-AV-.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall lambda_2e8bb15b569abf147acfccd9115572b3_::operator()(__int64 a1, __int64 a2, wchar_t **a3)
{
  int TileIdforNavigationUrl; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rdi
  WCHAR *v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  Microsoft::WRL::Details *v12; // rcx
  unsigned int v13; // eax
  UINT32 v14; // edx
  HRESULT v15; // eax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  char *v26; // rdx
  void **v27; // r8
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  int v30; // eax
  int v31; // eax
  wil::details::in1diag3 *v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rdx
  int v38; // eax
  wil::details::in1diag3 *v39; // rcx
  int v40; // eax
  wil::details::in1diag3 *v41; // rcx
  int v42; // eax
  wil::details::in1diag3 *v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // [rsp+28h] [rbp-69h] BYREF
  __int64 v48; // [rsp+30h] [rbp-61h] BYREF
  __int64 v49; // [rsp+38h] [rbp-59h] BYREF
  __int64 v50; // [rsp+40h] [rbp-51h] BYREF
  __int64 v51; // [rsp+48h] [rbp-49h] BYREF
  HSTRING newString; // [rsp+50h] [rbp-41h] BYREF
  PCWSTR sourceString; // [rsp+58h] [rbp-39h] BYREF
  __int64 v54; // [rsp+60h] [rbp-31h] BYREF
  __int64 v55; // [rsp+68h] [rbp-29h] BYREF
  __int64 v56; // [rsp+70h] [rbp-21h] BYREF
  HSTRING v57[2]; // [rsp+78h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-9h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+Fh] BYREF
  _BYTE v60[32]; // [rsp+A8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v57[1] = (HSTRING)-2LL;
  sourceString = 0LL;
  TileIdforNavigationUrl = EdgeTileUtils::GetTileIdforNavigationUrl(**(const WCHAR ***)a1, (wchar_t *)&sourceString, a3);
  v5 = retaddr;
  if ( TileIdforNavigationUrl < 0 )
    goto LABEL_51;
  wil::ActivateInstance<Windows::UI::StartScreen::ISecondaryTile>(&v47);
  v6 = v47;
  string = 0LL;
  v7 = (WCHAR *)sourceString;
  v8 = -1LL;
  v9 = -1LL;
  do
    ++v9;
  while ( sourceString[v9] );
  v10 = -1;
  v11 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v11 = v9;
  v12 = v9 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0LL;
  if ( v9 > 0xFFFFFFFF )
  {
LABEL_52:
    Microsoft::WRL::Details::RaiseException(v12);
    __debugbreak();
  }
  v13 = v11 + 1;
  if ( v11 + 1 >= v11 )
    v10 = v11 + 1;
  if ( v13 < v11 )
  {
    Microsoft::WRL::Details::RaiseException(v13 < v11 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v14 = v10 - 1;
  if ( v11 < v10 )
    v14 = v11;
  v15 = WindowsCreateStringReference(sourceString, v14, &hstringHeader, &string);
  if ( v15 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    goto LABEL_55;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v6 + 48LL))(v6, string);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_55:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0xC6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_56;
  }
  v18 = v47;
  v19 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      (__int64)&hstringHeader,
                      *(const WCHAR ***)(a1 + 8))
                  + 24);
  v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 96LL))(v18, v19);
  v21 = retaddr;
  if ( v20 < 0 )
  {
LABEL_56:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0xC7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_57;
  }
  v22 = v47;
  v23 = *(_QWORD *)CreativeFramework::Actions::PinnedWebsiteManager::CreateLaunchArgumentsFromUrl(
                     (WCHAR *)v57,
                     **(const WCHAR ***)a1);
  v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 64LL))(v22, v23);
  v25 = retaddr;
  if ( v24 < 0 )
  {
LABEL_57:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0xC8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_58;
  }
  WindowsDeleteString(v57[0]);
  v26 = **(char ***)(a1 + 16);
  string = (HSTRING)7;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  LOWORD(hstringHeader.Reserved.Reserved1) = 0;
  if ( *(_WORD *)v26 )
  {
    do
      ++v8;
    while ( *(_WORD *)&v26[2 * v8] );
  }
  else
  {
    v8 = 0LL;
  }
  std::wstring::assign(&hstringHeader, v26, v8);
  CreativeFramework::Actions::PinnedWebsiteManager::CopyFaviconToEdge(&newString, (__int64)&hstringHeader, v27);
  if ( (unsigned __int64)string >= 8 )
    operator delete(hstringHeader.Reserved.Reserved1);
  string = (HSTRING)7;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  LOWORD(hstringHeader.Reserved.Reserved1) = 0;
  wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>((const WCHAR *)&v56);
  v49 = 0LL;
  v28 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v56 + 48LL))(v56, newString, &v49);
  v29 = retaddr;
  if ( v28 < 0 )
  {
LABEL_58:
    wil::details::in1diag3::Throw_Hr(
      v29,
      (void *)0xCE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  v30 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v47)(
          v47,
          &GUID_b2f6cc35_3250_4990_923c_294ab4b694dd,
          &v55);
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v30);
LABEL_60:
    wil::details::in1diag3::Throw_Hr(
      v32,
      (void *)0xD2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v31);
    __debugbreak();
  }
  v48 = 0LL;
  v31 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 64LL))(v55, &v48);
  v32 = retaddr;
  if ( v31 < 0 )
    goto LABEL_60;
  v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 80LL))(v48, v49);
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v33);
    __debugbreak();
  }
  v34 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 48LL))(v48, v49);
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v34);
    __debugbreak();
  }
  v35 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v47)(
          v47,
          &GUID_2d7f0d3b_ec36_463b_9f69_d7238d77c122,
          &v51);
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v35);
    goto LABEL_64;
  }
  v36 = v51;
  v37 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      (__int64)v60,
                      (const WCHAR **)&off_1800F1968)
                  + 24);
  v38 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 48LL))(v36, v37);
  v39 = retaddr;
  if ( v38 < 0 )
  {
LABEL_64:
    wil::details::in1diag3::Throw_Hr(
      v39,
      (void *)0xD8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v38);
    goto LABEL_65;
  }
  v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 104LL))(v51);
  v41 = retaddr;
  if ( v40 < 0 )
  {
LABEL_65:
    wil::details::in1diag3::Throw_Hr(
      v41,
      (void *)0xD9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v40);
    goto LABEL_66;
  }
  wil::GetActivationFactory<Windows::Internal::ApplicationModel::IPinnableSurfaceFactory>(&v54);
  v50 = 0LL;
  v42 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54 + 48LL))(v54, &v50);
  v43 = retaddr;
  if ( v42 < 0 )
  {
LABEL_66:
    wil::details::in1diag3::Throw_Hr(
      v43,
      (void *)0xDE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v42);
    JUMPOUT(0x180095F04LL);
  }
  v44 = v50;
  v45 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v60, (const WCHAR **)&off_1800F1968);
  v46 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v44 + 64LL))(v44, *(_QWORD *)(v45 + 24), v47);
  if ( v46 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v46);
LABEL_51:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0xC3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)TileIdforNavigationUrl);
    goto LABEL_52;
  }
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  WindowsDeleteString(newString);
  newString = 0LL;
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v7 )
    CoTaskMemFree(v7);
}

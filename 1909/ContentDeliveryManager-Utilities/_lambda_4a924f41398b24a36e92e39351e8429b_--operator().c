/*
 * XREFs of _lambda_4a924f41398b24a36e92e39351e8429b_::operator() @ 0x180099650
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_4a924f41398b24a36e92e39351e8429b__&_::Run @ 0x18009A7F0 (wil--details--functor_wrapper_void__lambda_4a924f41398b24a36e92e39351e8429b__-_--Run.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x180098A24 (-GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z.c)
 *     ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x180099220 (-CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z.c)
 *     ?CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AVHString@Wrappers@WRL@Microsoft@@PEB_W@Z @ 0x180099574 (-CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AVHString@Wrapp.c)
 *     ??$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UISecondaryTile@StartScreen@UI@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18009A27C (--$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA-AV-$com_ptr_t@UISecondaryTi.c)
 *     ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18009A388 (--$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA-AV-$c_ea_18009A388.c)
 *     ??$GetActivationFactory@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18009A450 (--$GetActivationFactory@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@@wil@@YA-AV-.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
void __fastcall lambda_4a924f41398b24a36e92e39351e8429b_::operator()(const WCHAR ***a1, __int64 a2, wchar_t **a3)
{
  int TileIdforNavigationUrl; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, HSTRING); // rsi
  WCHAR *v8; // rdi
  unsigned __int64 v9; // rax
  HRESULT v10; // eax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID); // rsi
  PVOID Reserved1; // rdx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64); // rsi
  __int64 v20; // rdx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  HSTRING_HEADER *v23; // rbx
  void **v24; // r8
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  wil::details::in1diag3 *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(__int64, PVOID); // rsi
  PVOID v39; // rdx
  int v40; // eax
  wil::details::in1diag3 *v41; // rcx
  int v42; // eax
  wil::details::in1diag3 *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  wil::details::in1diag3 *v46; // rcx
  __int64 v47; // rbx
  __int64 (__fastcall *v48)(__int64, PVOID, __int64); // rsi
  HSTRING_HEADER *v49; // rax
  int v50; // eax
  wil::details::in1diag3 *v51; // rcx
  __int64 v52; // [rsp+28h] [rbp-49h] BYREF
  HSTRING v53; // [rsp+30h] [rbp-41h] BYREF
  __int64 v54; // [rsp+38h] [rbp-39h] BYREF
  __int64 v55; // [rsp+40h] [rbp-31h] BYREF
  __int64 v56; // [rsp+48h] [rbp-29h] BYREF
  __int64 v57; // [rsp+50h] [rbp-21h] BYREF
  PCWSTR sourceString; // [rsp+58h] [rbp-19h] BYREF
  __int64 *v59; // [rsp+60h] [rbp-11h] BYREF
  __int64 *v60; // [rsp+68h] [rbp-9h] BYREF
  __int64 *v61; // [rsp+70h] [rbp-1h] BYREF
  HSTRING v62[2]; // [rsp+78h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+17h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v62[1] = (HSTRING)-2LL;
  sourceString = 0LL;
  TileIdforNavigationUrl = EdgeTileUtils::GetTileIdforNavigationUrl(**a1, (wchar_t *)&sourceString, a3);
  v5 = retaddr;
  if ( TileIdforNavigationUrl < 0 )
    goto LABEL_42;
  wil::ActivateInstance<Windows::UI::StartScreen::ISecondaryTile>(&v52);
  v6 = v52;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v52 + 48LL);
  string = 0LL;
  v8 = (WCHAR *)sourceString;
  v9 = -1LL;
  do
    ++v9;
  while ( sourceString[v9] );
  if ( v9 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)TileIdforNavigationUrl);
LABEL_43:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    goto LABEL_44;
  }
  if ( (int)v9 + 1 < (unsigned int)v9 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v10 = WindowsCreateStringReference(sourceString, v9, &hstringHeader, &string);
  if ( v10 < 0 )
    goto LABEL_43;
  v11 = v7(v6, string);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_44:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x81,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_45;
  }
  v13 = v52;
  v14 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v52 + 96LL);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, a1[1])[1].Reserved.Reserved1;
  v16 = v14(v13, Reserved1);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_45:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_46;
  }
  v18 = v52;
  v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 64LL);
  v20 = *(_QWORD *)CreativeFramework::Actions::PinnedWebsiteManager::CreateLaunchArgumentsFromUrl((WCHAR *)v62, **a1);
  v21 = v19(v18, v20);
  v22 = retaddr;
  if ( v21 < 0 )
  {
LABEL_46:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x83,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_47;
  }
  WindowsDeleteString(v62[0]);
  v53 = 0LL;
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, a1[2]);
  WindowsDeleteString(v53);
  v53 = 0LL;
  v25 = CopyFaviconToEdge((HSTRING)v23[1].Reserved.Reserved1, &v53, v24);
  v26 = retaddr;
  if ( v25 < 0 )
  {
LABEL_47:
    wil::details::in1diag3::Throw_Hr(
      v26,
      (void *)0x87,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v25);
LABEL_48:
    wil::details::in1diag3::Throw_Hr(
      v29,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>(&v61);
  v55 = 0LL;
  v27 = *v61;
  v55 = 0LL;
  v28 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64 *))(v27 + 48))(v61, v53, &v55);
  v29 = retaddr;
  if ( v28 < 0 )
    goto LABEL_48;
  v30 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 **))v52)(
          v52,
          &GUID_b2f6cc35_3250_4990_923c_294ab4b694dd,
          &v60);
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v30);
LABEL_50:
    wil::details::in1diag3::Throw_Hr(
      v33,
      (void *)0x8E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v32);
    __debugbreak();
  }
  v54 = 0LL;
  v31 = *v60;
  v54 = 0LL;
  v32 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v31 + 64))(v60, &v54);
  v33 = retaddr;
  if ( v32 < 0 )
    goto LABEL_50;
  v34 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 80LL))(v54, v55);
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v34);
    __debugbreak();
  }
  v35 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 48LL))(v54, v55);
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v35);
    __debugbreak();
  }
  v36 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v52)(
          v52,
          &GUID_2d7f0d3b_ec36_463b_9f69_d7238d77c122,
          &v57);
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v36);
    goto LABEL_54;
  }
  v37 = v57;
  v38 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v57 + 48LL);
  v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_1800F5FF0)[1].Reserved.Reserved1;
  v40 = v38(v37, v39);
  v41 = retaddr;
  if ( v40 < 0 )
  {
LABEL_54:
    wil::details::in1diag3::Throw_Hr(
      v41,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v40);
    goto LABEL_55;
  }
  v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 104LL))(v57);
  v43 = retaddr;
  if ( v42 < 0 )
  {
LABEL_55:
    wil::details::in1diag3::Throw_Hr(
      v43,
      (void *)0x95,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v42);
    goto LABEL_56;
  }
  wil::GetActivationFactory<Windows::Internal::ApplicationModel::IPinnableSurfaceFactory>(&v59);
  v56 = 0LL;
  v44 = *v59;
  v56 = 0LL;
  v45 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v44 + 48))(v59, &v56);
  v46 = retaddr;
  if ( v45 < 0 )
  {
LABEL_56:
    wil::details::in1diag3::Throw_Hr(
      v46,
      (void *)0x9A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v45);
    goto LABEL_57;
  }
  v47 = v56;
  v48 = *(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v56 + 64LL);
  v49 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_1800F5FF0);
  v50 = v48(v47, v49[1].Reserved.Reserved1, v52);
  v51 = retaddr;
  if ( v50 < 0 )
  {
LABEL_57:
    wil::details::in1diag3::Throw_Hr(
      v51,
      (void *)0x9B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v50);
    JUMPOUT(0x180099BDELL);
  }
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  if ( v59 )
    (*(void (__fastcall **)(__int64 *))(*v59 + 16))(v59);
  if ( v57 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v60 )
    (*(void (__fastcall **)(__int64 *))(*v60 + 16))(v60);
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  if ( v61 )
    (*(void (__fastcall **)(__int64 *))(*v61 + 16))(v61);
  WindowsDeleteString(v53);
  v53 = 0LL;
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  if ( v8 )
    CoTaskMemFree(v8);
}

/*
 * XREFs of ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180075F1C
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180075BE0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800160DC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001AFE8 (-IsEdition@@YA_N_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180057BE8 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180073678 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x180075334 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180076B18 (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180076CD0 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ @ 0x180077A20 (-ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1800785D0 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x180079A94 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Initialize(ControllerProcessor *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *); // rsi
  ControllerProcessor *v7; // rcx
  bool ShouldInjectViaSynthesize; // al
  InjectionDevice *v9; // rcx
  HKEY v10; // rcx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, char *); // rsi
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *); // rsi
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *); // rsi
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64 (__fastcall *)(__int64), ControllerProcessor *, char *); // rsi
  int v22; // eax
  ControllerNavigationManager *ControllerNavigationManager; // rax
  int v24; // eax
  HKEY v25; // rcx
  HKEY v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v32; // [rsp+58h] [rbp+10h] BYREF

  v32 = 0LL;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v32);
  v2 = CoreUICreate(&v32);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 236LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_24;
  }
  v5 = v32;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v32 + 128LL);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 273);
  v2 = v6(v5, ControllerProcessor::OnAutoRepeatTimerStatic, this, (char *)this + 2184);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 241LL;
    goto LABEL_11;
  }
  InjectionDevice::Attach((ControllerProcessor *)((char *)this + 3152));
  ShouldInjectViaSynthesize = ControllerProcessor::ShouldInjectViaSynthesize(v7);
  v9 = (ControllerProcessor *)((char *)this + 9488);
  if ( !ShouldInjectViaSynthesize )
    v9 = (ControllerProcessor *)((char *)this + 4736);
  InjectionDevice::Attach(v9);
  ControllerProcessor::RefreshCursorSpeedRegistrySettings(this);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 1414);
  RegistryWatcher::Create(
    v10,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
    this,
    (void (*)(void *, HKEY))lambda_b12fa00c1928b9bf49ed577602750a33_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 1414);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v11 + 80LL);
  v13 = *((_QWORD *)this + 276);
  if ( v13 )
  {
    *((_QWORD *)this + 276) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v2 = v12(v11, *((_QWORD *)this + 5), (char *)this + 2208);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 269LL;
    goto LABEL_11;
  }
  v14 = v32;
  v15 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v32 + 128LL);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 274);
  v16 = v15(v14, ControllerProcessor::OnSendGamepadAsPointerAndManipulationStatic, this, (char *)this + 2192);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      274LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = v32;
  v18 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v32 + 128LL);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 1406);
  v19 = v18(v17, lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_::_lambda_invoker_cdecl_, this, (char *)this + 11248);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      282LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  v20 = v32;
  v21 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64), ControllerProcessor *, char *))(*(_QWORD *)v32 + 128LL);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 1407);
  v22 = v21(v20, lambda_8e01662f3c9310d444dda3dc493b17b5_::_lambda_invoker_cdecl_, this, (char *)this + 11256);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      290LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v22);
    __debugbreak();
  }
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v24 = ControllerNavigationManager::RegisterControllerProcessor(
          ControllerNavigationManager,
          **((_DWORD **)this + 5),
          this);
  if ( v24 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      292LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v24);
    __debugbreak();
  }
  ControllerProcessor::RefreshCursorMagnetismRegistrySettings(this);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 1415);
  RegistryWatcher::Create(
    v25,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
    this,
    (void (*)(void *, HKEY))lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 1415);
  if ( IsEdition(8778LL) )
  {
    ControllerProcessor::UpdateControllerNavigationMode(this);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 1416);
    RegistryWatcher::Create(
      v26,
      L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
      this,
      (void (*)(void *, HKEY))lambda_8fe8561a384bff2ea72bcff2a21bcb93_::_lambda_invoker_cdecl_,
      (struct RegistryWatcher **)this + 1416);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 1417);
    v29 = ViewMenuChordedKeyHandler::Create(v27, this, v28, (char *)this + 11336);
    if ( v29 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        328LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v29);
      __debugbreak();
    }
  }
  v3 = 0;
LABEL_24:
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v32);
  return v3;
}

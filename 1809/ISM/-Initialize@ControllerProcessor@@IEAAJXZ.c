/*
 * XREFs of ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180033244
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180033AC0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x18000C4B4 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18003031C (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1800370EC (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180037230 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180037384 (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x180038890 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18009D6D4 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Initialize(ControllerProcessor *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rcx
  HKEY v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  int *v19; // rbx
  ControllerNavigationManager *ControllerNavigationManager; // rax
  int v21; // eax
  HKEY v22; // rcx
  HKEY v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v30; // [rsp+58h] [rbp+10h] BYREF

  v30 = 0LL;
  v2 = CoreUICreate(&v30);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 228LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_37;
  }
  v5 = v30;
  v6 = *((_QWORD *)this + 216);
  if ( v6 )
  {
    *((_QWORD *)this + 216) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v5 + 120LL))(
         v5,
         ControllerProcessor::OnAutoRepeatTimerStatic,
         this,
         (char *)this + 1728);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 233LL;
    goto LABEL_17;
  }
  if ( !*((_BYTE *)this + 3680) )
    *((_BYTE *)this + 3680) = (*(int (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 336) + 40LL))(
                                *((_QWORD *)this + 336),
                                (char *)this + 2696,
                                0LL) >= 0;
  if ( !*((_BYTE *)this + 4680) )
    *((_BYTE *)this + 4680) = (*(int (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 461) + 40LL))(
                                *((_QWORD *)this + 461),
                                (char *)this + 3696,
                                0LL) >= 0;
  ControllerProcessor::RefreshCursorSpeedRegistrySettings(this);
  v7 = (HKEY)*((_QWORD *)this + 866);
  if ( v7 )
  {
    *((_QWORD *)this + 866) = 0LL;
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)v7 + 16LL))(v7);
  }
  RegistryWatcher::Create(
    v7,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
    this,
    lambda_b12fa00c1928b9bf49ed577602750a33_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 866);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  v9 = *((_QWORD *)this + 219);
  if ( v9 )
  {
    *((_QWORD *)this + 219) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v8 + 80LL))(
         v8,
         *((_QWORD *)this + 4),
         (char *)this + 1752);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 253LL;
    goto LABEL_17;
  }
  v10 = v30;
  v11 = *((_QWORD *)this + 217);
  if ( v11 )
  {
    *((_QWORD *)this + 217) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v10 + 120LL))(
          v10,
          ControllerProcessor::OnSendGamepadAsPointerAndManipulationStatic,
          this,
          (char *)this + 1736);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x102,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v13 = v30;
  v14 = *((_QWORD *)this + 858);
  if ( v14 )
  {
    *((_QWORD *)this + 858) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v13 + 120LL))(
          v13,
          lambda_e98e55952b2f6a60ccdf995baa6b733c_::_lambda_invoker_cdecl_,
          this,
          (char *)this + 6864);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x10A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = v30;
  v17 = *((_QWORD *)this + 859);
  if ( v17 )
  {
    *((_QWORD *)this + 859) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), ControllerProcessor *, char *))(*(_QWORD *)v16 + 120LL))(
          v16,
          lambda_018d032e83798cc1d7fea9feccefba1b_::_lambda_invoker_cdecl_,
          this,
          (char *)this + 6872);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x112,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = (int *)*((_QWORD *)this + 4);
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v21 = ControllerNavigationManager::RegisterControllerProcessor(ControllerNavigationManager, *v19, this);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x114,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v21);
    JUMPOUT(0x18003365FLL);
  }
  ControllerProcessor::RefreshCursorMagnetismRegistrySettings(this);
  v22 = (HKEY)*((_QWORD *)this + 867);
  if ( v22 )
  {
    *((_QWORD *)this + 867) = 0LL;
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)v22 + 16LL))(v22);
  }
  RegistryWatcher::Create(
    v22,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
    this,
    lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 867);
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    ControllerProcessor::UpdateControllerNavigationMode(this);
    v23 = (HKEY)*((_QWORD *)this + 868);
    if ( v23 )
    {
      *((_QWORD *)this + 868) = 0LL;
      (*(void (__fastcall **)(HKEY))(*(_QWORD *)v23 + 16LL))(v23);
    }
    RegistryWatcher::Create(
      v23,
      L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
      this,
      lambda_392f984ef5794bdcbc8fc50916da8ef5_::_lambda_invoker_cdecl_,
      (struct RegistryWatcher **)this + 868);
    v25 = *((_QWORD *)this + 869);
    if ( v25 )
    {
      *((_QWORD *)this + 869) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = ViewMenuChordedKeyHandler::Create(v25, this, v24, (char *)this + 6952);
    if ( v26 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x138,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v26);
      __debugbreak();
    }
  }
  v3 = 0;
LABEL_37:
  v27 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return v3;
}

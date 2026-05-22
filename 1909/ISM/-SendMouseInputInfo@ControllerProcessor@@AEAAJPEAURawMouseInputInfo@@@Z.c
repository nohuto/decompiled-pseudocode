/*
 * XREFs of ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180077418
 * Callers:
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180075188 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x1800754B4 (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 *     ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x180077568 (-SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180077634 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180078104 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007628C (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::SendMouseInputInfo(ControllerProcessor *this, struct RawMouseInputInfo *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v10[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10[1] = -2LL;
  if ( *((_BYTE *)this + 11080) )
  {
    v10[0] = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v10);
    v6 = v5(v4, v10);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1157LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 1384) + 40LL))(*((_QWORD *)this + 1384), v11);
    v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10[0] + 32LL))(v10[0], v11);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1160LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    *((_BYTE *)this + 11080) = 0;
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v10);
  }
  v8 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 6320), a2);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1165LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  return 0LL;
}

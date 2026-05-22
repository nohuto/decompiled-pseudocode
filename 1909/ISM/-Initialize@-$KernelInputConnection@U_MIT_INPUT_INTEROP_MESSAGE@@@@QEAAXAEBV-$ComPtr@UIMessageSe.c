/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x18001CF2C
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18001CCF4 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x18001F7C0 (-_Reset_move@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x180028604 (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056310 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // rcx
  _BYTE *v10; // rax
  const char *v11; // r9
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, const wchar_t *, _QWORD *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD); // rdi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v23; // [rsp+20h] [rbp-99h]
  int v24; // [rsp+20h] [rbp-99h]
  _BYTE v25[56]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE *v26; // [rsp+78h] [rbp-41h]
  _BYTE v27[56]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v8 = a1 + 8;
  v26 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
  if ( v9 )
  {
    v10 = (_BYTE *)(**v9)(v9, v25);
    v26 = v10;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 == v25 || (_QWORD *)v8[7] == v8 )
  {
    v28 = 0LL;
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(v27, v25);
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(v25, v8);
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(v8, v27);
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(v27);
  }
  else
  {
    v26 = (_BYTE *)v8[7];
    v8[7] = v10;
  }
  std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(v25);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v11);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v12 = *a2;
    v13 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD *))(*(_QWORD *)*a2 + 64LL);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1);
    v14 = v13(v12, L"Kernel\\MIT\\InputPort", a1);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x23,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v14,
        v23);
      __debugbreak();
    }
    LOBYTE(v15) = 1;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v15);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x37,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v16,
        v23);
      __debugbreak();
    }
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      *a2);
    v17 = *a2;
    v18 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD))(*(_QWORD *)*a2 + 88LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      a1[1]);
    v24 = (_DWORD)a1 + 16;
    v19 = v18(v17, KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::s_OnKernelInputEventStatic, a1, *a1);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v19,
        v24);
      __debugbreak();
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 120LL))(*a2, a1[2], a1 + 3);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v20,
        v24);
      __debugbreak();
    }
    v21 = NtMITCoreMsgKOpenConnectionTo(a3, a1 + 3);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x48,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v21,
        v24);
      JUMPOUT(0x180048B48LL);
    }
  }
  return std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(a4);
}

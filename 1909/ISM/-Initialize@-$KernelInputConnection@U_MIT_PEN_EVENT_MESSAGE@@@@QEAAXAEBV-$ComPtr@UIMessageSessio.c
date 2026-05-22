/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@@Z @ 0x180032068
 * Callers:
 *     ??0PenEventsDispatcherPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180030D20 (--0PenEventsDispatcherPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Swap@?$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXAEAV12@@Z @ 0x180034278 (-_Swap@-$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXAEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXXZ @ 0x180034380 (-_Tidy@-$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056310 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??I?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAPEA_KXZ @ 0x1800681AC (--I-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFunctio.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KernelInputConnection<_MIT_PEN_EVENT_MESSAGE>::Initialize(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  const char *v8; // r9
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, const wchar_t *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r14
  __int64 (__fastcall *v15)(__int64, __int64 (__fastcall *)(), __int64 *, __int64); // rsi
  __int64 v16; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // [rsp+20h] [rbp-A8h]
  _BYTE v22[56]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23; // [rsp+78h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v23 = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
  if ( v7 )
    v23 = (**v7)(v7, v22);
  std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Swap(v22, a1 + 8);
  std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Tidy(v22);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v8);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v9 = *a2;
    v10 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)*a2 + 64LL);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1);
    v11 = v10(v9, L"Kernel\\MIT\\InputPort", a1);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        35LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    LOBYTE(v12) = 1;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v12);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        55LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      *a2);
    v14 = *a2;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64 *, __int64))(*(_QWORD *)*a2 + 88LL);
    v16 = *a1;
    v21 = wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::operator&(a1 + 1);
    v17 = v15(v14, KernelInputConnection<_MIT_PEN_EVENT_MESSAGE>::s_OnKernelInputEventStatic, a1, v16);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        63LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)*a2 + 120LL))(*a2, a1[2], a1 + 3);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        67LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
    v19 = NtMITCoreMsgKOpenConnectionTo(16LL, a1 + 3);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x48,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v19,
        v21);
      __debugbreak();
    }
  }
  return std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Tidy(a4);
}

/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800847D0
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180081FEC (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AD20 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002A610 (--4-$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002A878 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct ISMTestMode *__fastcall KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::Initialize(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  const char *v8; // r9
  struct ISMTestMode *result; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  std::function<void (_MIT_KEYBOARD_INPUT_MESSAGE const *)>::operator=((__int64)(a1 + 8), a4);
  result = ISMTestMode::s_instance;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v8);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v10 = *a2;
    v11 = *a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD *))(*(_QWORD *)v10 + 64LL))(
            v10,
            L"Kernel\\MIT\\InputPort",
            a1);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x23,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    LOBYTE(v13) = 1;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v13);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x37,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      *a2);
    v15 = *a2;
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      a1[1]);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD, _QWORD *))(*(_QWORD *)v15 + 80LL))(
            v15,
            KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::s_OnKernelInputEventStatic,
            a1,
            *a1,
            a1 + 2);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 112LL))(*a2, a1[2], a1 + 3);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)v17);
      JUMPOUT(0x1800849BFLL);
    }
    result = (struct ISMTestMode *)MITCoreMsgKOpenConnectionTo(9LL, a1 + 3);
    if ( (int)result < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x48,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
        (const char *)(unsigned int)result);
      __debugbreak();
    }
  }
  v18 = *(_QWORD *)(a4 + 56);
  if ( v18 )
  {
    LOBYTE(v7) = v18 != a4;
    result = (struct ISMTestMode *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v7);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return result;
}

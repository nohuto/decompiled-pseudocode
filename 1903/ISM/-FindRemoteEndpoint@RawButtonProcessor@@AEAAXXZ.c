/*
 * XREFs of ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x180109190
 * Callers:
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x180109040 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180109280 (-OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002736C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RawButtonProcessor::FindRemoteEndpoint(RawButtonProcessor *this)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  __int64 v4; // rbx
  int (__fastcall *v5)(__int64, const wchar_t *, _QWORD, char *); // rdi
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, const wchar_t *, __int64, char *); // rdi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = *((_QWORD *)this + 3);
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v8);
  if ( v3(v2, &v8) >= 0 )
  {
    v4 = v8;
    v5 = *(int (__fastcall **)(__int64, const wchar_t *, _QWORD, char *))(*(_QWORD *)v8 + 24LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (_QWORD *)this + 4,
      *((_QWORD *)this + 4));
    if ( v5(v4, L"System\\RawShellButtonRouterInput", 0LL, (char *)this + 40) < 0 )
    {
      v6 = v8;
      v7 = *(void (__fastcall **)(__int64, const wchar_t *, __int64, char *))(*(_QWORD *)v8 + 24LL);
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (_QWORD *)this + 4,
        *((_QWORD *)this + 4));
      v7(v6, L"System\\RawShellButtonRouterInput", 1LL, (char *)this + 40);
    }
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v8);
}

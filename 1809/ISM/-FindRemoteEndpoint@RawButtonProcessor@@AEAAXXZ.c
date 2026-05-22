/*
 * XREFs of ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1800D3170
 * Callers:
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800D2D40 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800D3020 (-OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002A878 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RawButtonProcessor::FindRemoteEndpoint(RawButtonProcessor *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), &v5) >= 0 )
  {
    v2 = v5;
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (_QWORD *)this + 4,
      *((_QWORD *)this + 4));
    if ( (*(int (__fastcall **)(__int64, const wchar_t *, _QWORD, char *))(*(_QWORD *)v2 + 24LL))(
           v2,
           L"System\\RawShellButtonRouterInput",
           0LL,
           (char *)this + 40) < 0 )
    {
      v3 = v5;
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (_QWORD *)this + 4,
        *((_QWORD *)this + 4));
      (*(void (__fastcall **)(__int64, const wchar_t *, __int64, char *))(*(_QWORD *)v3 + 24LL))(
        v3,
        L"System\\RawShellButtonRouterInput",
        1LL,
        (char *)this + 40);
    }
  }
  v4 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}

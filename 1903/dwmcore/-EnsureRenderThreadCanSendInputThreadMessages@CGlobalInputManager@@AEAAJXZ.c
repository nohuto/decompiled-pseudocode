/*
 * XREFs of ?EnsureRenderThreadCanSendInputThreadMessages@CGlobalInputManager@@AEAAJXZ @ 0x1802374F4
 * Callers:
 *     ?UpdateEdgyInput@CGlobalInputManager@@UEAAJAEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x1802375A0 (-UpdateEdgyInput@CGlobalInputManager@@UEAAJAEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 *     ?UpdateEdgyInput@CGlobalInputManager@@UEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180237640 (-UpdateEdgyInput@CGlobalInputManager@@UEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800E6664 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalInputManager::EnsureRenderThreadCanSendInputThreadMessages(CGlobalInputManager *this)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, const wchar_t *, _QWORD, __int64 *); // rdi
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( *((_QWORD *)this + 36) )
    return 0LL;
  v3 = (__int64 *)((char *)this + 280);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 35,
    *((_QWORD *)this + 33));
  v4 = *((_QWORD *)this + 34);
  v5 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v4 + 24LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v3,
    *v3);
  v6 = v5(v4, L"EdgyConfigurationEndpoint", 0LL, v3 + 1);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x215u, 0LL);
  return v8;
}

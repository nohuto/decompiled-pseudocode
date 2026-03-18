/*
 * XREFs of ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@AEAAJXZ @ 0x1801E92EC
 * Callers:
 *     ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x1801E9738 (-UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 *     ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801E97C4 (-UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18007BA18 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::EnsureRenderThreadCanSendInputThreadMessages(CInputManager *this)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  if ( *((_QWORD *)this + 33) )
    return 0LL;
  v3 = (__int64 *)((char *)this + 256);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 32,
    *((_QWORD *)this + 30));
  v4 = *((_QWORD *)this + 31);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v3,
    *v3);
  v5 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v4 + 24LL))(
         v4,
         L"EdgyConfigurationEndpoint",
         0LL,
         v3 + 1);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x267u);
  return v7;
}

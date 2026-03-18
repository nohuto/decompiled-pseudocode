/*
 * XREFs of ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ @ 0x180062A9C
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180062944 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18007BA18 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(CInputManager *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx

  if ( *((_QWORD *)this + 35) )
    return 0LL;
  v2 = (_QWORD *)((char *)this + 272);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 272,
    *((_QWORD *)this + 30));
  v3 = *((_QWORD *)this + 30);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v2,
    *v2);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), CInputManager *, _QWORD *))(*(_QWORD *)v3 + 88LL))(
         v3,
         CInputManager::s_OnReceiveInputThreadMessage,
         this,
         v2 + 1);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x201u);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD))(**((_QWORD **)this + 31) + 40LL))(
           *((_QWORD *)this + 31),
           L"EdgyNotificationEndpoint",
           *((_QWORD *)this + 35),
           0LL);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x206u);
  }
  return v6;
}

/*
 * XREFs of ?EnsureRenderThreadCanReceiveInputThreadMessages@CGlobalInputManager@@AEAAJXZ @ 0x1800E0F24
 * Callers:
 *     ?Initialize@CGlobalInputManager@@IEAAJXZ @ 0x1800E08A8 (-Initialize@CGlobalInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800E7514 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(CGlobalInputManager *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, __int64 (__fastcall *)(void *, const void *, int), CGlobalInputManager *, _QWORD *); // rdi
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx

  if ( *((_QWORD *)this + 38) )
    return 0LL;
  v2 = (_QWORD *)((char *)this + 296);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 296,
    *((_QWORD *)this + 33));
  v3 = *((_QWORD *)this + 33);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), CGlobalInputManager *, _QWORD *))(*(_QWORD *)v3 + 96LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v2,
    *v2);
  v5 = v4(v3, CGlobalInputManager::s_OnReceiveInputThreadMessage, this, v2 + 1);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1AFu, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD))(**((_QWORD **)this + 34) + 40LL))(
           *((_QWORD *)this + 34),
           L"EdgyNotificationEndpoint",
           *((_QWORD *)this + 38),
           0LL);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1B4u, 0LL);
  }
  return v7;
}

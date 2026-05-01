/*
 * XREFs of ?StartActivity@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAAXKK_N@Z @ 0x18028BEDC
 * Callers:
 *     ?OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z @ 0x180289370 (-OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000C238 (-zInternalStart@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::StartActivity(
        ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *this,
        int a2,
        int a3,
        char a4)
{
  const struct _TlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v7; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  DWORD v9; // [rsp+3Ch] [rbp-45h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-19h]
  int v13; // [rsp+70h] [rbp-11h]
  int v14; // [rsp+74h] [rbp-Dh]
  DWORD *v15; // [rsp+78h] [rbp-9h]
  int v16; // [rsp+80h] [rbp-1h]
  int v17; // [rsp+84h] [rbp+3h]
  int *v18; // [rsp+88h] [rbp+7h]
  int v19; // [rsp+90h] [rbp+Fh]
  int v20; // [rsp+94h] [rbp+13h]
  int *v21; // [rsp+98h] [rbp+17h]
  int v22; // [rsp+A0h] [rbp+1Fh]
  int v23; // [rsp+A4h] [rbp+23h]
  char *v24; // [rsp+A8h] [rbp+27h]
  int v25; // [rsp+B0h] [rbp+2Fh]
  int v26; // [rsp+B4h] [rbp+33h]
  int v27; // [rsp+F0h] [rbp+6Fh] BYREF
  int v28; // [rsp+F8h] [rbp+77h] BYREF
  char v29; // [rsp+100h] [rbp+7Fh] BYREF

  v29 = a4;
  v28 = a3;
  v27 = a2;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180599EB0;
    qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
  }
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v14 = 0;
    v12 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v13 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v9 = CurrentThreadId;
    v15 = &v9;
    v18 = &v27;
    v21 = &v28;
    v24 = &v29;
    v16 = 4;
    v19 = 4;
    v22 = 4;
    v25 = 1;
    v7 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v5, &unk_1804D1FD1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *)((char *)this + 8));
}

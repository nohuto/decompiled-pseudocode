/*
 * XREFs of ?StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z @ 0x180152F4C
 * Callers:
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x180155E60 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180055DA8 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall CAppViewManagerTelemetry::WindowProvided::StartActivity(
        CAppViewManagerTelemetry::WindowProvided *this,
        const struct _GUID *a2,
        HWND a3)
{
  int v3; // esi
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  DWORD v10; // [rsp+34h] [rbp-45h] BYREF
  int v11; // [rsp+38h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  DWORD *v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  const struct _GUID *v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  int *v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+ACh] [rbp+33h]

  v3 = (int)a3;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1805C1F08;
    qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
    qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v16 = 0;
    v14 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v15 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v10 = CurrentThreadId;
    v17 = &v10;
    v23 = &v11;
    v18 = 4;
    v20 = a2;
    v21 = 16;
    v11 = v3;
    v24 = 4;
    v8 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v6, &unk_1804DCF40, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v8, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CAppViewManagerTelemetry::WindowProvided *)((char *)this + 8));
}

/*
 * XREFs of ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x18008D18C
 * Callers:
 *     ??$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA?AV01@AEA_KAEAPEAUHWND__@@@Z @ 0x18008C52C (--$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA-AV01@AEA_KAEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800116D8 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::StartActivity(
        IamTraceLogging::OnShellHookMessage *this,
        __int64 a2,
        HWND a3)
{
  const struct _TlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v7; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  DWORD v9; // [rsp+34h] [rbp-45h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-41h] BYREF
  HWND v11; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  void *v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+7Ch] [rbp+3h]
  DWORD *v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  __int64 *v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+9Ch] [rbp+23h]
  HWND *v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+A8h] [rbp+2Fh]
  int v24; // [rsp+ACh] [rbp+33h]
  __int64 v25; // [rsp+E8h] [rbp+6Fh] BYREF

  v25 = a2;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180599AE8;
    qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
    qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
  }
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v15 = 0;
    v13 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v14 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v9 = CurrentThreadId;
    v16 = &v9;
    v19 = &v25;
    v22 = &v11;
    v17 = 4;
    v20 = 8;
    v11 = a3;
    v23 = 8;
    v7 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v5, &unk_1804B6F10, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((IamTraceLogging::OnShellHookMessage *)((char *)this + 8));
}

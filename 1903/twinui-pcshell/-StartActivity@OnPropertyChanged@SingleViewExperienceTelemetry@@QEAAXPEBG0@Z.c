/*
 * XREFs of ?StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800B0C2C
 * Callers:
 *     ??$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x1800B0BD4 (--$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180033774 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnPropertyChanged::StartActivity(
        SingleViewExperienceTelemetry::OnPropertyChanged *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  DWORD v10; // [rsp+34h] [rbp-45h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  void *v13; // [rsp+60h] [rbp-19h]
  int v14; // [rsp+68h] [rbp-11h]
  int v15; // [rsp+6Ch] [rbp-Dh]
  DWORD *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp+17h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
  {
    v15 = 0;
    v13 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v14 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0;
    v10 = CurrentThreadId;
    v17 = 4;
    v16 = &v10;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateWsz(&v20, a3);
    v8 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v6, &unk_1804E59EC, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v8, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::OnPropertyChanged *)((char *)this + 8));
}

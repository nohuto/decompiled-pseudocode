/*
 * XREFs of ?StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A9ACC
 * Callers:
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A8D54 (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?zInternalStart@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801ACAC4 (-zInternalStart@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::StartActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic *this)
{
  const struct _TlgProvider_t *v2; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v4; // rax
  UINT32 cData; // edx
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  DWORD v7; // [rsp+34h] [rbp-5h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  DWORD *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C20C0;
    qword_1805C20C0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C20D8 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20C0, qword_1805C20D8);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1805C20C0);
  }
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
  {
    v12 = 0;
    v10 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v11 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0;
    v7 = CurrentThreadId;
    v13 = &v7;
    v14 = 4;
    v4 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v2, &unk_1804E472F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v4, cData, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic *)((char *)this + 8));
}

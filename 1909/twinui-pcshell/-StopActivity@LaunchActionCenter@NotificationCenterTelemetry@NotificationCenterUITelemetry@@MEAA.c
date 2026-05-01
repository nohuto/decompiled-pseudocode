/*
 * XREFs of ?StopActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x180197610
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180159A3C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StopActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *this)
{
  __int64 v1; // rsi
  int v3; // eax
  __int64 v4; // rsi
  const CHAR *v5; // rdx
  const CHAR *v6; // rdx
  const WCHAR *v7; // rdx
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  TraceLoggingHProvider v11; // r10
  const struct _TlgProvider_t *v12; // rdi
  int v13; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v17[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v24; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  int *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  DWORD *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  __int64 *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  int *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  __int64 v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+148h] [rbp+40h] BYREF
  DWORD *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+168h] [rbp+60h] BYREF
  int *v47; // [rsp+178h] [rbp+70h]
  __int64 v48; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+198h] [rbp+90h] BYREF
  WINBOOL *v51; // [rsp+1A8h] [rbp+A0h]
  __int64 v52; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1C8h] [rbp+C0h] BYREF

  v1 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 84) )
    v4 = v1 + 80;
  else
    v4 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1805C20C0;
      qword_1805C20C0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C20D8 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20C0, qword_1805C20D8);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1805C20C0);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v5 = *(const CHAR **)(v4 + 48);
      v31 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v32 = 8LL;
      v33 = &v22;
      v20 = *(_DWORD *)(v4 + 4);
      v35 = &v20;
      v22 = 0x1000000LL;
      v34 = 8LL;
      v36 = 4LL;
      TlgCreateSz(&pDesc, v5);
      v6 = *(const CHAR **)(v4 + 120);
      v38 = v4 + 56;
      v39 = 4LL;
      TlgCreateSz(&v40, v6);
      v7 = *(const WCHAR **)(v4 + 16);
      LODWORD(v21) = *(_DWORD *)v4;
      v41 = &v21;
      v42 = 4LL;
      TlgCreateWsz(&v43, v7);
      v8 = *(const CHAR **)(v4 + 64);
      v15 = *(_DWORD *)(v4 + 24);
      v44 = &v15;
      v45 = 4LL;
      TlgCreateSz(&v46, v8);
      v9 = *(const CHAR **)(v4 + 80);
      v16 = *(_DWORD *)(v4 + 72);
      v47 = &v16;
      v48 = 4LL;
      TlgCreateSz(&v49, v9);
      TlgCreateWsz(&v50, *(LPCWSTR *)(v4 + 88));
      v10 = *(const CHAR **)(v4 + 104);
      v17[0] = *(_DWORD *)(v4 + 96);
      v51 = v17;
      v52 = 4LL;
      TlgCreateSz(&v53, v10);
      TlgCreateWsz(&v54, *(LPCWSTR *)(v4 + 112));
      TlgWrite(v11, &unk_1804E30C2, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, v17, &Context) && v17[0] )
    {
      Context = qword_1805C20C0;
      qword_1805C20C0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C20D8 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20C0, qword_1805C20D8);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1805C20C0);
    }
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v12 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v25 = 8LL;
      v24 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v13 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v26 = &v16;
      v16 = v13;
      v27 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v29 = 4LL;
      v15 = CurrentThreadId;
      v28 = &v15;
      TlgWrite(v12, &unk_1804E306F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v23);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *)((char *)this + 8));
}

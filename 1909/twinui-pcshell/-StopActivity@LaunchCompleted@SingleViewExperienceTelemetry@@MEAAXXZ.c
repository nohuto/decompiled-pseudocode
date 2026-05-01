/*
 * XREFs of ?StopActivity@LaunchCompleted@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18007D730
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007D800 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

void __fastcall SingleViewExperienceTelemetry::LaunchCompleted::StopActivity(
        SingleViewExperienceTelemetry::LaunchCompleted *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  const struct _TlgProvider_t *v5; // rsi
  const CHAR *v6; // rdx
  const CHAR *v7; // rdx
  const WCHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  int v12; // ecx
  const CHAR *v13; // rdx
  TraceLoggingHProvider v14; // r10
  int v15; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  DWORD *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v34; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  __int64 *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  int *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+130h] [rbp+30h] BYREF
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+150h] [rbp+50h] BYREF
  int *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+170h] [rbp+70h] BYREF
  int *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1A0h] [rbp+A0h] BYREF
  DWORD *v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v59; // [rsp+1E0h] [rbp+E0h]
  __int64 v60; // [rsp+1E8h] [rbp+E8h]
  WINBOOL *p_fPending; // [rsp+1F0h] [rbp+F0h]
  __int64 v62; // [rsp+1F8h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+200h] [rbp+100h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v21, &Context) && v21 )
    {
      Context = qword_1805C20F0;
      qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v6 = (const CHAR *)*((_QWORD *)v4 + 6);
      v35 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v36 = 8LL;
      v37 = &v26;
      v22 = v4[1];
      v39 = &v22;
      v26 = 0x1000000LL;
      v38 = 8LL;
      v40 = 4LL;
      TlgCreateSz(&pDesc, v6);
      v7 = (const CHAR *)*((_QWORD *)v4 + 15);
      v42 = v4 + 14;
      v43 = 4LL;
      TlgCreateSz(&v44, v7);
      v8 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v23 = *v4;
      v45 = &v23;
      v46 = 4LL;
      TlgCreateWsz(&v47, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 8);
      v24 = v4[6];
      v48 = &v24;
      v49 = 4LL;
      TlgCreateSz(&v50, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 10);
      v25 = v4[18];
      v51 = &v25;
      v52 = 4LL;
      TlgCreateSz(&v53, v10);
      TlgCreateWsz(&v54, *((LPCWSTR *)v4 + 11));
      v11 = (const CHAR *)*((_QWORD *)v4 + 13);
      v17 = v4[24];
      v55 = &v17;
      v56 = 4LL;
      TlgCreateSz(&v57, v11);
      TlgCreateWsz(&v58, *((LPCWSTR *)v4 + 14));
      v12 = v4[2];
      v13 = (const CHAR *)*((_QWORD *)v4 + 5);
      v59 = &v18;
      fPending = v4[15];
      v18 = v12;
      p_fPending = &fPending;
      v60 = 4LL;
      v62 = 4LL;
      TlgCreateSz(&v63, v13);
      TlgWrite(v14, &unk_18050AD02, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &v34);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1805C20F0;
      qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
    }
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      v29 = 8LL;
      v28 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v15 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v30 = &v18;
      v18 = v15;
      v31 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v33 = 4LL;
      v17 = CurrentThreadId;
      v32 = &v17;
      TlgWrite(v5, &unk_18050ACB2, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::LaunchCompleted *)((char *)this + 8));
}

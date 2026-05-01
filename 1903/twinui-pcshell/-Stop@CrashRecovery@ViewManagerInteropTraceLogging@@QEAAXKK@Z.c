/*
 * XREFs of ?Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x18026EDBC
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x180275350 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18013F700 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CrashRecovery::Stop(
        ViewManagerInteropTraceLogging::CrashRecovery *this,
        int a2,
        int a3)
{
  int *v3; // rsi
  int v5; // eax
  int *v6; // rsi
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  int v13; // ecx
  const CHAR *v14; // rdx
  TraceLoggingHProvider v15; // r10
  const struct _TlgProvider_t *v16; // rsi
  int v17; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL v21; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  DWORD *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  int *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  __int64 *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  int *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  int *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+150h] [rbp+50h] BYREF
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+170h] [rbp+70h] BYREF
  int *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+190h] [rbp+90h] BYREF
  int *v57; // [rsp+1A0h] [rbp+A0h]
  __int64 v58; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1C0h] [rbp+C0h] BYREF
  DWORD *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]
  WINBOOL *v67; // [rsp+210h] [rbp+110h]
  __int64 v68; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+220h] [rbp+120h] BYREF
  int *v70; // [rsp+230h] [rbp+130h]
  __int64 v71; // [rsp+238h] [rbp+138h]
  int *v72; // [rsp+240h] [rbp+140h]
  __int64 v73; // [rsp+248h] [rbp+148h]
  int v74; // [rsp+298h] [rbp+198h] BYREF
  int v75; // [rsp+2A0h] [rbp+1A0h] BYREF

  v75 = a3;
  v74 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v5 = v3[19];
  if ( v5 < 0 && v5 == v3[21] )
    v6 = v3 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v6 )
  {
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180599EB0;
      qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v7 = (const CHAR *)*((_QWORD *)v6 + 6);
      v41 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v42 = 8LL;
      v43 = &v28;
      v24 = v6[1];
      v45 = &v24;
      v28 = 0x1000000LL;
      v44 = 8LL;
      v46 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)v6 + 15);
      v48 = v6 + 14;
      v49 = 4LL;
      TlgCreateSz(&v50, v8);
      v9 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v25 = *v6;
      v51 = &v25;
      v52 = 4LL;
      TlgCreateWsz(&v53, v9);
      v10 = (const CHAR *)*((_QWORD *)v6 + 8);
      v26 = v6[6];
      v54 = &v26;
      v55 = 4LL;
      TlgCreateSz(&v56, v10);
      v11 = (const CHAR *)*((_QWORD *)v6 + 10);
      v27 = v6[18];
      v57 = &v27;
      v58 = 4LL;
      TlgCreateSz(&v59, v11);
      TlgCreateWsz(&v60, *((LPCWSTR *)v6 + 11));
      v12 = (const CHAR *)*((_QWORD *)v6 + 13);
      v19 = v6[24];
      v61 = &v19;
      v62 = 4LL;
      TlgCreateSz(&v63, v12);
      TlgCreateWsz(&v64, *((LPCWSTR *)v6 + 14));
      v13 = v6[2];
      v14 = (const CHAR *)*((_QWORD *)v6 + 5);
      v65 = &v20;
      v21 = v6[15];
      v20 = v13;
      v67 = &v21;
      v66 = 4LL;
      v68 = 4LL;
      TlgCreateSz(&v69, v14);
      v71 = 4LL;
      v72 = &v75;
      v70 = &v74;
      v73 = 4LL;
      TlgWrite(v15, &unk_1804D0882, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x17u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v21, &Context) && v21 )
    {
      Context = qword_180599EB0;
      qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
    }
    v16 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v16 > 5u )
    {
      v31 = 8LL;
      v30 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v32 = &v20;
      v20 = v17;
      v33 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v35 = 4LL;
      v19 = CurrentThreadId;
      v37 = 4LL;
      v34 = &v19;
      v36 = &v74;
      v38 = &v75;
      v39 = 4LL;
      TlgWrite(v16, &unk_1804D09EB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v29);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ViewManagerInteropTraceLogging::CrashRecovery *)((char *)this + 8));
}

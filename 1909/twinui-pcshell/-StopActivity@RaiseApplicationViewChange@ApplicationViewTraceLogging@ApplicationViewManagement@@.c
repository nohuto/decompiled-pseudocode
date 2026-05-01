/*
 * XREFs of ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x18005CBD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180176FAC (-zInternalStop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rsi
  _QWORD *p_Context; // rax
  char v8; // di
  const struct _TlgProvider_t *v9; // rsi
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  TraceLoggingHProvider v18; // r10
  int v19; // ecx
  DWORD CurrentThreadId; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  DWORD v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  WINBOOL v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  int *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  DWORD *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v38; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  PSRWLOCK *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+130h] [rbp+30h] BYREF
  int *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+150h] [rbp+50h] BYREF
  int *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+170h] [rbp+70h] BYREF
  int *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1A0h] [rbp+A0h] BYREF
  DWORD *v59; // [rsp+1B0h] [rbp+B0h]
  __int64 v60; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v63; // [rsp+1E0h] [rbp+E0h]
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  WINBOOL *p_fPending; // [rsp+1F0h] [rbp+F0h]
  __int64 v66; // [rsp+1F8h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+200h] [rbp+100h] BYREF

  fPending = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v25, &Context) && v25 )
    {
      Context = qword_1805C2010;
      qword_1805C2010[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2028 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2010, qword_1805C2028);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_1805C2010);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v10 = (const CHAR *)*((_QWORD *)v4 + 6);
      v39 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v40 = 8LL;
      v41 = SRWLock;
      v26 = v4[1];
      v43 = &v26;
      SRWLock[0] = (PSRWLOCK)0x1000000;
      v42 = 8LL;
      v44 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 15);
      v46 = v4 + 14;
      v47 = 4LL;
      TlgCreateSz(&v48, v11);
      v12 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v27 = *v4;
      v49 = &v27;
      v50 = 4LL;
      TlgCreateWsz(&v51, v12);
      v13 = (const CHAR *)*((_QWORD *)v4 + 8);
      v28 = v4[6];
      v52 = &v28;
      v53 = 4LL;
      TlgCreateSz(&v54, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 10);
      v29 = v4[18];
      v55 = &v29;
      v56 = 4LL;
      TlgCreateSz(&v57, v14);
      TlgCreateWsz(&v58, *((LPCWSTR *)v4 + 11));
      v15 = (const CHAR *)*((_QWORD *)v4 + 13);
      v23 = v4[24];
      v59 = &v23;
      v60 = 4LL;
      TlgCreateSz(&v61, v15);
      TlgCreateWsz(&v62, *((LPCWSTR *)v4 + 14));
      v16 = v4[2];
      v17 = (const CHAR *)*((_QWORD *)v4 + 5);
      v63 = &v24;
      fPending = v4[15];
      v24 = v16;
      p_fPending = &fPending;
      v64 = 4LL;
      v66 = 4LL;
      TlgCreateSz(&v67, v17);
      TlgWrite(v18, &unk_1804E0AB1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &v38);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v6 = v5 + 31;
      AcquireSRWLockExclusive(v6);
      p_Context = &Context;
      v8 = 1;
    }
    else
    {
      p_Context = SRWLock;
      v8 = 2;
      v6 = 0LL;
    }
    *p_Context = 0LL;
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      if ( SRWLock[0] )
        ReleaseSRWLockExclusive(SRWLock[0]);
    }
    if ( (v8 & 1) != 0 && Context )
      ReleaseSRWLockExclusive((PSRWLOCK)Context);
    **((_DWORD **)this + 6) = 2;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1805C2010;
      qword_1805C2010[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2028 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2010, qword_1805C2028);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_1805C2010);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      v33 = 8LL;
      v32 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v19 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v34 = &v24;
      v24 = v19;
      v35 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v37 = 4LL;
      v23 = CurrentThreadId;
      v36 = &v23;
      TlgWrite(v9, &unk_1804E0C06, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)((char *)this + 8));
}

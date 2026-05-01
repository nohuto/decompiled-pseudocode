/*
 * XREFs of ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180033810
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002B12C (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800469A4 (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

void __fastcall SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::StopActivity(
        SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *this)
{
  __int64 v1; // rsi
  int v3; // eax
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // rdi
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  TraceLoggingHProvider v13; // r10
  int v14; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  int *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  DWORD *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  PSRWLOCK *p_SRWLock; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  int *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  __int64 v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+148h] [rbp+40h] BYREF
  DWORD *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+168h] [rbp+60h] BYREF
  int *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+198h] [rbp+90h] BYREF
  WINBOOL *v52; // [rsp+1A8h] [rbp+A0h]
  __int64 v53; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1C8h] [rbp+C0h] BYREF

  v1 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 84) )
    v4 = v1 + 80;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v20, &Context) && v20 )
    {
      Context = qword_180599CD0;
      qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v7 = *(const CHAR **)(v4 + 48);
      v32 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v33 = 8LL;
      p_SRWLock = &SRWLock;
      v21 = *(_DWORD *)(v4 + 4);
      v36 = &v21;
      SRWLock = (PSRWLOCK)0x1000000;
      v35 = 8LL;
      v37 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = *(const CHAR **)(v4 + 120);
      v39 = v4 + 56;
      v40 = 4LL;
      TlgCreateSz(&v41, v8);
      v9 = *(const WCHAR **)(v4 + 16);
      LODWORD(v22) = *(_DWORD *)v4;
      v42 = &v22;
      v43 = 4LL;
      TlgCreateWsz(&v44, v9);
      v10 = *(const CHAR **)(v4 + 64);
      v16 = *(_DWORD *)(v4 + 24);
      v45 = &v16;
      v46 = 4LL;
      TlgCreateSz(&v47, v10);
      v11 = *(const CHAR **)(v4 + 80);
      v17 = *(_DWORD *)(v4 + 72);
      v48 = &v17;
      v49 = 4LL;
      TlgCreateSz(&v50, v11);
      TlgCreateWsz(&v51, *(LPCWSTR *)(v4 + 88));
      v12 = *(const CHAR **)(v4 + 104);
      fPending[0] = *(_DWORD *)(v4 + 96);
      v52 = fPending;
      v53 = 4LL;
      TlgCreateSz(&v54, v12);
      TlgCreateWsz(&v55, *(LPCWSTR *)(v4 + 112));
      TlgWrite(v13, &unk_1804E4B57, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v5 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
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
      v26 = 8LL;
      v25 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v14 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v27 = &v17;
      v17 = v14;
      v28 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v30 = 4LL;
      v16 = CurrentThreadId;
      v29 = &v16;
      TlgWrite(v6, &unk_1804E4C96, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v24);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *)((char *)this + 8));
}

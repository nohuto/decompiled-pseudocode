/*
 * XREFs of ?StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180065A40
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180013700 (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801339D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnPropertyChanged::StopActivity(
        SingleViewExperienceTelemetry::OnPropertyChanged *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  _QWORD *p_Context; // rax
  char v7; // di
  RTL_SRWLOCK *v8; // rsi
  const struct _TlgProvider_t *v9; // rdi
  char *v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const WCHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  TraceLoggingHProvider v19; // r10
  int v20; // ecx
  DWORD CurrentThreadId; // eax
  int cData; // [rsp+28h] [rbp-E0h]
  WINBOOL fPending[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C8h] BYREF
  DWORD v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  WINBOOL v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v32; // [rsp+88h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  int *v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  DWORD *v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  PSRWLOCK *p_SRWLock; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  int *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  __int64 v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v49; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+148h] [rbp+40h] BYREF
  DWORD *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+168h] [rbp+60h] BYREF
  int *v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+198h] [rbp+90h] BYREF
  WINBOOL *v59; // [rsp+1A8h] [rbp+A0h]
  __int64 v60; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1C8h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  fPending[0] = 0;
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v2 + 84) )
    v4 = v2 + 80;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v27, &Context) && v27 )
    {
      Context = qword_1805C20F0;
      qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v13 = *(const CHAR **)(v4 + 48);
      v39 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v40 = 8LL;
      p_SRWLock = &SRWLock;
      v28 = *(_DWORD *)(v4 + 4);
      v43 = &v28;
      SRWLock = (PSRWLOCK)0x1000000;
      v42 = 8LL;
      v44 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = *(const CHAR **)(v4 + 120);
      v46 = v4 + 56;
      v47 = 4LL;
      TlgCreateSz(&v48, v14);
      v15 = *(const WCHAR **)(v4 + 16);
      LODWORD(v29) = *(_DWORD *)v4;
      v49 = &v29;
      v50 = 4LL;
      TlgCreateWsz(&v51, v15);
      v16 = *(const CHAR **)(v4 + 64);
      v25 = *(_DWORD *)(v4 + 24);
      v52 = &v25;
      v53 = 4LL;
      TlgCreateSz(&v54, v16);
      v17 = *(const CHAR **)(v4 + 80);
      v26 = *(_DWORD *)(v4 + 72);
      v55 = &v26;
      v56 = 4LL;
      TlgCreateSz(&v57, v17);
      TlgCreateWsz(&v58, *(LPCWSTR *)(v4 + 88));
      v18 = *(const CHAR **)(v4 + 104);
      fPending[0] = *(_DWORD *)(v4 + 96);
      v59 = fPending;
      v60 = 4LL;
      TlgCreateSz(&v61, v18);
      TlgCreateWsz(&v62, *(LPCWSTR *)(v4 + 112));
      TlgWrite(v19, &unk_18050C45D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v8 = v5 + 31;
      AcquireSRWLockExclusive(v8);
      p_Context = &Context;
      v7 = 1;
    }
    else
    {
      p_Context = &SRWLock;
      v7 = 2;
      v8 = 0LL;
    }
    *p_Context = 0LL;
    if ( (v7 & 2) != 0 )
    {
      v7 &= ~2u;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    if ( (v7 & 1) != 0 && Context )
      ReleaseSRWLockExclusive((PSRWLOCK)Context);
    **((_DWORD **)this + 6) = 2;
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = qword_1805C20F0;
      qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v33 = 8LL;
      v32 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v20 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v34 = &v26;
      v26 = v20;
      v35 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v37 = 4LL;
      v25 = CurrentThreadId;
      v36 = &v25;
      TlgWrite(v9, &unk_18050C40B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v31);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v10 = (char *)this + 8;
    if ( *((_DWORD *)v10 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        cData);
    v11 = *(__int64 **)v10;
    *((_DWORD *)v10 + 6) = 0;
    while ( 1 )
    {
      v12 = *v11;
      if ( !*v11 )
        break;
      if ( (char *)v12 == v10 )
      {
        *v11 = *((_QWORD *)v10 + 2);
        break;
      }
      v11 = (__int64 *)(v12 + 16);
      *(_QWORD *)v10 = v12 + 16;
    }
    *(_QWORD *)v10 = 0LL;
  }
}

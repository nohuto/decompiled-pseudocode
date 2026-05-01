/*
 * XREFs of ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x1800662F0
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
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801400D4 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::StopActivity(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rsi
  _QWORD *p_Context; // rax
  char v8; // di
  const struct _TlgProvider_t *v9; // rdi
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  TraceLoggingHProvider v16; // r10
  int v17; // ecx
  DWORD CurrentThreadId; // eax
  WINBOOL fPending[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C8h] BYREF
  DWORD v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  WINBOOL v23; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  int *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  DWORD *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  PSRWLOCK *p_SRWLock; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  int *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  __int64 v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+148h] [rbp+40h] BYREF
  DWORD *v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+168h] [rbp+60h] BYREF
  int *v51; // [rsp+178h] [rbp+70h]
  __int64 v52; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+198h] [rbp+90h] BYREF
  WINBOOL *v55; // [rsp+1A8h] [rbp+A0h]
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1C8h] [rbp+C0h] BYREF

  fPending[0] = 0;
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v2 + 84) )
    v4 = v2 + 80;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v23, &Context) && v23 )
    {
      Context = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v10 = *(const CHAR **)(v4 + 48);
      v35 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v36 = 8LL;
      p_SRWLock = &SRWLock;
      v24 = *(_DWORD *)(v4 + 4);
      v39 = &v24;
      SRWLock = (PSRWLOCK)0x1000000;
      v38 = 8LL;
      v40 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = *(const CHAR **)(v4 + 120);
      v42 = v4 + 56;
      v43 = 4LL;
      TlgCreateSz(&v44, v11);
      v12 = *(const WCHAR **)(v4 + 16);
      LODWORD(v25) = *(_DWORD *)v4;
      v45 = &v25;
      v46 = 4LL;
      TlgCreateWsz(&v47, v12);
      v13 = *(const CHAR **)(v4 + 64);
      v21 = *(_DWORD *)(v4 + 24);
      v48 = &v21;
      v49 = 4LL;
      TlgCreateSz(&v50, v13);
      v14 = *(const CHAR **)(v4 + 80);
      v22 = *(_DWORD *)(v4 + 72);
      v51 = &v22;
      v52 = 4LL;
      TlgCreateSz(&v53, v14);
      TlgCreateWsz(&v54, *(LPCWSTR *)(v4 + 88));
      v15 = *(const CHAR **)(v4 + 104);
      fPending[0] = *(_DWORD *)(v4 + 96);
      v55 = fPending;
      v56 = 4LL;
      TlgCreateSz(&v57, v15);
      TlgCreateWsz(&v58, *(LPCWSTR *)(v4 + 112));
      TlgWrite(v16, &unk_1804E025E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
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
      p_Context = &SRWLock;
      v8 = 2;
      v6 = 0LL;
    }
    *p_Context = 0LL;
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    if ( (v8 & 1) != 0 && Context )
      ReleaseSRWLockExclusive((PSRWLOCK)Context);
    **((_DWORD **)this + 6) = 2;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
    {
      Context = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u
      && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
    {
      v29 = 8LL;
      v28 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v30 = &v22;
      v22 = v17;
      v31 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v33 = 4LL;
      v21 = CurrentThreadId;
      v32 = &v21;
      TlgWrite(v9, &unk_1804E0385, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::SetSystemVisual *)((char *)this + 8));
}

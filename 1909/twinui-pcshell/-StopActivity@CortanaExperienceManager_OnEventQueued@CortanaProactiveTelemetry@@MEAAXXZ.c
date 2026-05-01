/*
 * XREFs of ?StopActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180064C20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801339D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18015ED20 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StopActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  char v6; // di
  RTL_SRWLOCK *v7; // rsi
  _QWORD *p_Context; // rax
  const struct _TlgProvider_t *v9; // rsi
  char *v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const WCHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  int v19; // ecx
  const CHAR *v20; // rdx
  TraceLoggingHProvider v21; // r10
  int v22; // ecx
  DWORD CurrentThreadId; // eax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  DWORD v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  WINBOOL v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  int *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  DWORD *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v42; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  PSRWLOCK *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  int *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+130h] [rbp+30h] BYREF
  int *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+150h] [rbp+50h] BYREF
  int *v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+170h] [rbp+70h] BYREF
  int *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1A0h] [rbp+A0h] BYREF
  DWORD *v63; // [rsp+1B0h] [rbp+B0h]
  __int64 v64; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1E8h] [rbp+E8h]
  WINBOOL *p_fPending; // [rsp+1F0h] [rbp+F0h]
  __int64 v70; // [rsp+1F8h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+200h] [rbp+100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  fPending = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v29, &Context) && v29 )
    {
      Context = qword_1805C2118;
      qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v13 = (const CHAR *)*((_QWORD *)v4 + 6);
      v43 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v44 = 8LL;
      v45 = SRWLock;
      v30 = v4[1];
      v47 = &v30;
      SRWLock[0] = (PSRWLOCK)0x1000000;
      v46 = 8LL;
      v48 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 15);
      v50 = v4 + 14;
      v51 = 4LL;
      TlgCreateSz(&v52, v14);
      v15 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v31 = *v4;
      v53 = &v31;
      v54 = 4LL;
      TlgCreateWsz(&v55, v15);
      v16 = (const CHAR *)*((_QWORD *)v4 + 8);
      v32 = v4[6];
      v56 = &v32;
      v57 = 4LL;
      TlgCreateSz(&v58, v16);
      v17 = (const CHAR *)*((_QWORD *)v4 + 10);
      v33 = v4[18];
      v59 = &v33;
      v60 = 4LL;
      TlgCreateSz(&v61, v17);
      TlgCreateWsz(&v62, *((LPCWSTR *)v4 + 11));
      v18 = (const CHAR *)*((_QWORD *)v4 + 13);
      v27 = v4[24];
      v63 = &v27;
      v64 = 4LL;
      TlgCreateSz(&v65, v18);
      TlgCreateWsz(&v66, *((LPCWSTR *)v4 + 14));
      v19 = v4[2];
      v20 = (const CHAR *)*((_QWORD *)v4 + 5);
      v67 = &v28;
      fPending = v4[15];
      v28 = v19;
      p_fPending = &fPending;
      v68 = 4LL;
      v70 = 4LL;
      TlgCreateSz(&v71, v20);
      TlgWrite(v21, &unk_1804E3A4C, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &v42);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v7 = v5 + 31;
      AcquireSRWLockExclusive(v7);
      p_Context = &Context;
      v6 = 1;
    }
    else
    {
      v6 = 2;
      v7 = 0LL;
      p_Context = SRWLock;
    }
    *p_Context = 0LL;
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( SRWLock[0] )
        ReleaseSRWLockExclusive(SRWLock[0]);
    }
    if ( (v6 & 1) != 0 && Context )
      ReleaseSRWLockExclusive((PSRWLOCK)Context);
    **((_DWORD **)this + 6) = 2;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805C2118;
      qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      v37 = 8LL;
      v36 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v22 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v38 = &v28;
      v28 = v22;
      v39 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v41 = 4LL;
      v27 = CurrentThreadId;
      v40 = &v27;
      TlgWrite(v9, &unk_1804E3BAD, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &pData);
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

/*
 * XREFs of ?StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ @ 0x1800160A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002B12C (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007AEB0 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

void __fastcall CAppManagerTelemetry::AddWindowToGlom::StopActivity(CAppManagerTelemetry::AddWindowToGlom *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // rsi
  int v7; // ecx
  DWORD CurrentThreadId; // eax
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const WCHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  int v15; // ecx
  const CHAR *v16; // rdx
  TraceLoggingHProvider v17; // r10
  DWORD v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  void *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  DWORD *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v35; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  PSRWLOCK *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  int *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+130h] [rbp+30h] BYREF
  int *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+150h] [rbp+50h] BYREF
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+170h] [rbp+70h] BYREF
  int *v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1A0h] [rbp+A0h] BYREF
  DWORD *v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v60; // [rsp+1E0h] [rbp+E0h]
  __int64 v61; // [rsp+1E8h] [rbp+E8h]
  WINBOOL *p_fPending; // [rsp+1F0h] [rbp+F0h]
  __int64 v63; // [rsp+1F8h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+200h] [rbp+100h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v22, &Context) && v22 )
    {
      Context = &qword_180599AE8;
      qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
      qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v9 = (const CHAR *)*((_QWORD *)v4 + 6);
      v36 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v37 = 8LL;
      v38 = SRWLock;
      v23 = v4[1];
      v40 = &v23;
      SRWLock[0] = (PSRWLOCK)0x1000000;
      v39 = 8LL;
      v41 = 4LL;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 15);
      v43 = v4 + 14;
      v44 = 4LL;
      TlgCreateSz(&v45, v10);
      v11 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v24 = *v4;
      v46 = &v24;
      v47 = 4LL;
      TlgCreateWsz(&v48, v11);
      v12 = (const CHAR *)*((_QWORD *)v4 + 8);
      v25 = v4[6];
      v49 = &v25;
      v50 = 4LL;
      TlgCreateSz(&v51, v12);
      v13 = (const CHAR *)*((_QWORD *)v4 + 10);
      v26 = v4[18];
      v52 = &v26;
      v53 = 4LL;
      TlgCreateSz(&v54, v13);
      TlgCreateWsz(&v55, *((LPCWSTR *)v4 + 11));
      v14 = (const CHAR *)*((_QWORD *)v4 + 13);
      v18 = v4[24];
      v56 = &v18;
      v57 = 4LL;
      TlgCreateSz(&v58, v14);
      TlgCreateWsz(&v59, *((LPCWSTR *)v4 + 14));
      v15 = v4[2];
      v16 = (const CHAR *)*((_QWORD *)v4 + 5);
      v60 = &v19;
      fPending = v4[15];
      v19 = v15;
      p_fPending = &fPending;
      v61 = 4LL;
      v63 = 4LL;
      TlgCreateSz(&v64, v16);
      TlgWrite(v17, &unk_1804B72BB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &v35);
    }
  }
  else
  {
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      this,
      SRWLock);
    v5 = SRWLock[0];
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_180599AE8;
      qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
      qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
    }
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      v30 = 8LL;
      v29 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v7 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v31 = &v19;
      v19 = v7;
      v32 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v34 = 4LL;
      v18 = CurrentThreadId;
      v33 = &v18;
      TlgWrite(v6, &unk_1804B7405, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CAppManagerTelemetry::AddWindowToGlom *)((char *)this + 8));
}

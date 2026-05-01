/*
 * XREFs of ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x18005F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180011FD8 (-zInternalStop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::StopActivity(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rsi
  LPVOID *p_Context; // rax
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
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  DWORD v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  PSRWLOCK fPending; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v23; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+54h] [rbp-B4h] BYREF
  int v25; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+68h] [rbp-A0h] BYREF
  int *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  DWORD *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  int *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+F8h] [rbp-10h] BYREF
  int *v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+118h] [rbp+10h] BYREF
  DWORD *v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+138h] [rbp+30h] BYREF
  int *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+168h] [rbp+60h] BYREF
  PSRWLOCK *p_fPending; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+198h] [rbp+90h] BYREF

  LODWORD(fPending) = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v23, &Context) && v23 )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v10 = (const CHAR *)*((_QWORD *)v4 + 6);
      v24 = v4[1];
      v32 = &v24;
      v33 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 15);
      v35 = v4 + 14;
      v36 = 4LL;
      TlgCreateSz(&v37, v11);
      v12 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v25 = *v4;
      v38 = &v25;
      v39 = 4LL;
      TlgCreateWsz(&v40, v12);
      v13 = (const CHAR *)*((_QWORD *)v4 + 8);
      v20 = v4[6];
      v41 = &v20;
      v42 = 4LL;
      TlgCreateSz(&v43, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 10);
      v21 = v4[18];
      v44 = &v21;
      v45 = 4LL;
      TlgCreateSz(&v46, v14);
      TlgCreateWsz(&v47, *((LPCWSTR *)v4 + 11));
      v15 = (const CHAR *)*((_QWORD *)v4 + 13);
      LODWORD(fPending) = v4[24];
      p_fPending = &fPending;
      v49 = 4LL;
      TlgCreateSz(&v50, v15);
      TlgCreateWsz(&v51, *((LPCWSTR *)v4 + 14));
      TlgWrite(v16, &unk_18044AF9E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v6 = v5 + 31;
      AcquireSRWLockExclusive(v6);
      p_Context = (LPVOID *)&fPending;
      fPending = v6;
      v8 = 1;
    }
    else
    {
      Context = 0LL;
      p_Context = &Context;
      v8 = 2;
      v6 = 0LL;
    }
    *p_Context = 0LL;
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      if ( Context )
        ReleaseSRWLockExclusive((PSRWLOCK)Context);
    }
    if ( (v8 & 1) != 0 && fPending )
      ReleaseSRWLockExclusive(fPending);
    **((_DWORD **)this + 6) = 2;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u
      && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
    {
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v27 = &v21;
      v21 = v17;
      v28 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v30 = 4LL;
      v20 = CurrentThreadId;
      v29 = &v20;
      TlgWrite(v9, &unk_18044B0A5, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v26);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::SetSystemVisual *)((char *)this + 8));
}

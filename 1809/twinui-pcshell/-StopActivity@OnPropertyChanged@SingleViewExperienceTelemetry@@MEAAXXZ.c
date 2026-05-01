/*
 * XREFs of ?StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18005F130
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180018FA4 (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800EFCD4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnPropertyChanged::StopActivity(
        SingleViewExperienceTelemetry::OnPropertyChanged *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  LPVOID *p_Context; // rax
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
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  DWORD v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  PSRWLOCK fPending; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+68h] [rbp-A0h] BYREF
  int *v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  DWORD *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+F8h] [rbp-10h] BYREF
  int *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+118h] [rbp+10h] BYREF
  DWORD *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+138h] [rbp+30h] BYREF
  int *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+168h] [rbp+60h] BYREF
  PSRWLOCK *p_fPending; // [rsp+178h] [rbp+70h]
  __int64 v53; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  LODWORD(fPending) = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v27, &Context) && v27 )
    {
      Context = qword_18050F938;
      qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v13 = (const CHAR *)*((_QWORD *)v4 + 6);
      v28 = v4[1];
      v36 = &v28;
      v37 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 15);
      v39 = v4 + 14;
      v40 = 4LL;
      TlgCreateSz(&v41, v14);
      v15 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v29 = *v4;
      v42 = &v29;
      v43 = 4LL;
      TlgCreateWsz(&v44, v15);
      v16 = (const CHAR *)*((_QWORD *)v4 + 8);
      v24 = v4[6];
      v45 = &v24;
      v46 = 4LL;
      TlgCreateSz(&v47, v16);
      v17 = (const CHAR *)*((_QWORD *)v4 + 10);
      v25 = v4[18];
      v48 = &v25;
      v49 = 4LL;
      TlgCreateSz(&v50, v17);
      TlgCreateWsz(&v51, *((LPCWSTR *)v4 + 11));
      v18 = (const CHAR *)*((_QWORD *)v4 + 13);
      LODWORD(fPending) = v4[24];
      p_fPending = &fPending;
      v53 = 4LL;
      TlgCreateSz(&v54, v18);
      TlgCreateWsz(&v55, *((LPCWSTR *)v4 + 14));
      TlgWrite(v19, &unk_18046BC4A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v8 = v5 + 31;
      AcquireSRWLockExclusive(v8);
      p_Context = (LPVOID *)&fPending;
      fPending = v8;
      v7 = 1;
    }
    else
    {
      Context = 0LL;
      p_Context = &Context;
      v7 = 2;
      v8 = 0LL;
    }
    *p_Context = 0LL;
    if ( (v7 & 2) != 0 )
    {
      v7 &= ~2u;
      if ( Context )
        ReleaseSRWLockExclusive((PSRWLOCK)Context);
    }
    if ( (v7 & 1) != 0 && fPending )
      ReleaseSRWLockExclusive(fPending);
    **((_DWORD **)this + 6) = 2;
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      Context = qword_18050F938;
      qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v20 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v31 = &v25;
      v25 = v20;
      v32 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v34 = 4LL;
      v24 = CurrentThreadId;
      v33 = &v24;
      TlgWrite(v9, &unk_18046BC08, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v30);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v10 = (char *)this + 8;
    if ( *((_DWORD *)v10 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\Result.h",
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

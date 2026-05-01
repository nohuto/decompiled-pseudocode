/*
 * XREFs of ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180018ED4
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180018C04 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180018FA4 (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

void __fastcall SingleViewExperienceTelemetry::Show::Stop(SingleViewExperienceTelemetry::Show *this, int a2)
{
  int *v2; // rsi
  int v4; // eax
  int *v5; // rsi
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
  DWORD v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp-A0h] BYREF
  int *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  DWORD *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  int *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+100h] [rbp+0h] BYREF
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+120h] [rbp+20h] BYREF
  DWORD *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+140h] [rbp+40h] BYREF
  int *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+170h] [rbp+70h] BYREF
  WINBOOL *p_fPending; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  int v53; // [rsp+208h] [rbp+108h] BYREF

  v53 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  Context = 0LL;
  if ( v5 )
  {
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v20, &Context) && v20 )
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
      v7 = (const CHAR *)*((_QWORD *)v5 + 6);
      v21 = v5[1];
      v31 = &v21;
      v32 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)v5 + 15);
      v34 = v5 + 14;
      v35 = 4LL;
      TlgCreateSz(&v36, v8);
      v9 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v22 = *v5;
      v37 = &v22;
      v38 = 4LL;
      TlgCreateWsz(&v39, v9);
      v10 = (const CHAR *)*((_QWORD *)v5 + 8);
      v16 = v5[6];
      v40 = &v16;
      v41 = 4LL;
      TlgCreateSz(&v42, v10);
      v11 = (const CHAR *)*((_QWORD *)v5 + 10);
      v17 = v5[18];
      v43 = &v17;
      v44 = 4LL;
      TlgCreateSz(&v45, v11);
      TlgCreateWsz(&v46, *((LPCWSTR *)v5 + 11));
      v12 = (const CHAR *)*((_QWORD *)v5 + 13);
      fPending = v5[24];
      p_fPending = &fPending;
      v48 = 4LL;
      TlgCreateSz(&v49, v12);
      TlgCreateWsz(&v50, *((LPCWSTR *)v5 + 14));
      v52 = 4LL;
      v51 = &v53;
      TlgWrite(v13, &unk_18046B66C, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_18050F938;
      qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
    }
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v14 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v24 = &v17;
      v17 = v14;
      v25 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v27 = 4LL;
      v16 = CurrentThreadId;
      v29 = 4LL;
      v26 = &v16;
      v28 = &v53;
      TlgWrite(v6, &unk_18046B626, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v23);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::Show *)((char *)this + 8));
}

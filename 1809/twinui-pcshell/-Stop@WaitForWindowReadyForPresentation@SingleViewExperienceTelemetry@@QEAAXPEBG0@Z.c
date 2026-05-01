/*
 * XREFs of ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800188AC
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180017940 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _lambda_60d16d02b9cc51a6582d9c6577bb1617_::operator() @ 0x18001855C (_lambda_60d16d02b9cc51a6582d9c6577bb1617_--operator().c)
 *     wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1803AE2DC (wil--details--ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___--_ScopeExitFn__lambda_6914.c)
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

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int *v3; // rsi
  int v7; // eax
  int *v8; // rsi
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
  DWORD v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+B0h] [rbp-50h] BYREF
  int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+D0h] [rbp-30h] BYREF
  DWORD *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+F0h] [rbp-10h] BYREF
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+120h] [rbp+20h] BYREF
  WINBOOL *p_fPending; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+170h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR v49; // [rsp+180h] [rbp+80h] BYREF
  int *v50; // [rsp+1A0h] [rbp+A0h]
  __int64 v51; // [rsp+1A8h] [rbp+A8h]
  DWORD *v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  Context = 0LL;
  if ( v8 )
  {
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v23, &Context) && v23 )
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
      v10 = (const CHAR *)*((_QWORD *)v8 + 6);
      v24 = v8[1];
      v27 = &v24;
      v28 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v8 + 15);
      v30 = v8 + 14;
      v31 = 4LL;
      TlgCreateSz(&v32, v11);
      v12 = (const WCHAR *)*((_QWORD *)v8 + 2);
      v25 = *v8;
      v33 = &v25;
      v34 = 4LL;
      TlgCreateWsz(&v35, v12);
      v13 = (const CHAR *)*((_QWORD *)v8 + 8);
      v19 = v8[6];
      v36 = &v19;
      v37 = 4LL;
      TlgCreateSz(&v38, v13);
      v14 = (const CHAR *)*((_QWORD *)v8 + 10);
      v20 = v8[18];
      v39 = &v20;
      v40 = 4LL;
      TlgCreateSz(&v41, v14);
      TlgCreateWsz(&v42, *((LPCWSTR *)v8 + 11));
      v15 = (const CHAR *)*((_QWORD *)v8 + 13);
      fPending = v8[24];
      p_fPending = &fPending;
      v44 = 4LL;
      TlgCreateSz(&v45, v15);
      TlgCreateWsz(&v46, *((LPCWSTR *)v8 + 14));
      TlgCreateWsz(&v47, a2);
      TlgCreateWsz(&v48, a3);
      TlgWrite(v16, &unk_18046B3FE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
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
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v50 = &v20;
      v20 = v17;
      v51 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v53 = 4LL;
      v19 = CurrentThreadId;
      v52 = &v19;
      TlgCreateWsz(&v54, a2);
      TlgCreateWsz(&v55, a3);
      TlgWrite(v9, &unk_18046B399, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v49);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)((char *)this + 8));
}

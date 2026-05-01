/*
 * XREFs of ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x1802A6A1C
 * Callers:
 *     ??0FocusHoldingTank@@QEAA@XZ @ 0x1802A6308 (--0FocusHoldingTank@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180117E9C (-zInternalStop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall StartWindowTelemetry::CreateHoldingTankWindow::Stop(
        StartWindowTelemetry::CreateHoldingTankWindow *this,
        void *a2)
{
  int *v2; // rsi
  int v4; // eax
  int *v5; // rsi
  const CHAR *v6; // rdx
  const CHAR *v7; // rdx
  const WCHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  int v12; // ecx
  const CHAR *v13; // rdx
  TraceLoggingHProvider v14; // r10
  const struct _TlgProvider_t *v15; // rsi
  int v16; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v20[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  int v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  int v26; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+68h] [rbp-A0h] BYREF
  int *v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  DWORD *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  void **v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  int *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+108h] [rbp+0h] BYREF
  int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+128h] [rbp+20h] BYREF
  int *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+148h] [rbp+40h] BYREF
  int *v47; // [rsp+158h] [rbp+50h]
  __int64 v48; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+178h] [rbp+70h] BYREF
  DWORD *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v55; // [rsp+1B8h] [rbp+B0h]
  __int64 v56; // [rsp+1C0h] [rbp+B8h]
  WINBOOL *v57; // [rsp+1C8h] [rbp+C0h]
  __int64 v58; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1D8h] [rbp+D0h] BYREF
  void **v60; // [rsp+1E8h] [rbp+E0h]
  __int64 v61; // [rsp+1F0h] [rbp+E8h]
  void *v62; // [rsp+230h] [rbp+128h] BYREF

  v62 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v5 )
  {
    if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_18050FBC0;
      qword_18050FBC0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050FBD8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050FBC0, qword_18050FBD8);
      InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_18050FBC0);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v6 = (const CHAR *)*((_QWORD *)v5 + 6);
      v23 = v5[1];
      v35 = &v23;
      v36 = 4LL;
      TlgCreateSz(&pDesc, v6);
      v7 = (const CHAR *)*((_QWORD *)v5 + 15);
      v38 = v5 + 14;
      v39 = 4LL;
      TlgCreateSz(&v40, v7);
      v8 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v24 = *v5;
      v41 = &v24;
      v42 = 4LL;
      TlgCreateWsz(&v43, v8);
      v9 = (const CHAR *)*((_QWORD *)v5 + 8);
      v25 = v5[6];
      v44 = &v25;
      v45 = 4LL;
      TlgCreateSz(&v46, v9);
      v10 = (const CHAR *)*((_QWORD *)v5 + 10);
      v26 = v5[18];
      v47 = &v26;
      v48 = 4LL;
      TlgCreateSz(&v49, v10);
      TlgCreateWsz(&v50, *((LPCWSTR *)v5 + 11));
      v11 = (const CHAR *)*((_QWORD *)v5 + 13);
      v18 = v5[24];
      v51 = &v18;
      v52 = 4LL;
      TlgCreateSz(&v53, v11);
      TlgCreateWsz(&v54, *((LPCWSTR *)v5 + 14));
      v12 = v5[2];
      v13 = (const CHAR *)*((_QWORD *)v5 + 5);
      v55 = &v19;
      v20[0] = v5[15];
      v19 = v12;
      v57 = v20;
      v56 = 4LL;
      v58 = 4LL;
      TlgCreateSz(&v59, v13);
      v61 = 8LL;
      v60 = &v62;
      TlgWrite(v14, &unk_1804628B7, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, v20, &Context) && v20[0] )
    {
      Context = qword_18050FBC0;
      qword_18050FBC0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050FBD8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050FBC0, qword_18050FBD8);
      InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_18050FBC0);
    }
    v15 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v15 > 5u )
    {
      v16 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v28 = &v19;
      v19 = v16;
      v29 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v31 = 4LL;
      v18 = CurrentThreadId;
      v33 = 8LL;
      v30 = &v18;
      v32 = &v62;
      TlgWrite(v15, &unk_1804629EF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((StartWindowTelemetry::CreateHoldingTankWindow *)((char *)this + 8));
}

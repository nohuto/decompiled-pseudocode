/*
 * XREFs of ?Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x180218DE8
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x18021FD5C (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
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

void __fastcall ViewManagerInteropTraceLogging::CrashRecovery::Stop(
        ViewManagerInteropTraceLogging::CrashRecovery *this,
        int a2,
        int a3)
{
  int *v3; // rsi
  int v5; // eax
  int *v6; // rsi
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  int v13; // ecx
  const CHAR *v14; // rdx
  TraceLoggingHProvider v15; // r10
  const struct _TlgProvider_t *v16; // rsi
  int v17; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL v21; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+60h] [rbp-A0h] BYREF
  int *v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  DWORD *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  int *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  int *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+110h] [rbp+10h] BYREF
  int *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+130h] [rbp+30h] BYREF
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+150h] [rbp+50h] BYREF
  int *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+180h] [rbp+80h] BYREF
  DWORD *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]
  WINBOOL *v60; // [rsp+1D0h] [rbp+D0h]
  __int64 v61; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v63; // [rsp+1F0h] [rbp+F0h]
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  int *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]
  int v67; // [rsp+258h] [rbp+158h] BYREF
  int v68; // [rsp+260h] [rbp+160h] BYREF

  v68 = a3;
  v67 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v5 = v3[19];
  if ( v5 < 0 && v5 == v3[21] )
    v6 = v3 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v6 )
  {
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_18050FB08;
      qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
      qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v7 = (const CHAR *)*((_QWORD *)v6 + 6);
      v24 = v6[1];
      v38 = &v24;
      v39 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)v6 + 15);
      v41 = v6 + 14;
      v42 = 4LL;
      TlgCreateSz(&v43, v8);
      v9 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v25 = *v6;
      v44 = &v25;
      v45 = 4LL;
      TlgCreateWsz(&v46, v9);
      v10 = (const CHAR *)*((_QWORD *)v6 + 8);
      v26 = v6[6];
      v47 = &v26;
      v48 = 4LL;
      TlgCreateSz(&v49, v10);
      v11 = (const CHAR *)*((_QWORD *)v6 + 10);
      v27 = v6[18];
      v50 = &v27;
      v51 = 4LL;
      TlgCreateSz(&v52, v11);
      TlgCreateWsz(&v53, *((LPCWSTR *)v6 + 11));
      v12 = (const CHAR *)*((_QWORD *)v6 + 13);
      v19 = v6[24];
      v54 = &v19;
      v55 = 4LL;
      TlgCreateSz(&v56, v12);
      TlgCreateWsz(&v57, *((LPCWSTR *)v6 + 14));
      v13 = v6[2];
      v14 = (const CHAR *)*((_QWORD *)v6 + 5);
      v58 = &v20;
      v21 = v6[15];
      v20 = v13;
      v60 = &v21;
      v59 = 4LL;
      v61 = 4LL;
      TlgCreateSz(&v62, v14);
      v64 = 4LL;
      v65 = &v68;
      v63 = &v67;
      v66 = 4LL;
      TlgWrite(v15, &unk_18045BB31, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v21, &Context) && v21 )
    {
      Context = &qword_18050FB08;
      qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
      qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
    }
    v16 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v16 > 5u )
    {
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v29 = &v20;
      v20 = v17;
      v30 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v32 = 4LL;
      v19 = CurrentThreadId;
      v34 = 4LL;
      v31 = &v19;
      v33 = &v67;
      v35 = &v68;
      v36 = 4LL;
      TlgWrite(v16, &unk_18045BC7A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v28);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ViewManagerInteropTraceLogging::CrashRecovery *)((char *)this + 8));
}

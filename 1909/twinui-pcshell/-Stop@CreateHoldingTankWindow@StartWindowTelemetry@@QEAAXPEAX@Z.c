/*
 * XREFs of ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x18031E3C8
 * Callers:
 *     ??0FocusHoldingTank@@QEAA@XZ @ 0x18031DC78 (--0FocusHoldingTank@@QEAA@XZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18015ED20 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
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
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  int *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  DWORD *v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  void **v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int64 *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  int *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+128h] [rbp+20h] BYREF
  int *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+148h] [rbp+40h] BYREF
  int *v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+168h] [rbp+60h] BYREF
  int *v51; // [rsp+178h] [rbp+70h]
  __int64 v52; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+188h] [rbp+80h] BYREF
  __int64 *v54; // [rsp+198h] [rbp+90h]
  __int64 v55; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1B8h] [rbp+B0h] BYREF
  DWORD *v58; // [rsp+1C8h] [rbp+C0h]
  __int64 v59; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1E8h] [rbp+E0h] BYREF
  int *v62; // [rsp+1F8h] [rbp+F0h]
  __int64 v63; // [rsp+200h] [rbp+F8h]
  WINBOOL *v64; // [rsp+208h] [rbp+100h]
  __int64 v65; // [rsp+210h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+218h] [rbp+110h] BYREF
  void **v67; // [rsp+228h] [rbp+120h]
  __int64 v68; // [rsp+230h] [rbp+128h]
  void *v69; // [rsp+270h] [rbp+168h] BYREF

  v69 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v5 )
  {
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1805C23C8;
      qword_1805C23C8 = &ShellScreenClippingLogging::`vftable';
      qword_1805C23E0 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C23C8, qword_1805C23E0);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805C23C8);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v6 = (const CHAR *)*((_QWORD *)v5 + 6);
      v38 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v39 = 8LL;
      v40 = &v27;
      v23 = v5[1];
      v42 = &v23;
      v27 = 0x1000000LL;
      v41 = 8LL;
      v43 = 4LL;
      TlgCreateSz(&pDesc, v6);
      v7 = (const CHAR *)*((_QWORD *)v5 + 15);
      v45 = v5 + 14;
      v46 = 4LL;
      TlgCreateSz(&v47, v7);
      v8 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v24 = *v5;
      v48 = &v24;
      v49 = 4LL;
      TlgCreateWsz(&v50, v8);
      v9 = (const CHAR *)*((_QWORD *)v5 + 8);
      v25 = v5[6];
      v51 = &v25;
      v52 = 4LL;
      TlgCreateSz(&v53, v9);
      v10 = (const CHAR *)*((_QWORD *)v5 + 10);
      LODWORD(v26) = v5[18];
      v54 = &v26;
      v55 = 4LL;
      TlgCreateSz(&v56, v10);
      TlgCreateWsz(&v57, *((LPCWSTR *)v5 + 11));
      v11 = (const CHAR *)*((_QWORD *)v5 + 13);
      v18 = v5[24];
      v58 = &v18;
      v59 = 4LL;
      TlgCreateSz(&v60, v11);
      TlgCreateWsz(&v61, *((LPCWSTR *)v5 + 14));
      v12 = v5[2];
      v13 = (const CHAR *)*((_QWORD *)v5 + 5);
      v62 = &v19;
      v20[0] = v5[15];
      v19 = v12;
      v64 = v20;
      v63 = 4LL;
      v65 = 4LL;
      TlgCreateSz(&v66, v13);
      v68 = 8LL;
      v67 = &v69;
      TlgWrite(v14, &unk_1804FEE4D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x16u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, v20, &Context) && v20[0] )
    {
      Context = &qword_1805C23C8;
      qword_1805C23C8 = &ShellScreenClippingLogging::`vftable';
      qword_1805C23E0 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C23C8, qword_1805C23E0);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805C23C8);
    }
    v15 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v15 > 5u )
    {
      v30 = 8LL;
      v29 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v16 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v31 = &v19;
      v19 = v16;
      v32 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v34 = 4LL;
      v18 = CurrentThreadId;
      v36 = 8LL;
      v33 = &v18;
      v35 = &v69;
      TlgWrite(v15, &unk_1804FEDEF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v28);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((StartWindowTelemetry::CreateHoldingTankWindow *)((char *)this + 8));
}

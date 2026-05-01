/*
 * XREFs of ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x1803B21E0
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1800789B0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180080858 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

void __fastcall TabletModeTraceLogging::ShowWindowAttempted::Stop(
        TabletModeTraceLogging::ShowWindowAttempted *this,
        int a2)
{
  int *v2; // rsi
  int v4; // eax
  int *v5; // rsi
  __int64 v6; // rcx
  wil::TraceLoggingProvider *v7; // rax
  _QWORD *v8; // rcx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const WCHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  int v15; // ecx
  const CHAR *v16; // rdx
  TraceLoggingHProvider v17; // r10
  __int64 v18; // rcx
  wil::TraceLoggingProvider *v19; // rax
  _QWORD *v20; // rcx
  const struct _TlgProvider_t *v21; // rsi
  int v22; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v26[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  int *v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  DWORD *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  int *v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  __int64 *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  int *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+128h] [rbp+20h] BYREF
  int *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+148h] [rbp+40h] BYREF
  int *v54; // [rsp+158h] [rbp+50h]
  __int64 v55; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+168h] [rbp+60h] BYREF
  int *v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+188h] [rbp+80h] BYREF
  __int64 *v60; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1B8h] [rbp+B0h] BYREF
  DWORD *v64; // [rsp+1C8h] [rbp+C0h]
  __int64 v65; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+1E8h] [rbp+E0h] BYREF
  int *v68; // [rsp+1F8h] [rbp+F0h]
  __int64 v69; // [rsp+200h] [rbp+F8h]
  WINBOOL *v70; // [rsp+208h] [rbp+100h]
  __int64 v71; // [rsp+210h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+218h] [rbp+110h] BYREF
  int *v73; // [rsp+228h] [rbp+120h]
  __int64 v74; // [rsp+230h] [rbp+128h]
  int v75; // [rsp+270h] [rbp+168h] BYREF

  v75 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v5 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_180599C78;
      v7 = (wil::TraceLoggingProvider *)operator new(v6, &unk_180599C78);
      wil::TraceLoggingProvider::TraceLoggingProvider(v7);
      *v8 = &ImmersiveIconsLogging::`vftable';
      v8[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
    {
      v9 = (const CHAR *)*((_QWORD *)v5 + 6);
      v44 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v45 = 8LL;
      v46 = &v33;
      v29 = v5[1];
      v48 = &v29;
      v33 = 0x1000000LL;
      v47 = 8LL;
      v49 = 4LL;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v5 + 15);
      v51 = v5 + 14;
      v52 = 4LL;
      TlgCreateSz(&v53, v10);
      v11 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v30 = *v5;
      v54 = &v30;
      v55 = 4LL;
      TlgCreateWsz(&v56, v11);
      v12 = (const CHAR *)*((_QWORD *)v5 + 8);
      v31 = v5[6];
      v57 = &v31;
      v58 = 4LL;
      TlgCreateSz(&v59, v12);
      v13 = (const CHAR *)*((_QWORD *)v5 + 10);
      LODWORD(v32) = v5[18];
      v60 = &v32;
      v61 = 4LL;
      TlgCreateSz(&v62, v13);
      TlgCreateWsz(&v63, *((LPCWSTR *)v5 + 11));
      v14 = (const CHAR *)*((_QWORD *)v5 + 13);
      v24 = v5[24];
      v64 = &v24;
      v65 = 4LL;
      TlgCreateSz(&v66, v14);
      TlgCreateWsz(&v67, *((LPCWSTR *)v5 + 14));
      v15 = v5[2];
      v16 = (const CHAR *)*((_QWORD *)v5 + 5);
      v68 = &v25;
      v26[0] = v5[15];
      v25 = v15;
      v70 = v26;
      v69 = 4LL;
      v71 = 4LL;
      TlgCreateSz(&v72, v16);
      v74 = 4LL;
      v73 = &v75;
      TlgWrite(v17, &unk_1804DFA6D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x16u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v26, &Context) && v26[0] )
    {
      Context = &unk_180599C78;
      v19 = (wil::TraceLoggingProvider *)operator new(v18, &unk_180599C78);
      wil::TraceLoggingProvider::TraceLoggingProvider(v19);
      *v20 = &ImmersiveIconsLogging::`vftable';
      v20[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    v21 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v21 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
    {
      v36 = 8LL;
      v35 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v22 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v37 = &v25;
      v25 = v22;
      v38 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v40 = 4LL;
      v24 = CurrentThreadId;
      v42 = 4LL;
      v39 = &v24;
      v41 = &v75;
      TlgWrite(v21, &unk_1804DF9FE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v34);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabletModeTraceLogging::ShowWindowAttempted *)((char *)this + 8));
}

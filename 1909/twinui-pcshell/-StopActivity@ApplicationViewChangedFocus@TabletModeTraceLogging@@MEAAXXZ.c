/*
 * XREFs of ?StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ @ 0x1803D1EE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180082F68 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 */

void __fastcall TabletModeTraceLogging::ApplicationViewChangedFocus::StopActivity(
        TabletModeTraceLogging::ApplicationViewChangedFocus *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  __int64 v5; // rcx
  wil::TraceLoggingProvider *v6; // rax
  _QWORD *v7; // rcx
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  int v14; // ecx
  const CHAR *v15; // rdx
  TraceLoggingHProvider v16; // r10
  __int64 v17; // rcx
  wil::TraceLoggingProvider *v18; // rax
  _QWORD *v19; // rcx
  const struct _TlgProvider_t *v20; // rdi
  int v21; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v25[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v33; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  int *v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  DWORD *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  __int64 *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  int *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+118h] [rbp+10h] BYREF
  int *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+138h] [rbp+30h] BYREF
  int *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+158h] [rbp+50h] BYREF
  int *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1A8h] [rbp+A0h] BYREF
  DWORD *v61; // [rsp+1B8h] [rbp+B0h]
  __int64 v62; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v65; // [rsp+1E8h] [rbp+E0h]
  __int64 v66; // [rsp+1F0h] [rbp+E8h]
  WINBOOL *v67; // [rsp+1F8h] [rbp+F0h]
  __int64 v68; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+208h] [rbp+100h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_1805C2098;
      v6 = (wil::TraceLoggingProvider *)operator new(v5, &unk_1805C2098);
      wil::TraceLoggingProvider::TraceLoggingProvider(v6);
      *v7 = &ImmersiveIconsLogging::`vftable';
      v7[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
    {
      v8 = (const CHAR *)*((_QWORD *)v4 + 6);
      v41 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v42 = 8LL;
      v43 = &v32;
      v28 = v4[1];
      v45 = &v28;
      v32 = 0x1000000LL;
      v44 = 8LL;
      v46 = 4LL;
      TlgCreateSz(&pDesc, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 15);
      v48 = v4 + 14;
      v49 = 4LL;
      TlgCreateSz(&v50, v9);
      v10 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v29 = *v4;
      v51 = &v29;
      v52 = 4LL;
      TlgCreateWsz(&v53, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 8);
      v30 = v4[6];
      v54 = &v30;
      v55 = 4LL;
      TlgCreateSz(&v56, v11);
      v12 = (const CHAR *)*((_QWORD *)v4 + 10);
      LODWORD(v31) = v4[18];
      v57 = &v31;
      v58 = 4LL;
      TlgCreateSz(&v59, v12);
      TlgCreateWsz(&v60, *((LPCWSTR *)v4 + 11));
      v13 = (const CHAR *)*((_QWORD *)v4 + 13);
      v23 = v4[24];
      v61 = &v23;
      v62 = 4LL;
      TlgCreateSz(&v63, v13);
      TlgCreateWsz(&v64, *((LPCWSTR *)v4 + 14));
      v14 = v4[2];
      v15 = (const CHAR *)*((_QWORD *)v4 + 5);
      v65 = &v24;
      v25[0] = v4[15];
      v24 = v14;
      v67 = v25;
      v66 = 4LL;
      v68 = 4LL;
      TlgCreateSz(&v69, v15);
      TlgWrite(v16, &unk_1805067B1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v25, &Context) && v25[0] )
    {
      Context = &unk_1805C2098;
      v18 = (wil::TraceLoggingProvider *)operator new(v17, &unk_1805C2098);
      wil::TraceLoggingProvider::TraceLoggingProvider(v18);
      *v19 = &ImmersiveIconsLogging::`vftable';
      v19[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    v20 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v20 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
    {
      v35 = 8LL;
      v34 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v21 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v36 = &v24;
      v24 = v21;
      v37 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v39 = 4LL;
      v23 = CurrentThreadId;
      v38 = &v23;
      TlgWrite(v20, &unk_180506755, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v33);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabletModeTraceLogging::ApplicationViewChangedFocus *)((char *)this + 8));
}

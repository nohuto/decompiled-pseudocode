/*
 * XREFs of ?StopActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@MEAAXXZ @ 0x180191CF0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801931B8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall FullScreenManagerTelemetry::FSMEnterFullScreenForView::StopActivity(
        FullScreenManagerTelemetry::FSMEnterFullScreenForView *this)
{
  __int64 v1; // rsi
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rcx
  wil::TraceLoggingProvider *v6; // rax
  _QWORD *v7; // rcx
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  TraceLoggingHProvider v14; // r10
  __int64 v15; // rcx
  wil::TraceLoggingProvider *v16; // rax
  _QWORD *v17; // rcx
  const struct _TlgProvider_t *v18; // rdi
  int v19; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v21; // [rsp+38h] [rbp-D0h] BYREF
  int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v23[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v26; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  int *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  DWORD *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  int *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  __int64 v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+148h] [rbp+40h] BYREF
  DWORD *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+168h] [rbp+60h] BYREF
  int *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+198h] [rbp+90h] BYREF
  WINBOOL *v57; // [rsp+1A8h] [rbp+A0h]
  __int64 v58; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1C8h] [rbp+C0h] BYREF

  v1 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 84) )
    v4 = v1 + 80;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
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
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v8 = *(const CHAR **)(v4 + 48);
      v37 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v38 = 8LL;
      v39 = &v28;
      v26 = *(_DWORD *)(v4 + 4);
      v41 = &v26;
      v28 = 0x1000000LL;
      v40 = 8LL;
      v42 = 4LL;
      TlgCreateSz(&pDesc, v8);
      v9 = *(const CHAR **)(v4 + 120);
      v44 = v4 + 56;
      v45 = 4LL;
      TlgCreateSz(&v46, v9);
      v10 = *(const WCHAR **)(v4 + 16);
      LODWORD(v27) = *(_DWORD *)v4;
      v47 = &v27;
      v48 = 4LL;
      TlgCreateWsz(&v49, v10);
      v11 = *(const CHAR **)(v4 + 64);
      v21 = *(_DWORD *)(v4 + 24);
      v50 = &v21;
      v51 = 4LL;
      TlgCreateSz(&v52, v11);
      v12 = *(const CHAR **)(v4 + 80);
      v22 = *(_DWORD *)(v4 + 72);
      v53 = &v22;
      v54 = 4LL;
      TlgCreateSz(&v55, v12);
      TlgCreateWsz(&v56, *(LPCWSTR *)(v4 + 88));
      v13 = *(const CHAR **)(v4 + 104);
      v23[0] = *(_DWORD *)(v4 + 96);
      v57 = v23;
      v58 = 4LL;
      TlgCreateSz(&v59, v13);
      TlgCreateWsz(&v60, *(LPCWSTR *)(v4 + 112));
      TlgWrite(v14, &unk_1804E184E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v23, &Context) && v23[0] )
    {
      Context = &unk_1805C2098;
      v16 = (wil::TraceLoggingProvider *)operator new(v15, &unk_1805C2098);
      wil::TraceLoggingProvider::TraceLoggingProvider(v16);
      *v17 = &ImmersiveIconsLogging::`vftable';
      v17[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    v18 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v18 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v31 = 8LL;
      v30 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v19 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v32 = &v22;
      v22 = v19;
      v33 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v35 = 4LL;
      v21 = CurrentThreadId;
      v34 = &v21;
      TlgWrite(v18, &unk_1804E17F4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v29);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((FullScreenManagerTelemetry::FSMEnterFullScreenForView *)((char *)this + 8));
}

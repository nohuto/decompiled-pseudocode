/*
 * XREFs of ?StopActivity@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@MEAAXXZ @ 0x180337490
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18009B1A4 (-zInternalStop@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ?GetFailureInfo@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAPEBUFailureInfo@2@XZ @ 0x1800AB574 (-GetFailureInfo@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18033AEA4 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::StopActivity(
        TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *this)
{
  __int64 FailureInfo; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  const CHAR *v5; // rdx
  const CHAR *v6; // rdx
  const WCHAR *v7; // rdx
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  DWORD v11; // ecx
  const CHAR *v12; // rdx
  TraceLoggingHProvider v13; // r10
  const struct _TlgProvider_t *v14; // rdi
  int v15; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-A0h] BYREF
  void *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  DWORD *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  void *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  __int64 *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  __int64 v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+120h] [rbp+20h] BYREF
  int *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+140h] [rbp+40h] BYREF
  int *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+160h] [rbp+60h] BYREF
  int *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+190h] [rbp+90h] BYREF
  int *v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1C0h] [rbp+C0h] BYREF
  DWORD *v57; // [rsp+1D0h] [rbp+D0h]
  __int64 v58; // [rsp+1D8h] [rbp+D8h]
  int *v59; // [rsp+1E0h] [rbp+E0h]
  __int64 v60; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1F0h] [rbp+F0h] BYREF

  FailureInfo = wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::GetFailureInfo((__int64)this);
  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v4 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         v3,
         lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( FailureInfo )
  {
    if ( **(_DWORD **)(v4 + 8) > 5u )
    {
      v5 = *(const CHAR **)(FailureInfo + 48);
      v33 = &`TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v34 = 8LL;
      v35 = &v24;
      v19 = *(_DWORD *)(FailureInfo + 4);
      v37 = &v19;
      v24 = 0x1000000LL;
      v36 = 8LL;
      v38 = 4LL;
      TlgCreateSz(&pDesc, v5);
      v6 = *(const CHAR **)(FailureInfo + 120);
      v40 = FailureInfo + 56;
      v41 = 4LL;
      TlgCreateSz(&v42, v6);
      v7 = *(const WCHAR **)(FailureInfo + 16);
      v20 = *(_DWORD *)FailureInfo;
      v43 = &v20;
      v44 = 4LL;
      TlgCreateWsz(&v45, v7);
      v8 = *(const CHAR **)(FailureInfo + 64);
      v21 = *(_DWORD *)(FailureInfo + 24);
      v46 = &v21;
      v47 = 4LL;
      TlgCreateSz(&v48, v8);
      v9 = *(const CHAR **)(FailureInfo + 80);
      v22 = *(_DWORD *)(FailureInfo + 72);
      v49 = &v22;
      v50 = 4LL;
      TlgCreateSz(&v51, v9);
      TlgCreateWsz(&v52, *(LPCWSTR *)(FailureInfo + 88));
      v10 = *(const CHAR **)(FailureInfo + 104);
      v23 = *(_DWORD *)(FailureInfo + 96);
      v53 = &v23;
      v54 = 4LL;
      TlgCreateSz(&v55, v10);
      TlgCreateWsz(&v56, *(LPCWSTR *)(FailureInfo + 112));
      v11 = *(_DWORD *)(FailureInfo + 8);
      v12 = *(const CHAR **)(FailureInfo + 40);
      v57 = &v17;
      v18 = *(_DWORD *)(FailureInfo + 60);
      v17 = v11;
      v59 = &v18;
      v58 = 4LL;
      v60 = 4LL;
      TlgCreateSz(&v61, v12);
      TlgWrite(v13, &unk_1805007DB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    v14 = *(const struct _TlgProvider_t **)(v4 + 8);
    if ( *(_DWORD *)v14 > 5u )
    {
      v27 = 8LL;
      v26 = &`TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v15 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v28 = &v18;
      v18 = v15;
      v29 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v31 = 4LL;
      v17 = CurrentThreadId;
      v30 = &v17;
      TlgWrite(v14, &unk_180500767, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *)((char *)this + 8));
}

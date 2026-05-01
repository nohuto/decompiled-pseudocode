/*
 * XREFs of ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Foundation@Windows@@_N@Z @ 0x180345EA0
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180341AA0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180159A3C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18033AEA4 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *this,
        int a2,
        struct Windows::Foundation::Rect *a3,
        char a4)
{
  int *v4; // rsi
  int v8; // eax
  int *v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  const WCHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const void *v18; // rdx
  const struct _TlgProvider_t *v19; // r10
  const struct _TlgProvider_t *v20; // rcx
  const struct _TlgProvider_t *v21; // rsi
  int v22; // ecx
  DWORD CurrentThreadId; // eax
  UINT32 cData; // [rsp+28h] [rbp-E0h]
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  DWORD v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  int v29; // [rsp+48h] [rbp-C0h] BYREF
  int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  __int64 *v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  DWORD *v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  struct Windows::Foundation::Rect *v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+C8h] [rbp-40h] BYREF
  char *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+E8h] [rbp-20h] BYREF
  int *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+108h] [rbp+0h] BYREF
  DWORD *v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+138h] [rbp+30h] BYREF
  int *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+168h] [rbp+60h] BYREF
  int *v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  struct Windows::Foundation::Rect *v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  char *v61; // [rsp+198h] [rbp+90h]
  __int64 v62; // [rsp+1A0h] [rbp+98h]
  char *v63; // [rsp+1A8h] [rbp+A0h]
  __int64 v64; // [rsp+1B0h] [rbp+A8h]
  char *v65; // [rsp+1B8h] [rbp+B0h]
  __int64 v66; // [rsp+1C0h] [rbp+B8h]
  int *v67; // [rsp+1C8h] [rbp+C0h]
  __int64 v68; // [rsp+1D0h] [rbp+C8h]
  int v69; // [rsp+220h] [rbp+118h] BYREF

  v69 = a2;
  v4 = (int *)*((_QWORD *)this + 6);
  v8 = v4[19];
  if ( v8 < 0 && v8 == v4[21] )
    v9 = v4 + 20;
  else
    v9 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v11 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          v10,
          (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( v9 )
  {
    if ( *(_DWORD *)v11[1] <= 5u || !TlgKeywordOn((TraceLoggingHProvider)v11[1], 0x400000000000uLL) )
      goto LABEL_13;
    v12 = (const CHAR *)*((_QWORD *)v9 + 6);
    v33 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v34 = 8LL;
    v35 = &v31;
    v28 = v9[1];
    v37 = (DWORD *)&v28;
    v31 = 0x1000000LL;
    v36 = 8LL;
    v38 = 4LL;
    TlgCreateSz(&pDesc, v12);
    v13 = (const CHAR *)*((_QWORD *)v9 + 15);
    v40 = (struct Windows::Foundation::Rect *)(v9 + 14);
    v41 = 4LL;
    TlgCreateSz(&v42, v13);
    v14 = (const WCHAR *)*((_QWORD *)v9 + 2);
    v29 = *v9;
    v43 = (char *)&v29;
    v44 = 4LL;
    TlgCreateWsz(&v45, v14);
    v15 = (const CHAR *)*((_QWORD *)v9 + 8);
    v30 = v9[6];
    v46 = &v30;
    v47 = 4LL;
    TlgCreateSz(&v48, v15);
    v16 = (const CHAR *)*((_QWORD *)v9 + 10);
    v26 = v9[18];
    v49 = &v26;
    v50 = 4LL;
    TlgCreateSz(&v51, v16);
    TlgCreateWsz(&v52, *((LPCWSTR *)v9 + 11));
    v17 = (const CHAR *)*((_QWORD *)v9 + 13);
    v27 = v9[24];
    v53 = &v27;
    v54 = 4LL;
    TlgCreateSz(&v55, v17);
    TlgCreateWsz(&v56, *((LPCWSTR *)v9 + 14));
    v58 = 4LL;
    v61 = (char *)a3 + 4;
    v57 = &v69;
    v63 = (char *)a3 + 8;
    v18 = &unk_18050337D;
    v59 = a3;
    v65 = (char *)a3 + 12;
    v20 = v19;
    v60 = 4LL;
    v67 = &v25;
    cData = 24;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 1LL;
  }
  else
  {
    v21 = (const struct _TlgProvider_t *)v11[1];
    if ( *(_DWORD *)v21 <= 5u || !TlgKeywordOn((TraceLoggingHProvider)v11[1], 0x400000000000uLL) )
      goto LABEL_13;
    v34 = 8LL;
    v33 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v22 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
    v35 = (__int64 *)&v27;
    v27 = v22;
    v36 = 4LL;
    CurrentThreadId = GetCurrentThreadId();
    v38 = 4LL;
    v18 = &unk_18050354C;
    v26 = CurrentThreadId;
    v20 = v21;
    *(_QWORD *)&pDesc.Size = 4LL;
    v37 = &v26;
    pDesc.Ptr = (ULONGLONG)&v69;
    v42.Ptr = (ULONGLONG)a3 + 4;
    v43 = (char *)a3 + 8;
    v45.Ptr = (ULONGLONG)a3 + 12;
    v46 = &v25;
    cData = 11;
    v40 = a3;
    v41 = 4LL;
    *(_QWORD *)&v42.Size = 4LL;
    v44 = 4LL;
    *(_QWORD *)&v45.Size = 4LL;
    v47 = 1LL;
  }
  LOBYTE(v25) = a4;
  TlgWrite(v20, v18, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, cData, &pData);
LABEL_13:
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)((char *)this + 8));
}

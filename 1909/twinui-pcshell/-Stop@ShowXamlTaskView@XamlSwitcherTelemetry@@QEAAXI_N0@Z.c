/*
 * XREFs of ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x1802EE250
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1802EF070 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x1802EF7D0 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180159A3C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802D262C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
        XamlSwitcherTelemetry::ShowXamlTaskView *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
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
  TraceLoggingHProvider v18; // r10
  const struct _TlgProvider_t *v19; // rsi
  int v20; // ecx
  DWORD CurrentThreadId; // eax
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  DWORD v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  int *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  DWORD *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  int *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  int *v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  int *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  __int64 *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  int *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+138h] [rbp+30h] BYREF
  int *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+158h] [rbp+50h] BYREF
  int *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+198h] [rbp+90h] BYREF
  int *v60; // [rsp+1A8h] [rbp+A0h]
  __int64 v61; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v64; // [rsp+1D8h] [rbp+D0h]
  __int64 v65; // [rsp+1E0h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1E8h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+1F8h] [rbp+F0h] BYREF
  int *v68; // [rsp+208h] [rbp+100h]
  __int64 v69; // [rsp+210h] [rbp+108h]
  DWORD *v70; // [rsp+218h] [rbp+110h]
  __int64 v71; // [rsp+220h] [rbp+118h]
  int *v72; // [rsp+228h] [rbp+120h]
  __int64 v73; // [rsp+230h] [rbp+128h]
  int v74; // [rsp+280h] [rbp+178h] BYREF

  v74 = a2;
  v4 = (int *)*((_QWORD *)this + 6);
  v8 = v4[19];
  if ( v8 < 0 && v8 == v4[21] )
    v9 = v4 + 20;
  else
    v9 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v11 = wil::details::static_lazy<XamlSwitcherLogging>::get(
          v10,
          (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  if ( v9 )
  {
    if ( *(_DWORD *)v11[1] > 5u && TlgKeywordOn((TraceLoggingHProvider)v11[1], 0x400000000000uLL) )
    {
      v12 = (const CHAR *)*((_QWORD *)v9 + 6);
      v44 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v45 = 8LL;
      v46 = &v29;
      v26 = v9[1];
      v48 = &v26;
      v29 = 0x1000000LL;
      v47 = 8LL;
      v49 = 4LL;
      TlgCreateSz(&pDesc, v12);
      v13 = (const CHAR *)*((_QWORD *)v9 + 15);
      v51 = v9 + 14;
      v52 = 4LL;
      TlgCreateSz(&v53, v13);
      v14 = (const WCHAR *)*((_QWORD *)v9 + 2);
      v27 = *v9;
      v54 = &v27;
      v55 = 4LL;
      TlgCreateWsz(&v56, v14);
      v15 = (const CHAR *)*((_QWORD *)v9 + 8);
      LODWORD(v28) = v9[6];
      v57 = &v28;
      v58 = 4LL;
      TlgCreateSz(&v59, v15);
      v16 = (const CHAR *)*((_QWORD *)v9 + 10);
      v22 = v9[18];
      v60 = &v22;
      v61 = 4LL;
      TlgCreateSz(&v62, v16);
      TlgCreateWsz(&v63, *((LPCWSTR *)v9 + 11));
      v17 = (const CHAR *)*((_QWORD *)v9 + 13);
      v23 = v9[24];
      v64 = &v23;
      v65 = 4LL;
      TlgCreateSz(&v66, v17);
      TlgCreateWsz(&v67, *((LPCWSTR *)v9 + 14));
      v24 = a3;
      v68 = &v74;
      v70 = &v24;
      v25 = a4;
      v72 = &v25;
      v69 = 4LL;
      v71 = 4LL;
      v73 = 4LL;
      TlgWrite(v18, &unk_1804FC2EA, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    v19 = (const struct _TlgProvider_t *)v11[1];
    if ( *(_DWORD *)v19 > 5u && TlgKeywordOn((TraceLoggingHProvider)v11[1], 0x400000000000uLL) )
    {
      v32 = 8LL;
      v31 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v20 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v33 = &v25;
      v25 = v20;
      v34 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v36 = 4LL;
      v24 = CurrentThreadId;
      v38 = 4LL;
      v35 = &v24;
      v37 = &v74;
      v23 = a3;
      v39 = &v23;
      v22 = a4;
      v41 = &v22;
      v40 = 4LL;
      v42 = 4LL;
      TlgWrite(v19, &unk_1804FC26B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &v30);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((XamlSwitcherTelemetry::ShowXamlTaskView *)((char *)this + 8));
}

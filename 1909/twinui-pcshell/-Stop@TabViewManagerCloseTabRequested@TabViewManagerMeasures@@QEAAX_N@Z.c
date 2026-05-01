/*
 * XREFs of ?Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z @ 0x180258D10
 * Callers:
 *     _lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::operator() @ 0x18024AD7C (_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_--operator().c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1802525A0 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180159A3C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::Stop(
        TabViewManagerMeasures::TabViewManagerCloseTabRequested *this,
        char a2)
{
  int *v2; // rsi
  int v4; // eax
  int *v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  TraceLoggingHProvider v14; // r10
  const struct _TlgProvider_t *v15; // rsi
  int v16; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  int *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  DWORD *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  char *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  int *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+128h] [rbp+20h] BYREF
  int *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+148h] [rbp+40h] BYREF
  __int64 *v47; // [rsp+158h] [rbp+50h]
  __int64 v48; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+168h] [rbp+60h] BYREF
  DWORD *v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+198h] [rbp+90h] BYREF
  int *v54; // [rsp+1A8h] [rbp+A0h]
  __int64 v55; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1C8h] [rbp+C0h] BYREF
  char *v58; // [rsp+1D8h] [rbp+D0h]
  __int64 v59; // [rsp+1E0h] [rbp+D8h]
  char v60; // [rsp+220h] [rbp+118h] BYREF

  v60 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v7 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v6,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( v5 )
  {
    if ( *(_DWORD *)v7[1] > 4u && TlgKeywordOn((TraceLoggingHProvider)v7[1], 0x400000000000uLL) )
    {
      v8 = (const CHAR *)*((_QWORD *)v5 + 6);
      v34 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v35 = 8LL;
      v36 = &v23;
      v20 = v5[1];
      v38 = &v20;
      v23 = 0x1000000LL;
      v37 = 8LL;
      v39 = 4LL;
      TlgCreateSz(&pDesc, v8);
      v9 = (const CHAR *)*((_QWORD *)v5 + 15);
      v41 = v5 + 14;
      v42 = 4LL;
      TlgCreateSz(&v43, v9);
      v10 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v21 = *v5;
      v44 = &v21;
      v45 = 4LL;
      TlgCreateWsz(&v46, v10);
      v11 = (const CHAR *)*((_QWORD *)v5 + 8);
      LODWORD(v22) = v5[6];
      v47 = &v22;
      v48 = 4LL;
      TlgCreateSz(&v49, v11);
      v12 = (const CHAR *)*((_QWORD *)v5 + 10);
      v18 = v5[18];
      v50 = &v18;
      v51 = 4LL;
      TlgCreateSz(&v52, v12);
      TlgCreateWsz(&v53, *((LPCWSTR *)v5 + 11));
      v13 = (const CHAR *)*((_QWORD *)v5 + 13);
      v19 = v5[24];
      v54 = &v19;
      v55 = 4LL;
      TlgCreateSz(&v56, v13);
      TlgCreateWsz(&v57, *((LPCWSTR *)v5 + 14));
      v59 = 1LL;
      v58 = &v60;
      TlgWrite(v14, &unk_1804F2512, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v15 = (const struct _TlgProvider_t *)v7[1];
    if ( *(_DWORD *)v15 > 4u && TlgKeywordOn((TraceLoggingHProvider)v7[1], 0x400000000000uLL) )
    {
      v26 = 8LL;
      v25 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v16 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v27 = &v19;
      v19 = v16;
      v28 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v30 = 4LL;
      v18 = CurrentThreadId;
      v32 = 1LL;
      v29 = &v18;
      v31 = &v60;
      TlgWrite(v15, &unk_1804F2666, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v24);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerMeasures::TabViewManagerCloseTabRequested *)((char *)this + 8));
}

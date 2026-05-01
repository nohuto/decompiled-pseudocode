/*
 * XREFs of ?Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x180258FDC
 * Callers:
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x18024FE00 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180159A3C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024FC5C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::Stop(
        TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        char a3)
{
  int *v3; // rsi
  int v6; // eax
  int *v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // r14
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const WCHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  DWORD v17; // ecx
  const CHAR *v18; // rdx
  struct _GUID v19; // xmm0
  const void *v20; // rdx
  const struct _TlgProvider_t *v21; // rcx
  const struct _TlgProvider_t *v22; // rsi
  int v23; // ecx
  DWORD CurrentThreadId; // eax
  struct _GUID *ShellTabGroupId; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  DWORD v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v36; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v37; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  int *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  DWORD *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  struct _GUID *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  char *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  char v49; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  __int64 *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  int *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  int *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+160h] [rbp+60h] BYREF
  int *v60; // [rsp+170h] [rbp+70h]
  __int64 v61; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+180h] [rbp+80h] BYREF
  int *v63; // [rsp+190h] [rbp+90h]
  __int64 v64; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v66; // [rsp+1B0h] [rbp+B0h]
  __int64 v67; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v70; // [rsp+1E0h] [rbp+E0h]
  __int64 v71; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+200h] [rbp+100h] BYREF
  DWORD *v74; // [rsp+210h] [rbp+110h]
  __int64 v75; // [rsp+218h] [rbp+118h]
  int *v76; // [rsp+220h] [rbp+120h]
  __int64 v77; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+230h] [rbp+130h] BYREF
  struct _GUID *v79; // [rsp+240h] [rbp+140h]
  __int64 v80; // [rsp+248h] [rbp+148h]
  char *v81; // [rsp+250h] [rbp+150h]
  __int64 v82; // [rsp+258h] [rbp+158h]
  char v83; // [rsp+2C0h] [rbp+1C0h] BYREF

  v83 = a3;
  v3 = (int *)*((_QWORD *)this + 6);
  v6 = v3[19];
  if ( v6 < 0 && v6 == v3[21] )
    v7 = v3 + 20;
  else
    v7 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v8,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( v7 )
  {
    v10 = (const struct _TlgProvider_t *)v9[1];
    if ( *(_DWORD *)v10 <= 4u )
      goto LABEL_11;
    v11 = (const CHAR *)*((_QWORD *)v7 + 6);
    v50 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v51 = 8LL;
    v52 = &v35;
    v30 = v7[1];
    v54 = &v30;
    v35 = 0x1000000LL;
    v53 = 8LL;
    v55 = 4LL;
    TlgCreateSz(&pDesc, v11);
    v12 = (const CHAR *)*((_QWORD *)v7 + 15);
    v57 = v7 + 14;
    v58 = 4LL;
    TlgCreateSz(&v59, v12);
    v13 = (const WCHAR *)*((_QWORD *)v7 + 2);
    v31 = *v7;
    v60 = &v31;
    v61 = 4LL;
    TlgCreateWsz(&v62, v13);
    v14 = (const CHAR *)*((_QWORD *)v7 + 8);
    v32 = v7[6];
    v63 = &v32;
    v64 = 4LL;
    TlgCreateSz(&v65, v14);
    v15 = (const CHAR *)*((_QWORD *)v7 + 10);
    v33 = v7[18];
    v66 = &v33;
    v67 = 4LL;
    TlgCreateSz(&v68, v15);
    TlgCreateWsz(&v69, *((LPCWSTR *)v7 + 11));
    v16 = (const CHAR *)*((_QWORD *)v7 + 13);
    v34 = v7[24];
    v70 = &v34;
    v71 = 4LL;
    TlgCreateSz(&v72, v16);
    TlgCreateWsz(&v73, *((LPCWSTR *)v7 + 14));
    v17 = v7[2];
    v18 = (const CHAR *)*((_QWORD *)v7 + 5);
    v74 = &v28;
    v29 = v7[15];
    v28 = v17;
    v76 = &v29;
    v75 = 4LL;
    v77 = 4LL;
    TlgCreateSz(&v78, v18);
    v19 = *TabShellTelemetryBase::GetShellTabGroupId(&v36, a2);
    v80 = 16LL;
    v79 = &v37;
    v81 = &v83;
    v82 = 1LL;
    pData = (EVENT_DATA_DESCRIPTOR *)&v49;
    v20 = &unk_1804F3828;
    cData = 23;
    v21 = v10;
  }
  else
  {
    v22 = (const struct _TlgProvider_t *)v9[1];
    if ( *(_DWORD *)v22 <= 4u )
      goto LABEL_11;
    v40 = 8LL;
    v39 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v23 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
    v41 = &v29;
    v29 = v23;
    v42 = 4LL;
    CurrentThreadId = GetCurrentThreadId();
    v44 = 4LL;
    v28 = CurrentThreadId;
    v43 = &v28;
    ShellTabGroupId = TabShellTelemetryBase::GetShellTabGroupId(&v36, a2);
    v20 = &unk_1804F37AB;
    v21 = v22;
    v19 = *ShellTabGroupId;
    v46 = 16LL;
    v45 = &v37;
    v47 = &v83;
    pData = &v38;
    cData = 7;
    v48 = 1LL;
  }
  v37 = v19;
  TlgWrite(v21, v20, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, cData, pData);
LABEL_11:
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *)((char *)this + 8));
}

/*
 * XREFs of ?Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180239D20
 * Callers:
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x18024130C (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18013A4BC (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802306AC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup::Stop(
        TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  int *v2; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  const struct _TlgProvider_t *v9; // r14
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  DWORD v16; // ecx
  const CHAR *v17; // rdx
  struct _GUID v18; // xmm0
  const void *v19; // rdx
  const struct _TlgProvider_t *v20; // rcx
  const struct _TlgProvider_t *v21; // rdi
  int v22; // ecx
  DWORD CurrentThreadId; // eax
  struct _GUID *ShellTabGroupId; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  DWORD v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v35; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v36; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  int *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  DWORD *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  struct _GUID *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  char v46; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  __int64 *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  int *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  int *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+150h] [rbp+50h] BYREF
  int *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+170h] [rbp+70h] BYREF
  int *v60; // [rsp+180h] [rbp+80h]
  __int64 v61; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+190h] [rbp+90h] BYREF
  int *v63; // [rsp+1A0h] [rbp+A0h]
  __int64 v64; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v67; // [rsp+1D0h] [rbp+D0h]
  __int64 v68; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1F0h] [rbp+F0h] BYREF
  DWORD *v71; // [rsp+200h] [rbp+100h]
  __int64 v72; // [rsp+208h] [rbp+108h]
  int *v73; // [rsp+210h] [rbp+110h]
  __int64 v74; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+220h] [rbp+120h] BYREF
  struct _GUID *v76; // [rsp+230h] [rbp+130h]
  __int64 v77; // [rsp+238h] [rbp+138h]

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v7,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( v6 )
  {
    v9 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v9 <= 5u )
      goto LABEL_11;
    v10 = (const CHAR *)*((_QWORD *)v6 + 6);
    v47 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v48 = 8LL;
    v49 = &v34;
    v29 = v6[1];
    v51 = &v29;
    v34 = 0x1000000LL;
    v50 = 8LL;
    v52 = 4LL;
    TlgCreateSz(&pDesc, v10);
    v11 = (const CHAR *)*((_QWORD *)v6 + 15);
    v54 = v6 + 14;
    v55 = 4LL;
    TlgCreateSz(&v56, v11);
    v12 = (const WCHAR *)*((_QWORD *)v6 + 2);
    v30 = *v6;
    v57 = &v30;
    v58 = 4LL;
    TlgCreateWsz(&v59, v12);
    v13 = (const CHAR *)*((_QWORD *)v6 + 8);
    v31 = v6[6];
    v60 = &v31;
    v61 = 4LL;
    TlgCreateSz(&v62, v13);
    v14 = (const CHAR *)*((_QWORD *)v6 + 10);
    v32 = v6[18];
    v63 = &v32;
    v64 = 4LL;
    TlgCreateSz(&v65, v14);
    TlgCreateWsz(&v66, *((LPCWSTR *)v6 + 11));
    v15 = (const CHAR *)*((_QWORD *)v6 + 13);
    v33 = v6[24];
    v67 = &v33;
    v68 = 4LL;
    TlgCreateSz(&v69, v15);
    TlgCreateWsz(&v70, *((LPCWSTR *)v6 + 14));
    v16 = v6[2];
    v17 = (const CHAR *)*((_QWORD *)v6 + 5);
    v71 = &v27;
    v28 = v6[15];
    v27 = v16;
    v73 = &v28;
    v72 = 4LL;
    v74 = 4LL;
    TlgCreateSz(&v75, v17);
    v18 = *TabShellTelemetryBase::GetShellTabGroupId(&v35, a2);
    v77 = 16LL;
    v76 = &v36;
    pData = (EVENT_DATA_DESCRIPTOR *)&v46;
    cData = 22;
    v19 = &unk_1804CC97D;
    v20 = v9;
  }
  else
  {
    v21 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v21 <= 5u )
      goto LABEL_11;
    v39 = 8LL;
    v38 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v22 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
    v40 = &v28;
    v28 = v22;
    v41 = 4LL;
    CurrentThreadId = GetCurrentThreadId();
    v43 = 4LL;
    v27 = CurrentThreadId;
    v42 = &v27;
    ShellTabGroupId = TabShellTelemetryBase::GetShellTabGroupId(&v35, a2);
    v19 = &unk_1804CCAEF;
    v20 = v21;
    v18 = *ShellTabGroupId;
    v45 = 16LL;
    v44 = &v36;
    pData = &v37;
    cData = 6;
  }
  v36 = v18;
  TlgWrite(v20, v19, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, cData, pData);
LABEL_11:
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *)((char *)this + 8));
}

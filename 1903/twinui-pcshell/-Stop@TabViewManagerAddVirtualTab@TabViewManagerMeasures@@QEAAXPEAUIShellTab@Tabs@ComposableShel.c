/*
 * XREFs of ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180239384
 * Callers:
 *     _lambda_37f9ef9030aa536b557a78acc06105da_::operator() @ 0x18022AE50 (_lambda_37f9ef9030aa536b557a78acc06105da_--operator().c)
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18022C340 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18013A4BC (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     LoggingUtil::GetGroupIdFromTab @ 0x18022FD50 (LoggingUtil--GetGroupIdFromTab.c)
 *     LoggingUtil::GetGroupSizeFromTab @ 0x18022FDAC (LoggingUtil--GetGroupSizeFromTab.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802306AC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerAddVirtualTab::Stop(
        TabViewManagerMeasures::TabViewManagerAddVirtualTab *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  int *v2; // rsi
  int v5; // eax
  int *v6; // rsi
  __int64 v7; // rcx
  LPVOID v8; // rax
  const struct _TlgProvider_t *v9; // r14
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  GUID v16; // xmm0
  GUID v17; // xmm0
  const struct _TlgProvider_t *v18; // rsi
  int v19; // ecx
  DWORD CurrentThreadId; // eax
  GUID v21; // xmm0
  GUID v22; // xmm0
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v24; // [rsp+34h] [rbp-CCh] BYREF
  int GroupSizeFromTab; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v30; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v31; // [rsp+60h] [rbp-A0h] BYREF
  GUID v32; // [rsp+70h] [rbp-90h] BYREF
  GUID v33; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR v34; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  int *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  DWORD *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  GUID *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  GUID *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  int *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  __int64 *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  int *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  int *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+180h] [rbp+80h] BYREF
  int *v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v64; // [rsp+1D0h] [rbp+D0h]
  __int64 v65; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+1F0h] [rbp+F0h] BYREF
  DWORD *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+220h] [rbp+120h] BYREF
  GUID *v72; // [rsp+230h] [rbp+130h]
  __int64 v73; // [rsp+238h] [rbp+138h]
  GUID *v74; // [rsp+240h] [rbp+140h]
  __int64 v75; // [rsp+248h] [rbp+148h]
  int *p_GroupSizeFromTab; // [rsp+250h] [rbp+150h]
  __int64 v77; // [rsp+258h] [rbp+158h]

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
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
    if ( *(_DWORD *)v9 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v8 + 1), 0x400000000000uLL) )
    {
      v10 = (const CHAR *)*((_QWORD *)v6 + 6);
      v48 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v49 = 8LL;
      v50 = &v29;
      v26 = v6[1];
      v52 = &v26;
      v29 = 0x1000000LL;
      v51 = 8LL;
      v53 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v6 + 15);
      v55 = v6 + 14;
      v56 = 4LL;
      TlgCreateSz(&v57, v11);
      v12 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v27 = *v6;
      v58 = &v27;
      v59 = 4LL;
      TlgCreateWsz(&v60, v12);
      v13 = (const CHAR *)*((_QWORD *)v6 + 8);
      v28 = v6[6];
      v61 = &v28;
      v62 = 4LL;
      TlgCreateSz(&v63, v13);
      v14 = (const CHAR *)*((_QWORD *)v6 + 10);
      v23 = v6[18];
      v64 = &v23;
      v65 = 4LL;
      TlgCreateSz(&v66, v14);
      TlgCreateWsz(&v67, *((LPCWSTR *)v6 + 11));
      v15 = (const CHAR *)*((_QWORD *)v6 + 13);
      v24 = v6[24];
      v68 = &v24;
      v69 = 4LL;
      TlgCreateSz(&v70, v15);
      TlgCreateWsz(&v71, *((LPCWSTR *)v6 + 14));
      v16 = *TabShellTelemetryBase::GetShellTabGroupId(&v30, a2);
      v73 = 16LL;
      v72 = &v32;
      v32 = v16;
      v17 = *LoggingUtil::GetGroupIdFromTab(&v31, (__int64)a2);
      v75 = 16LL;
      v74 = &v33;
      v33 = v17;
      GroupSizeFromTab = LoggingUtil::GetGroupSizeFromTab((__int64)a2);
      p_GroupSizeFromTab = &GroupSizeFromTab;
      v77 = 4LL;
      TlgWrite(v9, &unk_1804CB6AF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    v18 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
    if ( *(_DWORD *)v18 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v8 + 1), 0x400000000000uLL) )
    {
      v36 = 8LL;
      v35 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v19 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v37 = &GroupSizeFromTab;
      GroupSizeFromTab = v19;
      v38 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v40 = 4LL;
      v24 = CurrentThreadId;
      v39 = &v24;
      v21 = *TabShellTelemetryBase::GetShellTabGroupId(&v31, a2);
      v42 = 16LL;
      v41 = &v33;
      v33 = v21;
      v22 = *LoggingUtil::GetGroupIdFromTab(&v30, (__int64)a2);
      v44 = 16LL;
      v43 = &v32;
      v32 = v22;
      v23 = LoggingUtil::GetGroupSizeFromTab((__int64)a2);
      v46 = 4LL;
      v45 = &v23;
      TlgWrite(v18, &unk_1804CB7FD, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &v34);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerMeasures::TabViewManagerAddVirtualTab *)((char *)this + 8));
}

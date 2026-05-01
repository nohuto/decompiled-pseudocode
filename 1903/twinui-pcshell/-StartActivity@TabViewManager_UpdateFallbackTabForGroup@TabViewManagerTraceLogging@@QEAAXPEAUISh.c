/*
 * XREFs of ?StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x180238FD8
 * Callers:
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x18024130C (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802306AC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1802309A0 (LoggingUtil--GetTabGroupSize.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180243620 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  __int128 v8; // xmm0
  int TabGroupSize; // eax
  __int128 v10; // xmm0
  const GUID *v11; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-99h] BYREF
  int v13; // [rsp+34h] [rbp-95h] BYREF
  struct _GUID v14; // [rsp+38h] [rbp-91h] BYREF
  struct _GUID v15; // [rsp+48h] [rbp-81h] BYREF
  __int128 v16; // [rsp+58h] [rbp-71h] BYREF
  __int128 v17; // [rsp+68h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+A0h] [rbp-29h]
  int v20; // [rsp+A8h] [rbp-21h]
  int v21; // [rsp+ACh] [rbp-1Dh]
  DWORD *p_CurrentThreadId; // [rsp+B0h] [rbp-19h]
  int v23; // [rsp+B8h] [rbp-11h]
  int v24; // [rsp+BCh] [rbp-Dh]
  __int128 *v25; // [rsp+C0h] [rbp-9h]
  int v26; // [rsp+C8h] [rbp-1h]
  int v27; // [rsp+CCh] [rbp+3h]
  int *v28; // [rsp+D0h] [rbp+7h]
  int v29; // [rsp+D8h] [rbp+Fh]
  int v30; // [rsp+DCh] [rbp+13h]
  __int128 *v31; // [rsp+E0h] [rbp+17h]
  int v32; // [rsp+E8h] [rbp+1Fh]
  int v33; // [rsp+ECh] [rbp+23h]

  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                                    v6,
                                                    (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v21 = 0;
    v19 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v20 = 8;
    v24 = 0;
    CurrentThreadId = GetCurrentThreadId();
    v23 = 4;
    p_CurrentThreadId = &CurrentThreadId;
    v8 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v14, a2);
    v27 = 0;
    v25 = &v16;
    v16 = v8;
    v26 = 16;
    TabGroupSize = LoggingUtil::GetTabGroupSize((__int64 *)a2);
    v30 = 0;
    v13 = TabGroupSize;
    v29 = 4;
    v28 = &v13;
    v10 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v15, a3);
    v33 = 0;
    v31 = &v17;
    v17 = v10;
    v32 = 16;
    v11 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_1804CCB67, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v11, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *)((char *)this + 8));
}

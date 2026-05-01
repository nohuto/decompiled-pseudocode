/*
 * XREFs of ?TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x1801ECBBC
 * Callers:
 *     ??$TabViewManager_RemovingViewFromTabGroup@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x1801D151C (--$TabViewManager_RemovingViewFromTabGroup@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@Comp.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18010A750 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DD0F0 (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1801DD3C0 (LoggingUtil--GetTabGroupSize.c)
 *     LoggingUtil::GetViewIdFromView @ 0x1801DDB80 (LoggingUtil--GetViewIdFromView.c)
 *     LoggingUtil::GetViewType @ 0x1801DDBE8 (LoggingUtil--GetViewType.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManagerTraceLogging::TabViewManager_RemovingViewFromTabGroup_(
        TabViewManagerTraceLogging *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a3,
        int a4)
{
  const struct _TlgProvider_t *v6; // rbx
  LPCWSTR *AppNameFromView; // rax
  int ViewType; // [rsp+38h] [rbp-89h] BYREF
  int ViewIdFromView; // [rsp+3Ch] [rbp-85h] BYREF
  int TabGroupSize; // [rsp+40h] [rbp-81h] BYREF
  LPVOID pv[2]; // [rsp+48h] [rbp-79h] BYREF
  struct _GUID v12; // [rsp+58h] [rbp-69h] BYREF
  __int128 v13; // [rsp+68h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-49h] BYREF
  int *p_ViewType; // [rsp+98h] [rbp-29h]
  int v16; // [rsp+A0h] [rbp-21h]
  int v17; // [rsp+A4h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-19h] BYREF
  int *p_ViewIdFromView; // [rsp+B8h] [rbp-9h]
  int v20; // [rsp+C0h] [rbp-1h]
  int v21; // [rsp+C4h] [rbp+3h]
  __int128 *v22; // [rsp+C8h] [rbp+7h]
  int v23; // [rsp+D0h] [rbp+Fh]
  int v24; // [rsp+D4h] [rbp+13h]
  int *p_TabGroupSize; // [rsp+D8h] [rbp+17h]
  int v26; // [rsp+E0h] [rbp+1Fh]
  int v27; // [rsp+E4h] [rbp+23h]
  int *v28; // [rsp+E8h] [rbp+27h]
  int v29; // [rsp+F0h] [rbp+2Fh]
  int v30; // [rsp+F4h] [rbp+33h]
  int v31; // [rsp+140h] [rbp+7Fh] BYREF

  v31 = a4;
  pv[1] = (LPVOID)-2LL;
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 4u )
  {
    ViewType = LoggingUtil::GetViewType((void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    p_ViewType = &ViewType;
    v16 = 4;
    v17 = 0;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(pv, (__int64)a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    ViewIdFromView = LoggingUtil::GetViewIdFromView((__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2);
    p_ViewIdFromView = &ViewIdFromView;
    v20 = 4;
    v21 = 0;
    v13 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v12, a3);
    v22 = &v13;
    v23 = 16;
    v24 = 0;
    TabGroupSize = LoggingUtil::GetTabGroupSize((__int64)a3);
    p_TabGroupSize = &TabGroupSize;
    v26 = 4;
    v27 = 0;
    v28 = &v31;
    v29 = 4;
    v30 = 0;
    TlgWrite(v6, &unk_180458E07, 0LL, 0LL, 8u, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
}

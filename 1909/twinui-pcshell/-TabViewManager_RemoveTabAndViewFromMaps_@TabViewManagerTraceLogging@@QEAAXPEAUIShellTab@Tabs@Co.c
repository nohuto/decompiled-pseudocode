/*
 * XREFs of ?TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18025E324
 * Callers:
 *     ??$TabViewManager_RemoveTabAndViewFromMaps@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIApplicationView@@@TabViewManagerTraceLogging@@SAXAEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIApplicationView@@@Z @ 0x1802468A4 (--$TabViewManager_RemoveTabAndViewFromMaps@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18014FF7C (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024FC5C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetViewIdFromView @ 0x180250738 (LoggingUtil--GetViewIdFromView.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManagerTraceLogging::TabViewManager_RemoveTabAndViewFromMaps_(
        TabViewManagerTraceLogging *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        struct IApplicationView *a3)
{
  const struct _TlgProvider_t *v5; // rbx
  LPCWSTR *AppNameFromView; // rax
  int ViewIdFromView; // [rsp+38h] [rbp-59h] BYREF
  LPVOID pv[2]; // [rsp+40h] [rbp-51h] BYREF
  struct _GUID v9; // [rsp+50h] [rbp-41h] BYREF
  __int128 v10; // [rsp+60h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  __int128 *v12; // [rsp+98h] [rbp+7h]
  int v13; // [rsp+A0h] [rbp+Fh]
  int v14; // [rsp+A4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp+17h] BYREF
  int *p_ViewIdFromView; // [rsp+B8h] [rbp+27h]
  int v17; // [rsp+C0h] [rbp+2Fh]
  int v18; // [rsp+C4h] [rbp+33h]

  pv[1] = (LPVOID)-2LL;
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u )
  {
    v10 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v9, a2);
    v12 = &v10;
    v13 = 16;
    v14 = 0;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(
                                   (HWND)pv,
                                   (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a3);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    ViewIdFromView = LoggingUtil::GetViewIdFromView((__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a3);
    p_ViewIdFromView = &ViewIdFromView;
    v17 = 4;
    v18 = 0;
    TlgWrite(v5, &unk_1804F469D, 0LL, 0LL, 5u, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
}

/*
 * XREFs of ?TabViewManagerCloseViewForTab_@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x18023E10C
 * Callers:
 *     ??$TabViewManagerCloseViewForTab@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@TabViewManagerMeasures@@SAXAEAPEAUIApplicationView@@$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@3456@@Z @ 0x180226D44 (--$TabViewManagerCloseViewForTab@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShel.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180130A2C (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802306AC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetViewType @ 0x1802311F0 (LoggingUtil--GetViewType.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManagerMeasures::TabViewManagerCloseViewForTab_(
        TabViewManagerMeasures *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a4)
{
  LPVOID v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  LPCWSTR *AppNameFromView; // rax
  int ViewType; // [rsp+30h] [rbp-99h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-91h] BYREF
  struct _GUID v12; // [rsp+48h] [rbp-81h] BYREF
  struct _GUID v13; // [rsp+58h] [rbp-71h] BYREF
  __int128 v14; // [rsp+68h] [rbp-61h] BYREF
  __int128 v15; // [rsp+78h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-19h] BYREF
  int *p_ViewType; // [rsp+C0h] [rbp-9h]
  int v19; // [rsp+C8h] [rbp-1h]
  int v20; // [rsp+CCh] [rbp+3h]
  __int128 *v21; // [rsp+D0h] [rbp+7h]
  int v22; // [rsp+D8h] [rbp+Fh]
  int v23; // [rsp+DCh] [rbp+13h]
  __int128 *v24; // [rsp+E0h] [rbp+17h]
  int v25; // [rsp+E8h] [rbp+1Fh]
  int v26; // [rsp+ECh] [rbp+23h]

  pv[1] = (LPVOID)-2LL;
  v7 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)v7 + 1);
  if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v7 + 1), 0x400000000000uLL) )
  {
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(
                                   (HWND)pv,
                                   (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    ViewType = LoggingUtil::GetViewType((void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    p_ViewType = &ViewType;
    v19 = 4;
    v20 = 0;
    v14 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v12, a3);
    v21 = &v14;
    v22 = 16;
    v23 = 0;
    v15 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v13, a4);
    v24 = &v15;
    v25 = 16;
    v26 = 0;
    TlgWrite(v8, &unk_1804CC41C, 0LL, 0LL, 6u, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
}

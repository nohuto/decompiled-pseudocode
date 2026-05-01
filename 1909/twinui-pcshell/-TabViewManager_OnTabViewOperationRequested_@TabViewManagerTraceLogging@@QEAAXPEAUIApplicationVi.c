/*
 * XREFs of ?TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18025E030
 * Callers:
 *     ??$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAX$$QEAPEAUIApplicationView@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x180246744 (--$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@Composabl.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18014FF7C (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     LoggingUtil::GetGroupIdFromTab @ 0x18024F300 (LoggingUtil--GetGroupIdFromTab.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024FC5C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetViewIdFromView @ 0x180250738 (LoggingUtil--GetViewIdFromView.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManagerTraceLogging::TabViewManager_OnTabViewOperationRequested_(
        TabViewManagerTraceLogging *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3,
        int a4)
{
  const struct _TlgProvider_t *v6; // rbx
  LPCWSTR *AppNameFromView; // rax
  __int64 v8; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv[2]; // [rsp+40h] [rbp-C8h] BYREF
  struct _GUID v10; // [rsp+50h] [rbp-B8h] BYREF
  GUID v11; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v12; // [rsp+70h] [rbp-98h] BYREF
  GUID v13; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int128 *v15; // [rsp+B8h] [rbp-50h]
  int v16; // [rsp+C0h] [rbp-48h]
  int v17; // [rsp+C4h] [rbp-44h]
  GUID *v18; // [rsp+C8h] [rbp-40h]
  int v19; // [rsp+D0h] [rbp-38h]
  int v20; // [rsp+D4h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v22; // [rsp+E8h] [rbp-20h]
  int v23; // [rsp+F0h] [rbp-18h]
  int v24; // [rsp+F4h] [rbp-14h]
  int *v25; // [rsp+F8h] [rbp-10h]
  int v26; // [rsp+100h] [rbp-8h]
  int v27; // [rsp+104h] [rbp-4h]
  int v28; // [rsp+150h] [rbp+48h] BYREF

  v28 = a4;
  pv[1] = (LPVOID)-2LL;
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 4u )
  {
    v12 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v10, a3);
    v15 = &v12;
    v16 = 16;
    v17 = 0;
    v13 = *LoggingUtil::GetGroupIdFromTab(&v11, (__int64)a3);
    v18 = &v13;
    v19 = 16;
    v20 = 0;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(
                                   (HWND)pv,
                                   (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    LODWORD(v8) = LoggingUtil::GetViewIdFromView((__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2);
    v22 = &v8;
    v23 = 4;
    v24 = 0;
    v25 = &v28;
    v26 = 4;
    v27 = 0;
    TlgWrite(v6, &unk_1804F4262, 0LL, 0LL, 7u, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
}

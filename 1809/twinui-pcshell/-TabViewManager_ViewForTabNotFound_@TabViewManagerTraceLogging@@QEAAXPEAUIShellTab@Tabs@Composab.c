/*
 * XREFs of ?TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801ECD24
 * Callers:
 *     ??$TabViewManager_ViewForTabNotFound@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801D15D4 (--$TabViewManager_ViewForTabNotFound@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@TabVi.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DD0F0 (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_ViewForTabNotFound_(
        TabViewManagerTraceLogging *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  const struct _TlgProvider_t *v3; // rbx
  __int128 v4; // xmm0
  struct _GUID v5; // [rsp+30h] [rbp-68h] BYREF
  __int128 v6; // [rsp+40h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-48h] BYREF
  __int128 *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  v3 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 2u )
  {
    v4 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v5, a2);
    v10 = 0;
    v8 = &v6;
    v6 = v4;
    v9 = 16;
    TlgWrite(v3, &unk_180459AA3, 0LL, 0LL, 3u, &pData);
  }
}

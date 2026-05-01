/*
 * XREFs of ?TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x18023EB98
 * Callers:
 *     ??$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@@Z @ 0x180227170 (--$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802306AC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnThumbnailRequested_(
        TabViewManagerTraceLogging *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  const struct _TlgProvider_t *v5; // rbx
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  struct _GUID v8; // [rsp+30h] [rbp-49h] BYREF
  struct _GUID v9; // [rsp+40h] [rbp-39h] BYREF
  __int128 v10; // [rsp+50h] [rbp-29h] BYREF
  __int128 v11; // [rsp+60h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  __int128 *v13; // [rsp+90h] [rbp+17h]
  int v14; // [rsp+98h] [rbp+1Fh]
  int v15; // [rsp+9Ch] [rbp+23h]
  __int128 *v16; // [rsp+A0h] [rbp+27h]
  int v17; // [rsp+A8h] [rbp+2Fh]
  int v18; // [rsp+ACh] [rbp+33h]

  v5 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                                    (__int64)this,
                                                    (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v5 > 4u )
  {
    v6 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v8, a2);
    v15 = 0;
    v13 = &v10;
    v10 = v6;
    v14 = 16;
    v7 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v9, a3);
    v18 = 0;
    v16 = &v11;
    v11 = v7;
    v17 = 16;
    TlgWrite(v5, &unk_1804CE153, 0LL, 0LL, 4u, &pData);
  }
}

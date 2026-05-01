/*
 * XREFs of ?TabViewManager_BoundingRectRequestedForTab_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBUtagRECT@@@Z @ 0x18023E7AC
 * Callers:
 *     ??$TabViewManager_BoundingRectRequestedForTab@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAUtagRECT@@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAUtagRECT@@@Z @ 0x180226EA4 (--$TabViewManager_BoundingRectRequestedForTab@PEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802306AC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_BoundingRectRequestedForTab_(
        TabViewManagerTraceLogging *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        const struct tagRECT *a3)
{
  const struct _TlgProvider_t *v5; // rdi
  __int128 v6; // xmm0
  struct _GUID v7; // [rsp+38h] [rbp-49h] BYREF
  __int128 v8; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  __int128 *v10; // [rsp+78h] [rbp-9h]
  __int64 v11; // [rsp+80h] [rbp-1h]
  const struct tagRECT *v12; // [rsp+88h] [rbp+7h]
  __int64 v13; // [rsp+90h] [rbp+Fh]
  LONG *p_top; // [rsp+98h] [rbp+17h]
  __int64 v15; // [rsp+A0h] [rbp+1Fh]
  LONG *p_right; // [rsp+A8h] [rbp+27h]
  __int64 v17; // [rsp+B0h] [rbp+2Fh]
  LONG *p_bottom; // [rsp+B8h] [rbp+37h]
  __int64 v19; // [rsp+C0h] [rbp+3Fh]

  v5 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                                    (__int64)this,
                                                    (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v5 > 4u )
  {
    v6 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v7, a2);
    v11 = 16LL;
    v10 = &v8;
    p_top = &a3->top;
    p_right = &a3->right;
    p_bottom = &a3->bottom;
    v8 = v6;
    v12 = a3;
    v13 = 4LL;
    v15 = 4LL;
    v17 = 4LL;
    v19 = 4LL;
    TlgWrite(v5, &unk_1804CE196, 0LL, 0LL, 7u, &pData);
  }
}

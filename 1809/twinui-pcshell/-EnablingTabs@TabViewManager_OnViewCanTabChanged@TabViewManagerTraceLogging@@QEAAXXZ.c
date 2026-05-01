/*
 * XREFs of ?EnablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ @ 0x1801DB088
 * Callers:
 *     ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801E2494 (-OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::EnablingTabs(
        TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *this)
{
  const struct _TlgProvider_t *v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1804581B3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 2u, &pData);
}

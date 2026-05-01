/*
 * XREFs of _lambda_37f9ef9030aa536b557a78acc06105da_::operator() @ 0x18024A438
 * Callers:
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18024B8F0 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180258974 (-Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShel.c)
 */

void __fastcall lambda_37f9ef9030aa536b557a78acc06105da_::operator()(__int64 a1)
{
  TabViewManagerMeasures::TabViewManagerAddVirtualTab *v1; // rdi
  const struct _TlgProvider_t *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(TabViewManagerMeasures::TabViewManagerAddVirtualTab **)a1;
  v3 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        a1,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 2u )
    TlgWrite(v3, &unk_1804F1E81, (LPCGUID)(*((_QWORD *)v1 + 6) + 8LL), 0LL, 2u, &pData);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1216LL) + 80LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1216LL),
    **(_QWORD **)(a1 + 16));
  TabViewManagerMeasures::TabViewManagerAddVirtualTab::Stop(
    *(TabViewManagerMeasures::TabViewManagerAddVirtualTab **)a1,
    ***(struct Windows::Internal::ComposableShell::Tabs::IShellTab ****)(a1 + 24));
}

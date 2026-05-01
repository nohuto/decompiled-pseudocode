/*
 * XREFs of ?ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EFCFC
 * Callers:
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1801DFAF0 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DD0F0 (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::ZombieTab(
        TabViewManagerMeasures::TabViewManagerCloseTabRequested *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  _QWORD *v4; // rax
  const struct _TlgProvider_t *v5; // rbx
  __int128 v6; // xmm0
  struct _GUID v7; // [rsp+30h] [rbp-68h] BYREF
  __int128 v8; // [rsp+40h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-48h] BYREF
  __int128 *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  v4 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v5 = (const struct _TlgProvider_t *)v4[1];
  if ( *(_DWORD *)v5 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v4[1], 0x400000000000uLL) )
    {
      v6 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v7, a2);
      v12 = 0;
      v10 = &v8;
      v8 = v6;
      v11 = 16;
      TlgWrite(v5, &unk_180457667, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 3u, &pData);
    }
  }
}

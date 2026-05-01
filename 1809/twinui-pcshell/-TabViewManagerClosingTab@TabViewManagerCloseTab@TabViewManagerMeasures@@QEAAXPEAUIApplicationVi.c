/*
 * XREFs of ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x1801EBF64
 * Callers:
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801D8B98 (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18010A750 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DD0F0 (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1801DD3C0 (LoggingUtil--GetTabGroupSize.c)
 *     LoggingUtil::GetTabIsSelected @ 0x1801DD438 (LoggingUtil--GetTabIsSelected.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTab::TabViewManagerClosingTab(
        TabViewManagerMeasures::TabViewManagerCloseTab *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a4,
        unsigned int a5)
{
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // rbx
  __int128 v11; // xmm0
  bool IsSelected; // al
  __int128 v13; // xmm0
  int TabGroupSize; // eax
  LPCWSTR *AppNameFromView; // rax
  bool v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v19; // [rsp+40h] [rbp-C0h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+ACh] [rbp-54h]
  bool *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+BCh] [rbp-44h]
  __int128 *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  int *v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]

  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v10 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v10 > 5u && TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x400000000000uLL) )
  {
    v11 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v19, a4);
    v26 = 0;
    v24 = &v21;
    v21 = v11;
    v25 = 16;
    IsSelected = LoggingUtil::GetTabIsSelected((__int64)a4);
    v29 = 0;
    v16 = IsSelected;
    v28 = 1;
    v27 = &v16;
    v13 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v20, a3);
    v32 = 0;
    v30 = &v22;
    v22 = v13;
    v31 = 16;
    TabGroupSize = LoggingUtil::GetTabGroupSize((__int64)a3);
    v35 = 0;
    v17 = TabGroupSize;
    v34 = 4;
    v33 = &v17;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(&pv, (__int64)a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    v39 = 0;
    v37 = &a5;
    v38 = 4;
    TlgWrite(v10, &unk_180457259, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &pData);
    if ( pv )
      CoTaskMemFree(pv);
  }
}

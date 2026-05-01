/*
 * XREFs of ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x1801DE530
 * Callers:
 *     _lambda_6c4b80bdf74632827428df2b58c2a770_::operator() @ 0x1801D692C (_lambda_6c4b80bdf74632827428df2b58c2a770_--operator().c)
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

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::InvokingAppManagedTabCloseRequestedHandlers(
        TabViewManagerMeasures::TabViewManagerCloseTabRequested *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a4)
{
  _QWORD *v8; // rax
  const struct _TlgProvider_t *v9; // rbx
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  int TabGroupSize; // eax
  bool IsSelected; // al
  LPCWSTR *AppNameFromView; // rax
  bool v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  __int128 *v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  int *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  bool *v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF

  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v9 = (const struct _TlgProvider_t *)v8[1];
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
  {
    v10 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v18, a3);
    v25 = 0;
    v23 = &v20;
    v20 = v10;
    v24 = 16;
    v11 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v19, a4);
    v28 = 0;
    v26 = &v21;
    v21 = v11;
    v27 = 16;
    TabGroupSize = LoggingUtil::GetTabGroupSize((__int64)a4);
    v31 = 0;
    v16 = TabGroupSize;
    v29 = &v16;
    v30 = 4;
    IsSelected = LoggingUtil::GetTabIsSelected((__int64)a3);
    v34 = 0;
    v15 = IsSelected;
    v33 = 1;
    v32 = &v15;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(&pv, (__int64)a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    TlgWrite(v9, &unk_1804575FB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &pData);
    if ( pv )
      CoTaskMemFree(pv);
  }
}

/*
 * XREFs of ?TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@@Z @ 0x18023E3D8
 * Callers:
 *     ?OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerCancellableEventArgs@3456@@Z @ 0x1802335C0 (-OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180130A2C (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802306AC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1802309A0 (LoggingUtil--GetTabGroupSize.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerSelectTabRequested::TabViewManagerSelectTab(
        TabViewManagerMeasures::TabViewManagerSelectTabRequested *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a4)
{
  LPVOID v8; // rax
  const struct _TlgProvider_t *v9; // rbx
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  int TabGroupSize; // eax
  LPCWSTR *AppNameFromView; // rax
  int v14; // [rsp+30h] [rbp-99h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-91h] BYREF
  struct _GUID v16; // [rsp+40h] [rbp-89h] BYREF
  struct _GUID v17; // [rsp+50h] [rbp-79h] BYREF
  __int128 v18; // [rsp+60h] [rbp-69h] BYREF
  __int128 v19; // [rsp+70h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-49h] BYREF
  __int128 *v21; // [rsp+A0h] [rbp-29h]
  int v22; // [rsp+A8h] [rbp-21h]
  int v23; // [rsp+ACh] [rbp-1Dh]
  __int128 *v24; // [rsp+B0h] [rbp-19h]
  int v25; // [rsp+B8h] [rbp-11h]
  int v26; // [rsp+BCh] [rbp-Dh]
  int *v27; // [rsp+C0h] [rbp-9h]
  int v28; // [rsp+C8h] [rbp-1h]
  int v29; // [rsp+CCh] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+7h] BYREF

  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v8 + 1), 0x400000000000uLL) )
  {
    v10 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v16, a4);
    v23 = 0;
    v21 = &v18;
    v18 = v10;
    v22 = 16;
    v11 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v17, a3);
    v26 = 0;
    v24 = &v19;
    v19 = v11;
    v25 = 16;
    TabGroupSize = LoggingUtil::GetTabGroupSize((__int64 *)a3);
    v29 = 0;
    v14 = TabGroupSize;
    v28 = 4;
    v27 = &v14;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(
                                   (HWND)&pv,
                                   (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    TlgWrite(v9, &unk_1804CBAEE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &pData);
    if ( pv )
      CoTaskMemFree(pv);
  }
}

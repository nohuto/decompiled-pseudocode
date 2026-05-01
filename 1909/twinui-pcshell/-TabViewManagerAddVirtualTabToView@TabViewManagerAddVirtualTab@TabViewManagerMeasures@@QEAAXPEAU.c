/*
 * XREFs of ?TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025D5BC
 * Callers:
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18024B8F0 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18014FF7C (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     LoggingUtil::GetGroupIdFromTab @ 0x18024F300 (LoggingUtil--GetGroupIdFromTab.c)
 *     LoggingUtil::GetGroupSizeFromTab @ 0x18024F35C (LoggingUtil--GetGroupSizeFromTab.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024FC5C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerAddVirtualTab::TabViewManagerAddVirtualTabToView(
        TabViewManagerMeasures::TabViewManagerAddVirtualTab *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  _QWORD *v6; // rax
  const struct _TlgProvider_t *v7; // rbx
  __int128 v8; // xmm0
  GUID v9; // xmm0
  int GroupSizeFromTab; // eax
  LPCWSTR *AppNameFromView; // rax
  int v12; // [rsp+30h] [rbp-89h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-81h] BYREF
  struct _GUID v14; // [rsp+40h] [rbp-79h] BYREF
  GUID v15; // [rsp+50h] [rbp-69h] BYREF
  __int128 v16; // [rsp+60h] [rbp-59h] BYREF
  GUID v17; // [rsp+70h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-39h] BYREF
  __int128 *v19; // [rsp+A0h] [rbp-19h]
  int v20; // [rsp+A8h] [rbp-11h]
  int v21; // [rsp+ACh] [rbp-Dh]
  GUID *v22; // [rsp+B0h] [rbp-9h]
  int v23; // [rsp+B8h] [rbp-1h]
  int v24; // [rsp+BCh] [rbp+3h]
  int *v25; // [rsp+C0h] [rbp+7h]
  int v26; // [rsp+C8h] [rbp+Fh]
  int v27; // [rsp+CCh] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+17h] BYREF

  v6 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v7 = (const struct _TlgProvider_t *)v6[1];
  if ( *(_DWORD *)v7 > 5u && TlgKeywordOn((TraceLoggingHProvider)v6[1], 0x400000000000uLL) )
  {
    v8 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v14, a3);
    v21 = 0;
    v19 = &v16;
    v16 = v8;
    v20 = 16;
    v9 = *LoggingUtil::GetGroupIdFromTab(&v15, (__int64)a3);
    v24 = 0;
    v22 = &v17;
    v17 = v9;
    v23 = 16;
    GroupSizeFromTab = LoggingUtil::GetGroupSizeFromTab((__int64)a3);
    v27 = 0;
    v12 = GroupSizeFromTab;
    v26 = 4;
    v25 = &v12;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(
                                   (HWND)&pv,
                                   (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    TlgWrite(v7, &unk_1804F1EB5, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &pData);
    if ( pv )
      CoTaskMemFree(pv);
  }
}

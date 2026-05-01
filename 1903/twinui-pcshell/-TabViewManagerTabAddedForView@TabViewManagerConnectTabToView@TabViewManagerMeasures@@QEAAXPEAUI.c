/*
 * XREFs of ?TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@_N@Z @ 0x18023E520
 * Callers:
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x18022CF68 (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180130A2C (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802306AC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1802309A0 (LoggingUtil--GetTabGroupSize.c)
 *     LoggingUtil::GetViewType @ 0x1802311F0 (LoggingUtil--GetViewType.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerConnectTabToView::TabViewManagerTabAddedForView(
        TabViewManagerMeasures::TabViewManagerConnectTabToView *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a4,
        bool a5)
{
  LPVOID v9; // rax
  const struct _TlgProvider_t *v10; // rbx
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  int TabGroupSize; // eax
  LPCWSTR *AppNameFromView; // rax
  int ViewType; // eax
  int v16; // [rsp+30h] [rbp-D0h] BYREF
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
  __int128 *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+BCh] [rbp-44h]
  int *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  bool *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]

  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)v9 + 1);
  if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v9 + 1), 0x400000000000uLL) )
  {
    v11 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v19, a4);
    v26 = 0;
    v24 = &v21;
    v21 = v11;
    v25 = 16;
    v12 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v20, a3);
    v29 = 0;
    v27 = &v22;
    v22 = v12;
    v28 = 16;
    TabGroupSize = LoggingUtil::GetTabGroupSize((__int64 *)a3);
    v32 = 0;
    v16 = TabGroupSize;
    v31 = 4;
    v30 = &v16;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(
                                   (HWND)&pv,
                                   (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    ViewType = LoggingUtil::GetViewType((void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    v36 = 0;
    v39 = 0;
    v17 = ViewType;
    v34 = &v17;
    v37 = &a5;
    v35 = 4;
    v38 = 1;
    TlgWrite(v10, &unk_1804CC3B4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &pData);
    if ( pv )
      CoTaskMemFree(pv);
  }
}

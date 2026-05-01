/*
 * XREFs of ?StartActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x180237CDC
 * Callers:
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18022C340 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802306AC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18024368C (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflect.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerAddVirtualTab::StartActivity(
        TabViewManagerMeasures::TabViewManagerAddVirtualTab *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        int a3)
{
  __int64 v5; // rcx
  LPVOID v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int128 v9; // xmm0
  const GUID *v10; // rax
  DWORD v11; // [rsp+30h] [rbp-59h] BYREF
  struct _GUID v12; // [rsp+38h] [rbp-51h] BYREF
  __int128 v13; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v15; // [rsp+80h] [rbp-9h]
  int v16; // [rsp+88h] [rbp-1h]
  int v17; // [rsp+8Ch] [rbp+3h]
  DWORD *v18; // [rsp+90h] [rbp+7h]
  int v19; // [rsp+98h] [rbp+Fh]
  int v20; // [rsp+9Ch] [rbp+13h]
  __int128 *v21; // [rsp+A0h] [rbp+17h]
  int v22; // [rsp+A8h] [rbp+1Fh]
  int v23; // [rsp+ACh] [rbp+23h]
  int *v24; // [rsp+B0h] [rbp+27h]
  int v25; // [rsp+B8h] [rbp+2Fh]
  int v26; // [rsp+BCh] [rbp+33h]
  int v27; // [rsp+100h] [rbp+77h] BYREF

  v27 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v5,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)v6 + 1);
  if ( *(_DWORD *)v7 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v6 + 1), 0x400000000000uLL) )
  {
    v17 = 0;
    v15 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v16 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0;
    v11 = CurrentThreadId;
    v19 = 4;
    v18 = &v11;
    v9 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v12, a2);
    v23 = 0;
    v26 = 0;
    v21 = &v13;
    v24 = &v27;
    v13 = v9;
    v22 = 16;
    v25 = 4;
    v10 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_1804CB874, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v10, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerMeasures::TabViewManagerAddVirtualTab *)((char *)this + 8));
}

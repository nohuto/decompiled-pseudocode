/*
 * XREFs of ?StartActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x1801E51CC
 * Callers:
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x1801D8210 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DD0F0 (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801F2264 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTa.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerAddVirtualTab::StartActivity(
        TabViewManagerMeasures::TabViewManagerAddVirtualTab *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        int a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int128 v9; // xmm0
  const GUID *v10; // rax
  DWORD v11; // [rsp+30h] [rbp-49h] BYREF
  struct _GUID v12; // [rsp+38h] [rbp-41h] BYREF
  __int128 v13; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  DWORD *v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  __int128 *v18; // [rsp+90h] [rbp+17h]
  int v19; // [rsp+98h] [rbp+1Fh]
  int v20; // [rsp+9Ch] [rbp+23h]
  int *v21; // [rsp+A0h] [rbp+27h]
  int v22; // [rsp+A8h] [rbp+2Fh]
  int v23; // [rsp+ACh] [rbp+33h]
  int v24; // [rsp+F0h] [rbp+77h] BYREF

  v24 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v5,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v7 = (const struct _TlgProvider_t *)v6[1];
  if ( *(_DWORD *)v7 > 4u && TlgKeywordOn((TraceLoggingHProvider)v6[1], 0x400000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v17 = 0;
    v11 = CurrentThreadId;
    v16 = 4;
    v15 = &v11;
    v9 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v12, a2);
    v20 = 0;
    v23 = 0;
    v18 = &v13;
    v21 = &v24;
    v13 = v9;
    v19 = 16;
    v22 = 4;
    v10 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_180456EAC, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v10, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerMeasures::TabViewManagerAddVirtualTab *)((char *)this + 8));
}

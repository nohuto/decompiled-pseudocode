/*
 * XREFs of ?StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x1801E6698
 * Callers:
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1801EEEC4 (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DD0F0 (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1801DD3C0 (LoggingUtil--GetTabGroupSize.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801F21FC (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  __int128 v8; // xmm0
  int TabGroupSize; // eax
  __int128 v10; // xmm0
  const GUID *v11; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-89h] BYREF
  int v13; // [rsp+34h] [rbp-85h] BYREF
  struct _GUID v14; // [rsp+38h] [rbp-81h] BYREF
  struct _GUID v15; // [rsp+48h] [rbp-71h] BYREF
  __int128 v16; // [rsp+58h] [rbp-61h] BYREF
  __int128 v17; // [rsp+68h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-39h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+A0h] [rbp-19h]
  int v20; // [rsp+A8h] [rbp-11h]
  int v21; // [rsp+ACh] [rbp-Dh]
  __int128 *v22; // [rsp+B0h] [rbp-9h]
  int v23; // [rsp+B8h] [rbp-1h]
  int v24; // [rsp+BCh] [rbp+3h]
  int *v25; // [rsp+C0h] [rbp+7h]
  int v26; // [rsp+C8h] [rbp+Fh]
  int v27; // [rsp+CCh] [rbp+13h]
  __int128 *v28; // [rsp+D0h] [rbp+17h]
  int v29; // [rsp+D8h] [rbp+1Fh]
  int v30; // [rsp+DCh] [rbp+23h]

  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        v6,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 5u )
  {
    v21 = 0;
    CurrentThreadId = GetCurrentThreadId();
    v20 = 4;
    p_CurrentThreadId = &CurrentThreadId;
    v8 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v14, a2);
    v24 = 0;
    v22 = &v16;
    v16 = v8;
    v23 = 16;
    TabGroupSize = LoggingUtil::GetTabGroupSize((__int64)a2);
    v27 = 0;
    v13 = TabGroupSize;
    v26 = 4;
    v25 = &v13;
    v10 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v15, a3);
    v30 = 0;
    v28 = &v17;
    v17 = v10;
    v29 = 16;
    v11 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_180457F38, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v11, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *)((char *)this + 8));
}

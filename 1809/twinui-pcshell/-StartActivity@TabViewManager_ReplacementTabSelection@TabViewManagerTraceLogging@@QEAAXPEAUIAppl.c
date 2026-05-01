/*
 * XREFs of ?StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@0PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x1801E625C
 * Callers:
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x1801ED48C (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18010A750 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DD0F0 (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801F2194 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsP.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a4,
        unsigned int a5)
{
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rdi
  LPCWSTR *AppNameFromView; // rax
  LPCWSTR *v12; // rax
  const GUID *v13; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-A1h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-99h] BYREF
  LPVOID v16[2]; // [rsp+40h] [rbp-91h] BYREF
  struct _GUID v17; // [rsp+50h] [rbp-81h] BYREF
  __int128 v18; // [rsp+60h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-61h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+90h] [rbp-41h]
  int v21; // [rsp+98h] [rbp-39h]
  int v22; // [rsp+9Ch] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+B0h] [rbp-21h] BYREF
  unsigned int *v25; // [rsp+C0h] [rbp-11h]
  int v26; // [rsp+C8h] [rbp-9h]
  int v27; // [rsp+CCh] [rbp-5h]
  __int128 *v28; // [rsp+D0h] [rbp-1h]
  int v29; // [rsp+D8h] [rbp+7h]
  int v30; // [rsp+DCh] [rbp+Bh]

  v16[1] = (LPVOID)-2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v10 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                         v9,
                                         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v10 > 4u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v21 = 4;
    v22 = 0;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(v16, (__int64)a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    v12 = (LPCWSTR *)LoggingUtil::GetAppNameFromView(&pv, (__int64)a3);
    TlgCreateWsz(&v24, *v12);
    v25 = &a5;
    v26 = 4;
    v27 = 0;
    v18 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v17, a4);
    v28 = &v18;
    v29 = 16;
    v30 = 0;
    v13 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v10, &unk_1804595A7, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v13, 7u, &pData);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v16[0] )
      CoTaskMemFree(v16[0]);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection *)((char *)this + 8));
}

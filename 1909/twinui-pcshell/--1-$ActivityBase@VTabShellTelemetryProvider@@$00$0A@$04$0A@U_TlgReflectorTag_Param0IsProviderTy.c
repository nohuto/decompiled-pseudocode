/*
 * XREFs of ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180249694
 * Callers:
 *     ??1TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18024A124 (--1TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_OnViewFocusChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18024A1D4 (--1TabViewManager_OnViewFocusChanged@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18024A274 (--1TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1802547DC (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 *     ?OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180254DDC (-OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1802608FC (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 *     ??1TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18027DEAC (--1TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x18027F0D0 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802497F0 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_1802497F0.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18026290C (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_18026290C.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TabShellTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

/*
 * XREFs of ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D50C4
 * Callers:
 *     ??1TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5C6C (--1TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_OnViewFocusChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5D1C (--1TabViewManager_OnViewFocusChanged@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5E14 (--1TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1801E22B0 (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 *     ?OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1801E28C8 (-OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1801EEEC4 (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 *     ??1TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAA@XZ @ 0x180206028 (--1TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x180207170 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D5220 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_1801D5220.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801F1E6C (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_1801F1E6C.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TabShellTelemetryProvider,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

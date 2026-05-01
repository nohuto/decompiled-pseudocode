/*
 * XREFs of ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D5088
 * Callers:
 *     ??1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5B00 (--1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5B2C (--1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5B58 (--1TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5C40 (--1TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5D90 (--1TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5DBC (--1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5DE8 (--1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?NewViewForTab@TabViewManager@@UEAAJIU_GUID@@@Z @ 0x1801DEE30 (-NewViewForTab@TabViewManager@@UEAAJIU_GUID@@@Z.c)
 *     ?OnTabTransferCanceled@TabViewManager@@AEAAJPEAUIInspectable@@0@Z @ 0x1801E0E80 (-OnTabTransferCanceled@TabViewManager@@AEAAJPEAUIInspectable@@0@Z.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x1801ED48C (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D51CC (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_1801D51CC.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801F1E18 (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_1801F1E18.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TabShellTelemetryProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

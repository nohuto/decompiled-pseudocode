/*
 * XREFs of ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18022A044
 * Callers:
 *     ??1TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAA@XZ @ 0x18022A920 (--1TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ??1TabViewManagerCloseTab@TabViewManagerMeasures@@QEAA@XZ @ 0x18022A94C (--1TabViewManagerCloseTab@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ??1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ @ 0x18022A978 (--1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ??1TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAA@XZ @ 0x18022A9A4 (--1TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ??1TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAA@XZ @ 0x18022A9D0 (--1TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ??1TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18022ABC0 (--1TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180235400 (-OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18022A1B8 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_18022A1B8.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180243370 (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_180243370.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

/*
 * XREFs of ??1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5DBC
 * Callers:
 *     ?TabTransferCompletedWorker@TabViewManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EB9B8 (-TabTransferCompletedWorker@TabViewManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableSh.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA3B0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::~TabViewManager_TabTransferCompleted(
        TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

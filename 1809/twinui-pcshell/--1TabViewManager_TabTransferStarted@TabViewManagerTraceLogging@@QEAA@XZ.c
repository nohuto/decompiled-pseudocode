/*
 * XREFs of ??1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5DE8
 * Callers:
 *     ?OnTabTransferStarting@TabViewManager@@AEAAJPEAUIInspectable@@0@Z @ 0x1801E1080 (-OnTabTransferStarting@TabViewManager@@AEAAJPEAUIInspectable@@0@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA3B0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::~TabViewManager_TabTransferStarted(
        TabViewManagerTraceLogging::TabViewManager_TabTransferStarted *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of ??1TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5C6C
 * Callers:
 *     ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801DF630 (-OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA454 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged::~TabViewManager_OnApplicationViewChanged(
        TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_OnApplicationViewChanged::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of ??1TabViewManager_OnTitleBarsCreated@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5C98
 * Callers:
 *     ?OnTitleBarsCreated@TabViewManager@@UEAAJXZ @ 0x1801E1FE0 (-OnTitleBarsCreated@TabViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA5A0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated::~TabViewManager_OnTitleBarsCreated(
        TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of ??1TabViewManager_OnTitleBarsLost@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5CC4
 * Callers:
 *     _TabViewManager::OnTitleBarsLost_::_1_::dtor$0 @ 0x1801E225A (_TabViewManager--OnTitleBarsLost_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA5A0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnTitleBarsLost::~TabViewManager_OnTitleBarsLost(
        TabViewManagerTraceLogging::TabViewManager_OnTitleBarsLost *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_OnTitleBarsLost::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

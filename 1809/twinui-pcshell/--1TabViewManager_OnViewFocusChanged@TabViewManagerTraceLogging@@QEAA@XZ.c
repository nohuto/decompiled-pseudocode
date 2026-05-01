/*
 * XREFs of ??1TabViewManager_OnViewFocusChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5D1C
 * Callers:
 *     _TabViewManager::OnViewFocusChanged_::_1_::dtor$0 @ 0x1801E29F6 (_TabViewManager--OnViewFocusChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA454 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnViewFocusChanged::~TabViewManager_OnViewFocusChanged(
        TabViewManagerTraceLogging::TabViewManager_OnViewFocusChanged *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_OnViewFocusChanged::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

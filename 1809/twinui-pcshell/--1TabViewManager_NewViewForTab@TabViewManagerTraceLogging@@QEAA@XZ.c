/*
 * XREFs of ??1TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5C40
 * Callers:
 *     _TabViewManager::NewViewForTab_::_1_::dtor$0 @ 0x1801DF031 (_TabViewManager--NewViewForTab_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA3B0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_NewViewForTab::~TabViewManager_NewViewForTab(
        TabViewManagerTraceLogging::TabViewManager_NewViewForTab *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_NewViewForTab::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

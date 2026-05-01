/*
 * XREFs of ??1TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5E14
 * Callers:
 *     _TabViewManager::UpdateFallbackTabForGroup_::_1_::dtor$0 @ 0x1801EF1FD (_TabViewManager--UpdateFallbackTabForGroup_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA648 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup::~TabViewManager_UpdateFallbackTabForGroup(
        TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

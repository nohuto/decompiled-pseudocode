/*
 * XREFs of ??1TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18022ABC0
 * Callers:
 *     _TabViewManager::OnViewCanTabChanged_::_1_::dtor$1 @ 0x180235757 (_TabViewManager--OnViewCanTabChanged_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18022E5E0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::~TabViewManager_OnViewCanTabChanged(
        TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

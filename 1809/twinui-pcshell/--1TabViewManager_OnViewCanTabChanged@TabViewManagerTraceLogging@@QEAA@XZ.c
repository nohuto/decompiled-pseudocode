/*
 * XREFs of ??1TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5CF0
 * Callers:
 *     _TabViewManager::OnViewCanTabChanged_::_1_::dtor$1 @ 0x1801E2803 (_TabViewManager--OnViewCanTabChanged_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA4F8 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::~TabViewManager_OnViewCanTabChanged(
        TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of ??1TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAA@XZ @ 0x1801D5A24
 * Callers:
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x1801D8210 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 *     _TabViewManager::AddVirtualTabForWindow_::_1_::dtor$0 @ 0x1801D86E5 (_TabViewManager--AddVirtualTabForWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA4F8 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerAddVirtualTab::~TabViewManagerAddVirtualTab(
        TabViewManagerMeasures::TabViewManagerAddVirtualTab *this)
{
  *(_QWORD *)this = &TabViewManagerMeasures::TabViewManagerAddVirtualTab::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of ??1TabViewManagerCloseTab@TabViewManagerMeasures@@QEAA@XZ @ 0x1801D5A50
 * Callers:
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801D8B98 (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA4F8 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTab::~TabViewManagerCloseTab(
        TabViewManagerMeasures::TabViewManagerCloseTab *this)
{
  *(_QWORD *)this = &TabViewManagerMeasures::TabViewManagerCloseTab::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

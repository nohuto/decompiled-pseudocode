/*
 * XREFs of ??1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ @ 0x18022A978
 * Callers:
 *     _lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_ @ 0x180229F88 (_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_--__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_.c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180232FF0 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18022E5E0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::~TabViewManagerCloseTabRequested(
        TabViewManagerMeasures::TabViewManagerCloseTabRequested *this)
{
  *(_QWORD *)this = &TabViewManagerMeasures::TabViewManagerCloseTabRequested::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

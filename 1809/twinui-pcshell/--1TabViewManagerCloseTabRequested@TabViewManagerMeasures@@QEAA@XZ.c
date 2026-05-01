/*
 * XREFs of ??1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ @ 0x1801D5A7C
 * Callers:
 *     _lambda_6c4b80bdf74632827428df2b58c2a770_::__lambda_6c4b80bdf74632827428df2b58c2a770_ @ 0x1801D4FBC (_lambda_6c4b80bdf74632827428df2b58c2a770_--__lambda_6c4b80bdf74632827428df2b58c2a770_.c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1801DFAF0 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA4F8 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::~TabViewManagerCloseTabRequested(
        TabViewManagerMeasures::TabViewManagerCloseTabRequested *this)
{
  *(_QWORD *)this = &TabViewManagerMeasures::TabViewManagerCloseTabRequested::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

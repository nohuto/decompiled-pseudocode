/*
 * XREFs of ??1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x180107D7C
 * Callers:
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x180109888 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18010950C (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragComplete::~DragComplete(AppViewManagerTabTelemetry::DragComplete *this)
{
  *(_QWORD *)this = &AppViewManagerTabTelemetry::DragComplete::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

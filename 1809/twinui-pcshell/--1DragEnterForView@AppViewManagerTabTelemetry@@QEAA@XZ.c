/*
 * XREFs of ??1DragEnterForView@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x180107DA8
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x180109CD0 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18010950C (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragEnterForView::~DragEnterForView(
        AppViewManagerTabTelemetry::DragEnterForView *this)
{
  *(_QWORD *)this = &AppViewManagerTabTelemetry::DragEnterForView::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

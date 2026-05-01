/*
 * XREFs of ??1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1801199E0
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow_::_1_::dtor$0 @ 0x1801203E8 (_CImmersiveApp--CImmersiveWindowCollection--SetPendingApplicationWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CImmersiveAppTelemetry::SetPendingApplicationWindow::~SetPendingApplicationWindow(
        CImmersiveAppTelemetry::SetPendingApplicationWindow *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::SetPendingApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

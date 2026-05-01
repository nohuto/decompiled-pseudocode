/*
 * XREFs of ??1ProcessNewWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180119988
 * Callers:
 *     _CImmersiveApp::_ProcessNewView_::_1_::dtor$0 @ 0x1800ADD5F (_CImmersiveApp--_ProcessNewView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CImmersiveAppTelemetry::ProcessNewWindow::~ProcessNewWindow(
        CImmersiveAppTelemetry::ProcessNewWindow *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

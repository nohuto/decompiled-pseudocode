/*
 * XREFs of ??1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180160E74
 * Callers:
 *     _CImmersiveApp::SetApplicationWindow_::_1_::dtor$0 @ 0x18016825E (_CImmersiveApp--SetApplicationWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CImmersiveAppTelemetry::SetApplicationWindow::~SetApplicationWindow(
        CImmersiveAppTelemetry::SetApplicationWindow *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

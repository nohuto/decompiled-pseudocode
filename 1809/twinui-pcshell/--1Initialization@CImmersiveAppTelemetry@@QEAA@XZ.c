/*
 * XREFs of ??1Initialization@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180119928
 * Callers:
 *     _CFrameApplicationPresentation::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800ADC07 (_CFrameApplicationPresentation--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CImmersiveApp::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800ADC83 (_CImmersiveApp--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CImmersiveAppTelemetry::Initialization::~Initialization(CImmersiveAppTelemetry::Initialization *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

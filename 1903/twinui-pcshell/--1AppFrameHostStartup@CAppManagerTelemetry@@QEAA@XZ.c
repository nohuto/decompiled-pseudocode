/*
 * XREFs of ??1AppFrameHostStartup@CAppManagerTelemetry@@QEAA@XZ @ 0x18013B630
 * Callers:
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$0 @ 0x18013ED46 (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002EEC8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CAppManagerTelemetry::AppFrameHostStartup::~AppFrameHostStartup(
        CAppManagerTelemetry::AppFrameHostStartup *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

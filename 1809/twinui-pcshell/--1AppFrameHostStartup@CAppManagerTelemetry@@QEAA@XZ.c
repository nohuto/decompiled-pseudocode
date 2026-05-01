/*
 * XREFs of ??1AppFrameHostStartup@CAppManagerTelemetry@@QEAA@XZ @ 0x180113F80
 * Callers:
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$0 @ 0x180117486 (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040E48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall CAppManagerTelemetry::AppFrameHostStartup::~AppFrameHostStartup(
        CAppManagerTelemetry::AppFrameHostStartup *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of ??1CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3F00
 * Callers:
 *     ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E6ECC (-RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     _CortanaStoreAppHelper::RevokeDeviceCapabilitiesFromSystemAppOnReplace_::_1_::dtor$0 @ 0x1801E7250 (_CortanaStoreAppHelper--RevokeDeviceCapabilitiesFromSystemAppOnReplace_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801E5938 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace::~CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace(
        CortanaProactiveTelemetry::CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

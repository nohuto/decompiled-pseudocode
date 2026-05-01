/*
 * XREFs of ??1CortanaUndocking_ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3DCC
 * Callers:
 *     ?ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E4E8C (-ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     _CortanaStoreAppHelper::ApplyDeviceCapabilitiesToStoreAppOnReplace_::_1_::dtor$0 @ 0x1801E5162 (_CortanaStoreAppHelper--ApplyDeviceCapabilitiesToStoreAppOnReplace_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801E5938 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_ApplyDeviceCapabilitiesToStoreAppOnReplace::~CortanaUndocking_ApplyDeviceCapabilitiesToStoreAppOnReplace(
        CortanaProactiveTelemetry::CortanaUndocking_ApplyDeviceCapabilitiesToStoreAppOnReplace *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaUndocking_ApplyDeviceCapabilitiesToStoreAppOnReplace::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

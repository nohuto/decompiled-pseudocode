/*
 * XREFs of ??1CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4DD8
 * Callers:
 *     ?ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C61A8 (-ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801C6918 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace::~CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace(
        CortanaProactiveTelemetry::CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

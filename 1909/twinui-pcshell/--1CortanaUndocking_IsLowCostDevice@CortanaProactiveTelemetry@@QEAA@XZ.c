/*
 * XREFs of ??1CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3ED4
 * Callers:
 *     ?IsLowCostDevice@CortanaStoreAppHelper@@YAJV?$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@PEAE@Z @ 0x1801E5DDC (-IsLowCostDevice@CortanaStoreAppHelper@@YAJV-$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@.c)
 *     _CortanaStoreAppHelper::IsLowCostDevice_::_1_::dtor$1 @ 0x1801E6025 (_CortanaStoreAppHelper--IsLowCostDevice_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801E5938 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice::~CortanaUndocking_IsLowCostDevice(
        CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of ??1CortanaUndocking_UpdateReplaceDecision@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3F58
 * Callers:
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 *     _CortanaStoreAppHelper::UpdateReplaceDecision_::_1_::dtor$0 @ 0x1801EB627 (_CortanaStoreAppHelper--UpdateReplaceDecision_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801E5938 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_UpdateReplaceDecision::~CortanaUndocking_UpdateReplaceDecision(
        CortanaProactiveTelemetry::CortanaUndocking_UpdateReplaceDecision *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaUndocking_UpdateReplaceDecision::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

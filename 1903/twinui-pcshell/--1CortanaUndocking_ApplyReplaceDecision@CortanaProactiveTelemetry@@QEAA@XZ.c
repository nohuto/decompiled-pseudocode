/*
 * XREFs of ??1CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4E04
 * Callers:
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801C634C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 *     _CortanaStoreAppHelper::ApplyReplaceDecision_::_1_::dtor$0 @ 0x1801C64DC (_CortanaStoreAppHelper--ApplyReplaceDecision_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801C6918 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_ApplyReplaceDecision::~CortanaUndocking_ApplyReplaceDecision(
        CortanaProactiveTelemetry::CortanaUndocking_ApplyReplaceDecision *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaUndocking_ApplyReplaceDecision::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

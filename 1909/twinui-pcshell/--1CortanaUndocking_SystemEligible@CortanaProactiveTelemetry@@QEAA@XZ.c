/*
 * XREFs of ??1CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3F2C
 * Callers:
 *     ?IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z @ 0x1801E63EC (-IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z.c)
 *     _CortanaStoreAppHelper::IsSystemEligibleForNewCortanaApp_::_1_::dtor$0 @ 0x1801E656E (_CortanaStoreAppHelper--IsSystemEligibleForNewCortanaApp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801E5938 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_SystemEligible::~CortanaUndocking_SystemEligible(
        CortanaProactiveTelemetry::CortanaUndocking_SystemEligible *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaUndocking_SystemEligible::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

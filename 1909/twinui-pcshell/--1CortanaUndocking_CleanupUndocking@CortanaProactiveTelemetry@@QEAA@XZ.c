/*
 * XREFs of ??1CortanaUndocking_CleanupUndocking@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3E50
 * Callers:
 *     ?CleanupUndocking@CortanaStoreAppHelper@@YAJXZ @ 0x1801E5510 (-CleanupUndocking@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801E5938 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_CleanupUndocking::~CortanaUndocking_CleanupUndocking(
        CortanaProactiveTelemetry::CortanaUndocking_CleanupUndocking *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaUndocking_CleanupUndocking::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

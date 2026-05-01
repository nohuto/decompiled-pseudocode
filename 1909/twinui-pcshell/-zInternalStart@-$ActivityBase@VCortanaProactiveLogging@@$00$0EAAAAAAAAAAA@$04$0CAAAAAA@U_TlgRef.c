/*
 * XREFs of ?zInternalStart@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801ED024
 * Callers:
 *     ?StartActivity@CortanaUndocking_ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E753C (-StartActivity@CortanaUndocking_ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelem.c)
 *     ?StartActivity@CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E76A4 (-StartActivity@CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTe.c)
 *     ?StartActivity@CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAAX_N0@Z @ 0x1801E780C (-StartActivity@CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAAX_N0@Z.c)
 *     ?StartActivity@CortanaUndocking_CleanupUndocking@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E79B4 (-StartActivity@CortanaUndocking_CleanupUndocking@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E7B1C (-StartActivity@CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E7C84 (-StartActivity@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E7DEC (-StartActivity@CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E7F54 (-StartActivity@CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaProactiveT.c)
 *     ?StartActivity@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E80BC (-StartActivity@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CortanaUndocking_UpdateReplaceDecision@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E8224 (-StartActivity@CortanaUndocking_UpdateReplaceDecision@CortanaProactiveTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180150C54 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@QEAAXXZ @ 0x1801ED05C (-zInternalStart@-$_TlgActivityBase@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_P.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  _TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::zInternalStart(*(_QWORD *)(a1 + 48));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}

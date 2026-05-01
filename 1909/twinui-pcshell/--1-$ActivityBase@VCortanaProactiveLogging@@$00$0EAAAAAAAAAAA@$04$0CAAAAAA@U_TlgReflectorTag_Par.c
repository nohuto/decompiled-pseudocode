/*
 * XREFs of ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801E3AD0
 * Callers:
 *     ??1CortanaUndocking_ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3DCC (--1CortanaUndocking_ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEAA@X.c)
 *     ??1CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3DF8 (--1CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEA.c)
 *     ??1CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3E24 (--1CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaUndocking_CleanupUndocking@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3E50 (--1CortanaUndocking_CleanupUndocking@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3E7C (--1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3EA8 (--1CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3ED4 (--1CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3F00 (--1CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaProactiveTelemetry@@QE.c)
 *     ??1CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3F2C (--1CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaUndocking_UpdateReplaceDecision@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3F58 (--1CortanaUndocking_UpdateReplaceDecision@CortanaProactiveTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801E3B0C (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1801E3B0C.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801ECE5C (-reset@-$shared_object@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag__ea_1801ECE5C.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

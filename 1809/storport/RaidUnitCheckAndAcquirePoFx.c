/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C000754C
 * Callers:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0001F1C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0007094 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C000717C (RaidUnitAdaptiveIdleTimeout.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C00072D0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C00073E8 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitIdleCondition @ 0x1C0007450 (StorPortUnitIdleCondition.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00076A8 (RaidUnitPoFxIdleComponent.c)
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C00127F8 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012980 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C0012C68 (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0012D2C (RaidUnitCancelWaitWakeIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0016964 (StorUpdateCrashDumpPowerReady.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B4B0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C003DFA4 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C0042F20 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0043010 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C00430A4 (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0043220 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitIdleState @ 0x1C0043E00 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0044150 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0044220 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0044330 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00446C0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C0047394 (RaUnitPowerCapIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C0048A14 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0048AA0 (RaUnitStoragePowerIdle.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004B2D0 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C004DD64 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C004E150 (StorpCSExitTelemetry.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006E138 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0070970 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidUnitCreateDumpData @ 0x1C007568C (RaidUnitCreateDumpData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  BOOLEAN result; // al

  result = 0;
  if ( *(char *)(a1 + 449) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return result;
}

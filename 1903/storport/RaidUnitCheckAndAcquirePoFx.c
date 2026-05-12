/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C000950C
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C00017B8 (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C0001844 (RaUnitStoragePowerActive.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0006588 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C00068E8 (RaidUnitAdaptiveIdleTimeout.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C0007150 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C0007274 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitIdleCondition @ 0x1C00072E0 (StorPortUnitIdleCondition.c)
 *     RaidStartIoPacket @ 0x1C00081C0 (RaidStartIoPacket.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0009408 (RaidUnitPoFxActivateComponent.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000E5DC (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorPortExtendedFunction @ 0x1C000E990 (StorPortExtendedFunction.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C00106A0 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0010828 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C0010B18 (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0010BF8 (RaidUnitCancelWaitWakeIrp.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0016768 (StorUpdateCrashDumpPowerReady.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017624 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00374C4 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C003A4EC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C003FBC0 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C003FCB0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C003FD44 (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C003FEC0 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitIdleState @ 0x1C00407C0 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0040B20 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0040C00 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0040D20 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00410B0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C00447D8 (RaUnitPowerCapIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0048B18 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C004BDC0 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C004C1B8 (StorpCSExitTelemetry.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006C1B4 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C006F178 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidUnitCreateDumpData @ 0x1C0074924 (RaidUnitCreateDumpData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  BOOLEAN result; // al

  result = 0;
  if ( *(char *)(a1 + 161) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  return result;
}

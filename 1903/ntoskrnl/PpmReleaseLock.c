/*
 * XREFs of PpmReleaseLock @ 0x1400EDAA8
 * Callers:
 *     PpmCheckStart @ 0x1400BE700 (PpmCheckStart.c)
 *     PoNotifyVSyncChange @ 0x1400EDA70 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x1401431E0 (PpmMediaBufferingWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14015DD34 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14015DD5C (PpmCheckResumeStatisticsCollection.c)
 *     PpmRegisterPerfCap @ 0x14016FE50 (PpmRegisterPerfCap.c)
 *     PpmHeteroHgsBackupInit @ 0x14019CA08 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402EE38C (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402F0080 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmParkSetLpiCap @ 0x1402F8BB4 (PpmParkSetLpiCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x1403005D0 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1C60 (PpmParkInitSoftCoreParkingSupport.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1406A0614 (PopCheckResiliencyScenarios.c)
 *     PpmInfoReleaseLocks @ 0x1406A1B3C (PpmInfoReleaseLocks.c)
 *     PopEnforceResiliencyScenarios @ 0x1407296C4 (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x14072D2C0 (PpmPerfTelemetryWorker.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074311C (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x14077378C (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x14077D144 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407899A0 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x14078A980 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408A5560 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408A73B0 (PpmPerfGetBrandedFrequency.c)
 *     PpmUpdatePerfStates @ 0x1408A75B0 (PpmUpdatePerfStates.c)
 *     PpmParkApplyForcedMask @ 0x1408A91F8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408A930C (PpmParkClearForcedMask.c)
 *     PdcPoPpmResetProfile @ 0x1408AB840 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408B24B0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x1408B6A84 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408B6BF4 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x1408B7020 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408B7AB0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmInitPolicyConfiguration @ 0x1409ED550 (PpmInitPolicyConfiguration.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax

  v1 = *a1;
  *a1 = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return result;
}

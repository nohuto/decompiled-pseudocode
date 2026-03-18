/*
 * XREFs of PpmReleaseLock @ 0x1400F0968
 * Callers:
 *     PpmCheckStart @ 0x14009E580 (PpmCheckStart.c)
 *     PoNotifyVSyncChange @ 0x1400F0930 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140143720 (PpmMediaBufferingWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14015E3D4 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14015E3FC (PpmCheckResumeStatisticsCollection.c)
 *     PpmRegisterPerfCap @ 0x140170540 (PpmRegisterPerfCap.c)
 *     PpmHeteroHgsBackupInit @ 0x14019D188 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402EE0EC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402EFDE0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmParkSetLpiCap @ 0x1402F8664 (PpmParkSetLpiCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x140300080 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1FCC (PpmParkInitSoftCoreParkingSupport.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PpmInfoReleaseLocks @ 0x14069E67C (PpmInfoReleaseLocks.c)
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x14072AA34 (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x14072F190 (PpmPerfTelemetryWorker.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074501C (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140776D6C (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x14077FA64 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x14078BE00 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x14078CE60 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408A4DA0 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408A6C10 (PpmPerfGetBrandedFrequency.c)
 *     PpmUpdatePerfStates @ 0x1408A6E10 (PpmUpdatePerfStates.c)
 *     PpmParkApplyForcedMask @ 0x1408A8A58 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408A8B6C (PpmParkClearForcedMask.c)
 *     PdcPoPpmResetProfile @ 0x1408AB0A0 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408B1D10 (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x1408B6354 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408B64C4 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x1408B68F0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408B7380 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A1A484 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
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

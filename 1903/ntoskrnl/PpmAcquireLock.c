/*
 * XREFs of PpmAcquireLock @ 0x1400EDD3C
 * Callers:
 *     PoNotifyVSyncChange @ 0x1400EDA70 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x1401431E0 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x1401444A0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14015DD08 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14015DD5C (PpmCheckResumeStatisticsCollection.c)
 *     PpmRegisterPerfCap @ 0x14016FE50 (PpmRegisterPerfCap.c)
 *     PpmPerfClearBootOverrides @ 0x14017D844 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x140193750 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x14019CA08 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402EE38C (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402F0080 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmParkSetLpiCap @ 0x1402F8BB4 (PpmParkSetLpiCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x1403005D0 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140300A40 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1C60 (PpmParkInitSoftCoreParkingSupport.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1406A0614 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x1406A0B54 (PpmSetProfilePolicySetting.c)
 *     PpmPerfReApplyStates @ 0x140724558 (PpmPerfReApplyStates.c)
 *     PopEnforceResiliencyScenarios @ 0x1407296C4 (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x14072D2C0 (PpmPerfTelemetryWorker.c)
 *     PopPerfBoostPowerRequest @ 0x140743070 (PopPerfBoostPowerRequest.c)
 *     PpmEnableProfile @ 0x1407495E4 (PpmEnableProfile.c)
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     PpmHvEnableQosEnlightenment @ 0x14077369C (PpmHvEnableQosEnlightenment.c)
 *     PpmReapplyPerfPolicy @ 0x14077378C (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x14077D144 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407899A0 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x14078A450 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x14078A980 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408A5560 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408A73B0 (PpmPerfGetBrandedFrequency.c)
 *     PpmUpdatePerfStates @ 0x1408A75B0 (PpmUpdatePerfStates.c)
 *     PpmParkApplyForcedMask @ 0x1408A91F8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408A930C (PpmParkClearForcedMask.c)
 *     PdcPoPpmResetProfile @ 0x1408AB840 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408B27D0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x1408B6A84 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408B6BF4 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1408B6F7C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x1408B7020 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408B7AB0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmInitPolicyConfiguration @ 0x1409ED550 (PpmInitPolicyConfiguration.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *__fastcall PpmAcquireLock(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  KeWaitForSingleObject(a1 + 1, Executive, 0, 0, 0LL);
  result = KeGetCurrentThread();
  *a1 = result;
  return result;
}

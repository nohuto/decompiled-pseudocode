/*
 * XREFs of PpmAcquireLock @ 0x140006020
 * Callers:
 *     PoNotifyVSyncChange @ 0x140005D70 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14013F0A0 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14013FCD0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1401429CC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x140142A20 (PpmCheckResumeStatisticsCollection.c)
 *     PpmPerfClearBootOverrides @ 0x140174728 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x1401895D0 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x140192B80 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402D3EAC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402D5BB0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x1402DB5A0 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x1402E3A00 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1402E3E70 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkSetLpiCap @ 0x1402E81E0 (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x14058AE14 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x14058BBB4 (PpmSetProfilePolicySetting.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PpmPerfReApplyStates @ 0x1406DE270 (PpmPerfReApplyStates.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E3304 (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x1407075E0 (PpmPerfTelemetryWorker.c)
 *     PopPerfBoostPowerRequest @ 0x14071ADD0 (PopPerfBoostPowerRequest.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140750214 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140757D74 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x14075800C (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407640D0 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x140764C40 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x140765460 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14086A190 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086C34C (PpmPerfGetBrandedFrequency.c)
 *     PpmUpdatePerfStates @ 0x14086C540 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x14086FF50 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140876C80 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x14087B730 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14087B8A0 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14087BBFC (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x14087BCA0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14087C790 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14087D794 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14087D868 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1409D8234 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
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

/*
 * XREFs of PpmAcquireLock @ 0x140006020
 * Callers:
 *     PoNotifyVSyncChange @ 0x140005D70 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14013EF80 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14013FBB0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1401428AC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x140142900 (PpmCheckResumeStatisticsCollection.c)
 *     PpmPerfClearBootOverrides @ 0x140174608 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x140189470 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x140192A20 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402D3BBC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402D58C0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x1402DB2B0 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x1402E3710 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1402E3B80 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkSetLpiCap @ 0x1402E7EF0 (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x140589E14 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x14058ABB4 (PpmSetProfilePolicySetting.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PpmPerfReApplyStates @ 0x1406DCFF0 (PpmPerfReApplyStates.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E2084 (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x140706360 (PpmPerfTelemetryWorker.c)
 *     PopPerfBoostPowerRequest @ 0x140719B50 (PopPerfBoostPowerRequest.c)
 *     PpmRegisterPerfStates @ 0x14074E4DC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE58 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14074F044 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140756BA4 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x140756E3C (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x140762F00 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x140763A70 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x140764290 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140868F50 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086B10C (PpmPerfGetBrandedFrequency.c)
 *     PpmUpdatePerfStates @ 0x14086B300 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x14086ED10 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140875A40 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x14087A4F0 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14087A660 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14087A9BC (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x14087AA60 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14087B550 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14087C554 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14087C628 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1409D7234 (PpmInitPolicyConfiguration.c)
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

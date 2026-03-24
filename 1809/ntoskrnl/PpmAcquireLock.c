/*
 * XREFs of PpmAcquireLock @ 0x140006020
 * Callers:
 *     PoNotifyVSyncChange @ 0x140005D70 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14013EFA0 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14013FBD0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1401428CC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x140142920 (PpmCheckResumeStatisticsCollection.c)
 *     PpmPerfClearBootOverrides @ 0x140174628 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x140189490 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x140192A40 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402D3CBC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402D59C0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x1402DB3B0 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x1402E3810 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1402E3C80 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkSetLpiCap @ 0x1402E7FF0 (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x140589E14 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x14058ABB4 (PpmSetProfilePolicySetting.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PpmPerfReApplyStates @ 0x1406DCFD0 (PpmPerfReApplyStates.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E2064 (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x140706340 (PpmPerfTelemetryWorker.c)
 *     PopPerfBoostPowerRequest @ 0x140719B30 (PopPerfBoostPowerRequest.c)
 *     PpmRegisterPerfStates @ 0x14074E4BC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE38 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14074F024 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140756B84 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x140756E1C (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x140762EE0 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x140763A50 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x140764270 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140868F30 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086B0EC (PpmPerfGetBrandedFrequency.c)
 *     PpmUpdatePerfStates @ 0x14086B2E0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x14086ECF0 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140875A20 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x14087A4D0 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14087A640 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14087A99C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x14087AA40 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14087B530 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14087C534 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14087C608 (PpmParkClearForcedMask.c)
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

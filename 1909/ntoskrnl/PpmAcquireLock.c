/*
 * XREFs of PpmAcquireLock @ 0x1400F0BFC
 * Callers:
 *     PoNotifyVSyncChange @ 0x1400F0930 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140143720 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x1401449E0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14015E3A8 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14015E3FC (PpmCheckResumeStatisticsCollection.c)
 *     PpmRegisterPerfCap @ 0x140170540 (PpmRegisterPerfCap.c)
 *     PpmPerfClearBootOverrides @ 0x14017DF34 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x140193F30 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x14019D188 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402EE0EC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402EFDE0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmParkSetLpiCap @ 0x1402F8664 (PpmParkSetLpiCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x140300080 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1403004F0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1FCC (PpmParkInitSoftCoreParkingSupport.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PpmSetProfilePolicySetting @ 0x14069D694 (PpmSetProfilePolicySetting.c)
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 *     PpmPerfReApplyStates @ 0x1407263F8 (PpmPerfReApplyStates.c)
 *     PopEnforceResiliencyScenarios @ 0x14072AA34 (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x14072F190 (PpmPerfTelemetryWorker.c)
 *     PopPerfBoostPowerRequest @ 0x140744F70 (PopPerfBoostPowerRequest.c)
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PpmHvEnableQosEnlightenment @ 0x140776C7C (PpmHvEnableQosEnlightenment.c)
 *     PpmReapplyPerfPolicy @ 0x140776D6C (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x14077FA64 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x14077FF38 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x14078BE00 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x14078C8B0 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x14078CE60 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408A4DA0 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408A6C10 (PpmPerfGetBrandedFrequency.c)
 *     PpmUpdatePerfStates @ 0x1408A6E10 (PpmUpdatePerfStates.c)
 *     PpmParkApplyForcedMask @ 0x1408A8A58 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408A8B6C (PpmParkClearForcedMask.c)
 *     PdcPoPpmResetProfile @ 0x1408AB0A0 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408B2030 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x1408B6354 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408B64C4 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1408B684C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x1408B68F0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408B7380 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A1A484 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
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

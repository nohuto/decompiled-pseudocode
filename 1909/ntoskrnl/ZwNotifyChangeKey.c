/*
 * XREFs of ZwNotifyChangeKey @ 0x1401C2ED0
 * Callers:
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x14018B050 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     PspReadDfssConfigurationValues @ 0x140306430 (PspReadDfssConfigurationValues.c)
 *     PopUpdateUpgradeInProgress @ 0x1405B1930 (PopUpdateUpgradeInProgress.c)
 *     PnpWatchdogBugcheckConfigure @ 0x1406F0194 (PnpWatchdogBugcheckConfigure.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14075F7D0 (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x140764054 (ExpReadLeapSecondData.c)
 *     IopRegistryInitializeCallbacks @ 0x140768A74 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x140768B90 (IopRegistryCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x14085CA58 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1408A1770 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140A19260 (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}

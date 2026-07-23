/*
 * XREFs of ZwNotifyChangeKey @ 0x1401BA550
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x1402E95A0 (PspReadDfssConfigurationValues.c)
 *     PopUpdateUpgradeInProgress @ 0x140583490 (PopUpdateUpgradeInProgress.c)
 *     PnpWatchdogBugcheckConfigure @ 0x14071018C (PnpWatchdogBugcheckConfigure.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14072AAF0 (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x1407354CC (ExpReadLeapSecondData.c)
 *     PnpWatchdogSetupInProgressConfigure @ 0x14073D330 (PnpWatchdogSetupInProgressConfigure.c)
 *     IopRegistryInitializeCallbacks @ 0x14074C898 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x14074C9B0 (IopRegistryCallback.c)
 *     PfpParametersWatcher @ 0x140866C70 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x1409D5634 (PfInitializeSuperfetch.c)
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

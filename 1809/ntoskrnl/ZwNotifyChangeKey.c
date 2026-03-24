/*
 * XREFs of ZwNotifyChangeKey @ 0x1401BA3F0
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x1402E93B0 (PspReadDfssConfigurationValues.c)
 *     PopUpdateUpgradeInProgress @ 0x140582490 (PopUpdateUpgradeInProgress.c)
 *     PnpWatchdogBugcheckConfigure @ 0x14070EEEC (PnpWatchdogBugcheckConfigure.c)
 *     PopPowerButtonBugcheckConfigure @ 0x140729900 (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x1407342DC (ExpReadLeapSecondData.c)
 *     PnpWatchdogSetupInProgressConfigure @ 0x14073C140 (PnpWatchdogSetupInProgressConfigure.c)
 *     IopRegistryInitializeCallbacks @ 0x14074B6A8 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x14074B7C0 (IopRegistryCallback.c)
 *     PfpParametersWatcher @ 0x140865A10 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x1409D4634 (PfInitializeSuperfetch.c)
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
  return KiServiceInternal(KeyHandle, Event, ApcRoutine);
}

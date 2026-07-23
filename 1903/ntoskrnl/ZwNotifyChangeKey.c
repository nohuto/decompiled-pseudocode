/*
 * XREFs of ZwNotifyChangeKey @ 0x1401C2350
 * Callers:
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x14018A6C0 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     PspReadDfssConfigurationValues @ 0x140306980 (PspReadDfssConfigurationValues.c)
 *     PnpWatchdogBugcheckConfigure @ 0x1406EE644 (PnpWatchdogBugcheckConfigure.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14075AF40 (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x14075F730 (ExpReadLeapSecondData.c)
 *     IopRegistryInitializeCallbacks @ 0x140763F6C (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x140764090 (IopRegistryCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x14085D358 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1408A1F30 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140A18DA0 (PfInitializeSuperfetch.c)
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

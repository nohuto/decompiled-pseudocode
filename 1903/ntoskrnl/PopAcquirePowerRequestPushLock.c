/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x1406A0544
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400EC750 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PoClearPowerRequestInternal @ 0x1400EC820 (PoClearPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 *     PoSetPowerRequestInternal @ 0x1400ECD64 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14015C974 (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopDiagTraceControlCallback @ 0x14069D910 (PopDiagTraceControlCallback.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x14069DE44 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopCreateUserPowerRequest @ 0x14069DFD4 (PopCreateUserPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x14069F1D4 (PopCreatePowerRequestObject.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406A057C (PopHandleConvergedPowerRequestUpdate.c)
 *     PopCreateKernelPowerRequest @ 0x140739C54 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x140789730 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x140789E90 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x1408A28AC (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408A2940 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408A2970 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408A2A34 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408A2AA8 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopSetSpecialRequest @ 0x1408A2B20 (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x1408A51BC (PopGetPowerRequestListInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 )
    return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return (struct _KTHREAD *)ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerRequestLock, 0LL);
}

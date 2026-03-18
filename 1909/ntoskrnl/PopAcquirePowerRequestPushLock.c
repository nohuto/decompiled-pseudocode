/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x1406719F8
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 *     PoSetPowerRequestInternal @ 0x1400D6518 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x1400D6A84 (PoClearPowerRequestInternal.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400D88B0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14015D014 (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x140671960 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x1406B3D08 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopCreateUserPowerRequest @ 0x1406B3DA4 (PopCreateUserPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x1406B3EBC (PopCreatePowerRequestObject.c)
 *     PopDiagTraceControlCallback @ 0x1406EFCB0 (PopDiagTraceControlCallback.c)
 *     PopCreateKernelPowerRequest @ 0x14073BEE4 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x14078BB90 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x14078C2F0 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x1408A20EC (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408A2180 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408A21B0 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408A2274 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408A22E8 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopSetSpecialRequest @ 0x1408A2360 (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x1408A49FC (PopGetPowerRequestListInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
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

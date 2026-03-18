/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x140589D50
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400027C4 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140002E88 (PoSetPowerRequestInternal.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14000327C (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x140141E80 (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopDiagTraceControlCallback @ 0x140587FE0 (PopDiagTraceControlCallback.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x140588440 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopCreateUserPowerRequest @ 0x140588C2C (PopCreateUserPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x140588F40 (PopCreatePowerRequestObject.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x140589D88 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopCreateKernelPowerRequest @ 0x140701234 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x140762BA0 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407634B0 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x14086638C (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x140866440 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x140866470 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x140866534 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408665A8 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopSetSpecialRequest @ 0x140866620 (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x140868CAC (PopGetPowerRequestListInfo.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
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

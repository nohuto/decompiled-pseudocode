/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x14058AD50
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400027C4 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140002E88 (PoSetPowerRequestInternal.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14000327C (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x140141FA0 (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopDiagTraceControlCallback @ 0x140588FE0 (PopDiagTraceControlCallback.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x140589440 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopCreateUserPowerRequest @ 0x140589C2C (PopCreateUserPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x140589F40 (PopCreatePowerRequestObject.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14058AD88 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopCreateKernelPowerRequest @ 0x1407024B4 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x140763D70 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x140764680 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x1408675CC (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x140867680 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408676B0 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x140867774 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408677E8 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopSetSpecialRequest @ 0x140867860 (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x140869EEC (PopGetPowerRequestListInfo.c)
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

/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8
 * Callers:
 *     NVMeBuildPollingConfiguration @ 0x1C0013FC8 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C0014144 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C0014250 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0014580 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014668 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00147FC (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00148EC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0014AC4 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014BB4 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0014D34 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0014F10 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C00153CC (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0015510 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0015668 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001595C (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0015A94 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016B28 (NVMeNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C00177B8 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0017B34 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetArbitration @ 0x1C0017E98 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0017FB8 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00180A0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C0018258 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001836C (NVMeSetIoQueueCount.c)
 *     NVMeSetPowerState @ 0x1C001878C (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C00189F8 (NVMeSyncHostTime.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     RequestPendingCompletion @ 0x1C0004BA0 (RequestPendingCompletion.c)
 *     IsInternalSrb @ 0x1C0007E68 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C0008F48 (GetLocalCommand.c)
 *     NVMeRequestComplete @ 0x1C000D8E8 (NVMeRequestComplete.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C0015C10 (NVMeLogTelemetryWaitForCmdComplete.c)
 *     ProcessCompletionQueues @ 0x1C0018BE0 (ProcessCompletionQueues.c)
 */

_DWORD *__fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  _DWORD *result; // rax
  char v9; // r15
  char v10; // r12
  __int64 v11; // r13
  bool v12; // r11
  unsigned int v13; // esi
  _DWORD *LocalCommand; // rax

  result = (_DWORD *)GetSrbExtension(a2);
  v9 = 0;
  v10 = 0;
  v11 = (__int64)result;
  v12 = 1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 144) + 40LL) == -1LL )
  {
    *(_BYTE *)(a2 + 3) = 8;
  }
  else
  {
    v13 = 0;
    if ( !a4 )
      goto LABEL_17;
    do
    {
      if ( !v12 )
        break;
      if ( a3 && !v9 && RequestPendingCompletion(a1, 0) )
      {
        ProcessCompletionQueues(a1, 0, a3);
        v9 = 1;
      }
      StorPortExtendedFunction(81LL, a1, 1000LL);
      if ( IsInternalSrb(a1, a2) )
      {
        LocalCommand = (_DWORD *)GetLocalCommand(a1, a2);
        v12 = LocalCommand && *LocalCommand == 1;
      }
      else
      {
        v12 = (*(_BYTE *)(v11 + 4253) & 8) == 0;
      }
      ++v13;
    }
    while ( v13 < a4 );
    if ( v13 >= a4 )
    {
LABEL_17:
      v10 = 1;
      *(_BYTE *)(a2 + 3) = (*(_QWORD *)(*(_QWORD *)(a1 + 144) + 40LL) != -1LL) + 8;
    }
    result = (_DWORD *)NVMeLogTelemetryWaitForCmdComplete(a1, a2, a4, v13);
    if ( v10 )
      return NVMeRequestComplete(a1, a2, 0);
  }
  return result;
}

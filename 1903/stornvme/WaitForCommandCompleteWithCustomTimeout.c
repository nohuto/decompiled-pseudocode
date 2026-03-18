/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8
 * Callers:
 *     NVMeBuildPollingConfiguration @ 0x1C0014078 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C00141F4 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C0014300 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0014630 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014718 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00148AC (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001499C (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0014B74 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014C64 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0014DE4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0014FC0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001547C (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C00155C0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0015718 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0015A0C (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0015B44 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016BD8 (NVMeNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0017868 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0017BE4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetArbitration @ 0x1C0017F48 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0018068 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0018150 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C0018308 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001841C (NVMeSetIoQueueCount.c)
 *     NVMeSetPowerState @ 0x1C001883C (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C0018AA8 (NVMeSyncHostTime.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     RequestPendingCompletion @ 0x1C0004640 (RequestPendingCompletion.c)
 *     IsInternalSrb @ 0x1C0008028 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C00090F8 (GetLocalCommand.c)
 *     NVMeRequestComplete @ 0x1C000D9D8 (NVMeRequestComplete.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C0015CC0 (NVMeLogTelemetryWaitForCmdComplete.c)
 *     ProcessCompletionQueues @ 0x1C0018C90 (ProcessCompletionQueues.c)
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

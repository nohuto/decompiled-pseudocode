/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006BD0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0014798 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C0014908 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C0014A14 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0014D50 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014E38 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0014FC8 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00150B8 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0015290 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0015380 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C00154FC (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCommandEffectsLog @ 0x1C00156E0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001586C (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C00159B0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0015B08 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0015E0C (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0015F44 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016438 (NVMeNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0016A24 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0016DA0 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetArbitration @ 0x1C0017108 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0017228 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0017310 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C00174C4 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C00175D8 (NVMeSetIoQueueCount.c)
 *     NVMeSetPowerState @ 0x1C00179EC (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C0017ACC (NVMeSyncHostTime.c)
 * Callees:
 *     GetLocalCommand @ 0x1C00014F8 (GetLocalCommand.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     RequestPendingCompletion @ 0x1C00060D0 (RequestPendingCompletion.c)
 *     IsInternalSrb @ 0x1C000ABFC (IsInternalSrb.c)
 *     NVMeRequestComplete @ 0x1C000F7AC (NVMeRequestComplete.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C00162BC (NVMeLogTelemetryWaitForCmdComplete.c)
 *     ProcessCompletionQueues @ 0x1C0017CAC (ProcessCompletionQueues.c)
 */

_DWORD *__fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  _DWORD *result; // rax
  __int64 v9; // r9
  char v10; // r15
  char v11; // r12
  __int64 v12; // r13
  bool v13; // r11
  unsigned int v14; // esi
  _DWORD *LocalCommand; // rax

  result = (_DWORD *)GetSrbExtension(a2);
  v10 = 0;
  v11 = 0;
  v12 = (__int64)result;
  v13 = 1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 136) + 40LL) == -1LL )
  {
    *(_BYTE *)(a2 + 3) = 8;
  }
  else
  {
    v14 = 0;
    if ( !a4 )
      goto LABEL_17;
    do
    {
      if ( !v13 )
        break;
      if ( a3 && !v10 && RequestPendingCompletion(a1, 0) )
      {
        ProcessCompletionQueues(a1, 0, a3);
        v10 = 1;
      }
      StorPortExtendedFunction(81LL, a1, 1000LL, v9);
      if ( IsInternalSrb(a1, a2) )
      {
        LocalCommand = (_DWORD *)GetLocalCommand(a1, a2);
        v13 = LocalCommand && *LocalCommand == 1;
      }
      else
      {
        v13 = (*(_BYTE *)(v12 + 4253) & 8) == 0;
      }
      ++v14;
    }
    while ( v14 < a4 );
    if ( v14 >= a4 )
    {
LABEL_17:
      v11 = 1;
      *(_BYTE *)(a2 + 3) = (*(_QWORD *)(*(_QWORD *)(a1 + 136) + 40LL) != -1LL) + 8;
    }
    result = (_DWORD *)NVMeLogTelemetryWaitForCmdComplete(a1, a2, a4, v14);
    if ( v11 )
      return NVMeRequestComplete(a1, a2, 0);
  }
  return result;
}

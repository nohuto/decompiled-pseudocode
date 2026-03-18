/*
 * XREFs of ProcessCommand @ 0x1C0002018
 * Callers:
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0001E40 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0011C80 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C0011E90 (NVMeSplitIoCommandCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C0012260 (ProtocolCommandCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0012B50 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0012D10 (QueryTemperatureThresholdCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013990 (NVMeAsyncEventRequestCompletion.c)
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
 *     NVMeIssueAsyncEventCommand @ 0x1C0015B6C (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016B28 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0017364 (NVMeReenumerateNameSpaceIdentify.c)
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
 *     ProcessCommandInSpecificQueue @ 0x1C0002320 (ProcessCommandInSpecificQueue.c)
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x1C000D8E8 (NVMeRequestComplete.c)
 */

__int64 __fastcall ProcessCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 SrbExtension; // rbp
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r15
  __int64 v8; // rsi
  __int64 result; // rax
  unsigned int v10; // eax
  int v11; // r14d
  unsigned int v12; // r12d
  unsigned __int16 v13; // ax

  SrbExtension = GetSrbExtension(a2);
  v6 = *(_WORD *)(SrbExtension + 4244);
  if ( v6 )
  {
    v7 = *(_WORD *)(a1 + 270);
    v8 = 136LL * v6 + *(_QWORD *)(a1 + 760) - 136LL;
  }
  else
  {
    v7 = *(_WORD *)(a1 + 268);
    v8 = a1 + 280;
  }
  result = ProcessCommandInSpecificQueue(a1, v4, v8, v7);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a2 + 3) == 5
      && *(_WORD *)(v8 + 40)
      && (v10 = *(unsigned __int16 *)(a1 + 272), v11 = 0, *(_BYTE *)(SrbExtension + 4253) |= 0x10u, (v12 = v10) != 0) )
    {
      while ( 1 )
      {
        v13 = 1;
        if ( ((unsigned int)*(unsigned __int16 *)(v8 + 40) + 1) % *(unsigned __int16 *)(a1 + 272) )
          v13 = ((unsigned int)*(unsigned __int16 *)(v8 + 40) + 1) % *(unsigned __int16 *)(a1 + 272);
        *(_WORD *)(SrbExtension + 4244) = v13;
        v8 = 136LL * v13 + *(_QWORD *)(a1 + 760) - 136LL;
        result = ProcessCommandInSpecificQueue(a1, a2, v8, v7);
        if ( (_BYTE)result )
          break;
        if ( *(_BYTE *)(a2 + 3) == 5 && ++v11 < v12 )
          continue;
        return NVMeRequestComplete(a1, a2, 0LL);
      }
    }
    else
    {
      return NVMeRequestComplete(a1, a2, 0LL);
    }
  }
  return result;
}

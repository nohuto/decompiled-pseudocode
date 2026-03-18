/*
 * XREFs of ProcessCommand @ 0x1C0002B4C
 * Callers:
 *     NVMeAsyncEventRequestCompletion @ 0x1C00012C0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000176C (NVMeIssueAsyncEventCommand.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003AE0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006BD0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0007714 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0012B80 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C0012D90 (NVMeSplitIoCommandCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C0013170 (ProtocolCommandCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0013980 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0013B40 (QueryTemperatureThresholdCompletion.c)
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
 *     ProcessCommandInSpecificQueue @ 0x1C0002E50 (ProcessCommandInSpecificQueue.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x1C000F7AC (NVMeRequestComplete.c)
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
    v7 = *(_WORD *)(a1 + 262);
    v8 = 136LL * v6 + *(_QWORD *)(a1 + 752) - 136LL;
  }
  else
  {
    v7 = *(_WORD *)(a1 + 260);
    v8 = a1 + 272;
  }
  result = ProcessCommandInSpecificQueue(a1, v4, v8, v7);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a2 + 3) == 5
      && *(_WORD *)(v8 + 40)
      && (v10 = *(unsigned __int16 *)(a1 + 264), v11 = 0, *(_BYTE *)(SrbExtension + 4253) |= 0x10u, (v12 = v10) != 0) )
    {
      while ( 1 )
      {
        v13 = 1;
        if ( ((unsigned int)*(unsigned __int16 *)(v8 + 40) + 1) % *(unsigned __int16 *)(a1 + 264) )
          v13 = ((unsigned int)*(unsigned __int16 *)(v8 + 40) + 1) % *(unsigned __int16 *)(a1 + 264);
        *(_WORD *)(SrbExtension + 4244) = v13;
        v8 = 136LL * v13 + *(_QWORD *)(a1 + 752) - 136LL;
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

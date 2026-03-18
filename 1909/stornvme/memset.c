/*
 * XREFs of memset @ 0x1C0005980
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x1C00013BC (FormInquiryBlockLimitsData.c)
 *     FirmwareGetInfo @ 0x1C0001560 (FirmwareGetInfo.c)
 *     SglToPrp @ 0x1C0001888 (SglToPrp.c)
 *     ScsiUnmapRequest @ 0x1C0001A10 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001BC0 (ScsiModeSenseRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0001E40 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     NVMeHwBuildIo @ 0x1C0003040 (NVMeHwBuildIo.c)
 *     DriverEntry @ 0x1C0007D44 (DriverEntry.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0007EAC (NVMeControllerStartFailureEventLog.c)
 *     NVMeHwFindAdapter @ 0x1C0007F40 (NVMeHwFindAdapter.c)
 *     AdminQueuesFreeResources @ 0x1C0008928 (AdminQueuesFreeResources.c)
 *     GetInterruptMessageInformation @ 0x1C0008D70 (GetInterruptMessageInformation.c)
 *     GetProcessorInformation @ 0x1C0009134 (GetProcessorInformation.c)
 *     InitializePerfOptions @ 0x1C0009510 (InitializePerfOptions.c)
 *     NVMeControllerRemove @ 0x1C000B4D4 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000B894 (NVMeControllerStop.c)
 *     NVMeInitStreams @ 0x1C000BD00 (NVMeInitStreams.c)
 *     NVMeLogTelemetry @ 0x1C000C25C (NVMeLogTelemetry.c)
 *     FormInquiryStandardData @ 0x1C000EAF0 (FormInquiryStandardData.c)
 *     GetStreamId @ 0x1C000EE2C (GetStreamId.c)
 *     IoctlCreateReservedQueuePair @ 0x1C000EF28 (IoctlCreateReservedQueuePair.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F850 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000FC34 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000FF48 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0010100 (IoctlStorageStreamsGetParameters.c)
 *     LogSenseInformationalExceptions @ 0x1C00105E4 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C00107C4 (LogSenseTemperature.c)
 *     MdlToPrp @ 0x1C001094C (MdlToPrp.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0011950 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetRichDeviceDescription @ 0x1C0011BB8 (NVMeGetRichDeviceDescription.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0011C80 (NVMeSetFeaturesCachePhase1Completion.c)
 *     ProtocolCommandCompletion @ 0x1C0012260 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00129E4 (QueryProtocolInfoIdentifyData.c)
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
 *     NVMeReenumerateCompareAndMerge @ 0x1C0016E7C (NVMeReenumerateCompareAndMerge.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0017364 (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0017540 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
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
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}

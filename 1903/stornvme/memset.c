/*
 * XREFs of memset @ 0x1C0005400
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x1C00013BC (FormInquiryBlockLimitsData.c)
 *     FirmwareGetInfo @ 0x1C0001560 (FirmwareGetInfo.c)
 *     SglToPrp @ 0x1C0001888 (SglToPrp.c)
 *     ScsiUnmapRequest @ 0x1C0001A10 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001BC0 (ScsiModeSenseRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0001E40 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     NVMeHwBuildIo @ 0x1C0002F70 (NVMeHwBuildIo.c)
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 *     DriverEntry @ 0x1C0007F04 (DriverEntry.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C000806C (NVMeControllerStartFailureEventLog.c)
 *     NVMeHwFindAdapter @ 0x1C0008100 (NVMeHwFindAdapter.c)
 *     AdminQueuesFreeResources @ 0x1C0008AD8 (AdminQueuesFreeResources.c)
 *     GetInterruptMessageInformation @ 0x1C0008F20 (GetInterruptMessageInformation.c)
 *     GetProcessorInformation @ 0x1C00092E4 (GetProcessorInformation.c)
 *     InitializePerfOptions @ 0x1C00096C0 (InitializePerfOptions.c)
 *     NVMeControllerRemove @ 0x1C000B684 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000B984 (NVMeControllerStop.c)
 *     NVMeInitStreams @ 0x1C000BDF0 (NVMeInitStreams.c)
 *     NVMeLogTelemetry @ 0x1C000C34C (NVMeLogTelemetry.c)
 *     FormInquiryStandardData @ 0x1C000EBC0 (FormInquiryStandardData.c)
 *     GetStreamId @ 0x1C000EEFC (GetStreamId.c)
 *     IoctlCreateReservedQueuePair @ 0x1C000EFF8 (IoctlCreateReservedQueuePair.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F920 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000FD04 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0010018 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C00101D0 (IoctlStorageStreamsGetParameters.c)
 *     LogSenseInformationalExceptions @ 0x1C00106B4 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0010894 (LogSenseTemperature.c)
 *     MdlToPrp @ 0x1C0010A1C (MdlToPrp.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0011A20 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetRichDeviceDescription @ 0x1C0011C88 (NVMeGetRichDeviceDescription.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0011D50 (NVMeSetFeaturesCachePhase1Completion.c)
 *     ProtocolCommandCompletion @ 0x1C0012330 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0012AA4 (QueryProtocolInfoIdentifyData.c)
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
 *     NVMeIssueAsyncEventCommand @ 0x1C0015C1C (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016BD8 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateCompareAndMerge @ 0x1C0016F2C (NVMeReenumerateCompareAndMerge.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0017414 (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C00175F0 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
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

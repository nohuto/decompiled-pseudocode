/*
 * XREFs of memset @ 0x1C0007F80
 * Callers:
 *     NVMeIssueAsyncEventCommand @ 0x1C000176C (NVMeIssueAsyncEventCommand.c)
 *     FirmwareGetInfo @ 0x1C0002370 (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C0002878 (ScsiModeSenseRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003AE0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiUnmapRequest @ 0x1C0003E84 (ScsiUnmapRequest.c)
 *     NVMeHwBuildIo @ 0x1C0004040 (NVMeHwBuildIo.c)
 *     MdlToPrp @ 0x1C0004B10 (MdlToPrp.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     FormInquiryStandardData @ 0x1C00058C0 (FormInquiryStandardData.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006BD0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C00070CC (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0007714 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     DriverEntry @ 0x1C000AAC8 (DriverEntry.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C000AC40 (NVMeControllerStartFailureEventLog.c)
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     AdminQueuesFreeResources @ 0x1C000B698 (AdminQueuesFreeResources.c)
 *     GetInterruptMessageInformation @ 0x1C000BABC (GetInterruptMessageInformation.c)
 *     GetProcessorInformation @ 0x1C000BE24 (GetProcessorInformation.c)
 *     InitializePerfOptions @ 0x1C000C200 (InitializePerfOptions.c)
 *     NVMeControllerRemove @ 0x1C000DF24 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000E2F8 (NVMeControllerStop.c)
 *     GetStreamId @ 0x1C00104B0 (GetStreamId.c)
 *     IoctlCreateReservedQueuePair @ 0x1C001057C (IoctlCreateReservedQueuePair.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011050 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0011488 (IoctlStorageStreamsGetParameters.c)
 *     LogSenseInformationalExceptions @ 0x1C0011954 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0011B30 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0012308 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0012880 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetRichDeviceDescription @ 0x1C0012ABC (NVMeGetRichDeviceDescription.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0012B80 (NVMeSetFeaturesCachePhase1Completion.c)
 *     ProtocolCommandCompletion @ 0x1C0013170 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00137FC (QueryProtocolInfoIdentifyData.c)
 *     SglToPrp @ 0x1C00144B0 (SglToPrp.c)
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
 *     NVMeLogTelemetry @ 0x1C001601C (NVMeLogTelemetry.c)
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

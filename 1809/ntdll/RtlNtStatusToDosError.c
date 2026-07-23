/*
 * XREFs of RtlNtStatusToDosError @ 0x18004EDE0
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x18000199C (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x180001D60 (EtwReplyNotification.c)
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlSizeHeap @ 0x1800178D0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180018460 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     EtwpRegisterProvider @ 0x180020B38 (EtwpRegisterProvider.c)
 *     EtwpStopUmLogger @ 0x18004CFF4 (EtwpStopUmLogger.c)
 *     EtwLogTraceEvent @ 0x18004D760 (EtwLogTraceEvent.c)
 *     EtwpEventWriteFull @ 0x18004DCF4 (EtwpEventWriteFull.c)
 *     EtwTraceMessageVa @ 0x18004EB50 (EtwTraceMessageVa.c)
 *     EtwSendNotification @ 0x18004EC20 (EtwSendNotification.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18004ED40 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwpStartUmLogger @ 0x18004FFC8 (EtwpStartUmLogger.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005A560 (EtwpFinalizeLogFileHeader.c)
 *     RtlGetUserInfoHeap @ 0x18005AC60 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18005AFE0 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x18006D290 (RtlValidateHeap.c)
 *     EtwEventActivityIdControl @ 0x18006DBD0 (EtwEventActivityIdControl.c)
 *     EtwpSetProviderTraits @ 0x1800760F4 (EtwpSetProviderTraits.c)
 *     EtwWriteUMSecurityEvent @ 0x18007C000 (EtwWriteUMSecurityEvent.c)
 *     EtwEventWriteNoRegistration @ 0x180086E80 (EtwEventWriteNoRegistration.c)
 *     EtwpGenerateFileName @ 0x1800888D4 (EtwpGenerateFileName.c)
 *     RtlCompactHeap @ 0x18008C0A0 (RtlCompactHeap.c)
 *     EtwSetMark @ 0x18008C340 (EtwSetMark.c)
 *     EtwpTrackProviderBinary @ 0x18008D304 (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008F430 (EtwRegisterSecurityProvider.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2680 (RtlSetUserFlagsHeap.c)
 *     RtlDebugAllocateHeap @ 0x1801071A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180107568 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1801079B0 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180107BB4 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180107EB8 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010805C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108744 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180108910 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180108AA4 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180108C28 (RtlDebugWalkHeap.c)
 *     EtwEventWriteString @ 0x18010EB70 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x18010EDA0 (EtwpUseDescriptorType.c)
 *     EtwTraceEventInstance @ 0x18010EEF0 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x18010F094 (EtwpBufferingModeFlush.c)
 *     EtwpIncrementUmLoggerFile @ 0x18010F670 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x18010F7A8 (EtwpUpdateUmLogger.c)
 *     EtwpProviderArrivalCallback @ 0x18010FE08 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  unsigned __int32 v1; // edx
  struct _TEB *v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  bool v9; // zf
  int v10; // eax

  v1 = Status;
  v2 = NtCurrentTeb();
  if ( v2 )
    v2->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  if ( (Status & 0x20000000) != 0 )
  {
    return Status;
  }
  else if ( (Status & 0xFF0000) != 0x70000 || ((HIBYTE(Status) - 128) & 0xFFFFFFBF) != 0 )
  {
    if ( (Status & 0xF0000000) == 0xD0000000 )
      v1 = Status & 0xCFFFFFFF;
    v3 = 0;
    v4 = 310;
    do
    {
      v5 = (v4 + v3) >> 1;
      v6 = RtlpRunTable[2 * v5];
      v7 = v1 - v6;
      if ( v1 < v6 )
      {
        v4 = v5 - 1;
      }
      else
      {
        if ( v7 < (unsigned __int8)byte_18012B384[8 * v5] )
        {
          v9 = byte_18012B385[8 * v5] == 1;
          v10 = (unsigned __int16)word_18012B386[4 * v5];
          if ( v9 )
            return (unsigned __int16)RtlpStatusTable[v7 + v10];
          else
            return (unsigned __int16)RtlpStatusTable[2 * v7 + v10] | ((unsigned __int16)RtlpStatusTable[2 * v7 + 1 + v10] << 16);
        }
        v3 = v5 + 1;
      }
    }
    while ( v3 <= v4 );
    if ( (v1 & 0xFFFF0000) == 0xC0010000 )
      return (unsigned __int16)v1;
    DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v1);
    DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
    DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
    return 317;
  }
  else
  {
    return (unsigned __int16)v1;
  }
}

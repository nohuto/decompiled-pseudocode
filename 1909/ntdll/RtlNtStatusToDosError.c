/*
 * XREFs of RtlNtStatusToDosError @ 0x180053CB0
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x180001CE0 (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x180002310 (EtwReplyNotification.c)
 *     EtwpGenerateFileName @ 0x180002740 (EtwpGenerateFileName.c)
 *     EtwpStartUmLogger @ 0x1800059B8 (EtwpStartUmLogger.c)
 *     EtwpSetProviderTraits @ 0x18000A434 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18000A68C (EtwpRegisterProvider.c)
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     EtwpEventWriteFull @ 0x180052DD4 (EtwpEventWriteFull.c)
 *     EtwSendNotification @ 0x1800539F0 (EtwSendNotification.c)
 *     EtwTraceMessageVa @ 0x180053B40 (EtwTraceMessageVa.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180053C10 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwEventActivityIdControl @ 0x1800663E0 (EtwEventActivityIdControl.c)
 *     RtlGetUserInfoHeap @ 0x18006E580 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18006E8F0 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x1800705A0 (RtlValidateHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x180075E10 (EtwWriteUMSecurityEvent.c)
 *     EtwpTrackProviderBinary @ 0x180080930 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteNoRegistration @ 0x180083C90 (EtwEventWriteNoRegistration.c)
 *     EtwLogTraceEvent @ 0x1800872A0 (EtwLogTraceEvent.c)
 *     EtwpStopUmLogger @ 0x180087300 (EtwpStopUmLogger.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800878A0 (EtwpFinalizeLogFileHeader.c)
 *     EtwSetMark @ 0x180089960 (EtwSetMark.c)
 *     RtlCompactHeap @ 0x180089B20 (RtlCompactHeap.c)
 *     EtwRegisterSecurityProvider @ 0x18008C0C0 (EtwRegisterSecurityProvider.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF630 (RtlSetUserFlagsHeap.c)
 *     RtlDebugAllocateHeap @ 0x1801046F0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104AA4 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180104EEC (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1801050F0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1801053E8 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010558C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801056D8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105C34 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180105E00 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180105F94 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180106118 (RtlDebugWalkHeap.c)
 *     EtwEventWriteString @ 0x18010CC40 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x18010CE70 (EtwpUseDescriptorType.c)
 *     EtwTraceEventInstance @ 0x18010CFC0 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x18010D164 (EtwpBufferingModeFlush.c)
 *     EtwpIncrementUmLoggerFile @ 0x18010D73C (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x18010D9C8 (EtwpUpdateUmLogger.c)
 *     EtwpProviderArrivalCallback @ 0x18010E134 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
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
    v4 = 304;
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
        if ( v7 < (unsigned __int8)byte_180126124[8 * v5] )
        {
          v9 = byte_180126125[8 * v5] == 1;
          v10 = (unsigned __int16)word_180126126[4 * v5];
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

/*
 * XREFs of _TlgWrite @ 0x1C00073CC
 * Callers:
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004970 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     KbdClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C00049E8 (KbdClassTraceLoggingPrivilegeNotFoundForCreate.c)
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *(unsigned __int8 *)pEventMetadata << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)EventInformation;
  pData->Size = *(unsigned __int16 *)EventInformation;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, cData, pData);
}

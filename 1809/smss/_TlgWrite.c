/*
 * XREFs of _TlgWrite @ 0x140014A28
 * Callers:
 *     SmpCopyFile @ 0x1400137DC (SmpCopyFile.c)
 *     SmpSendPlatformBinaryStatus @ 0x140015C4C (SmpSendPlatformBinaryStatus.c)
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
  ULONG v6; // ecx
  _DWORD v8[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v8[0] = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  v8[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v9 = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)off_140024020;
  v6 = *(unsigned __int16 *)off_140024020;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v6;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, UINT32, EVENT_DATA_DESCRIPTOR *))EtwEventWriteTransfer)(
           qword_140024038,
           v8,
           0LL,
           0LL,
           cData,
           pData);
}

/*
 * XREFs of _TlgWrite @ 0x140011F6C
 * Callers:
 *     SmpCopyFile @ 0x140010D1C (SmpCopyFile.c)
 *     SmpSendPlatformBinaryStatus @ 0x1400130E8 (SmpSendPlatformBinaryStatus.c)
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
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v7[0] = *(unsigned __int8 *)pEventMetadata << 24;
  v7[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v8 = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)off_140021020;
  pData->Size = *(unsigned __int16 *)off_140021020;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, UINT32, EVENT_DATA_DESCRIPTOR *))EtwEventWriteTransfer)(
           qword_140021038,
           v7,
           0LL,
           0LL,
           cData,
           pData);
}

/*
 * XREFs of EtwEventWriteTransfer @ 0x180052D90
 * Callers:
 *     _TlgWrite @ 0x1800899FC (_TlgWrite.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x180052DD4 (EtwpEventWriteFull.c)
 */

ULONG __cdecl EtwEventWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwpEventWriteFull(
           RegHandle,
           (_DWORD)EventDescriptor,
           0,
           0,
           0,
           (__int64)ActivityId,
           (__int64)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}

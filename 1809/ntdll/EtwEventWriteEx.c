/*
 * XREFs of EtwEventWriteEx @ 0x18004DC60
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x18004DCF4 (EtwpEventWriteFull.c)
 */

ULONG __cdecl EtwEventWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwpEventWriteFull(
           RegHandle,
           (_DWORD)EventDescriptor,
           Filter,
           Flags,
           0,
           (__int64)ActivityId,
           (__int64)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}

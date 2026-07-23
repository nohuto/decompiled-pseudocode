/*
 * XREFs of EtwEventWriteEx @ 0x180052C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052D34 @ 0x180052D34 (sub_180052D34.c)
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
  return sub_180052D34(
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

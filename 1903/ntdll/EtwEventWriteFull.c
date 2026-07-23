/*
 * XREFs of EtwEventWriteFull @ 0x1800527C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052D34 @ 0x180052D34 (sub_180052D34.c)
 */

ULONG __cdecl EtwEventWriteFull(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        USHORT EventProperty,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return sub_180052D34(
           RegHandle,
           (_DWORD)EventDescriptor,
           0,
           0,
           EventProperty,
           (__int64)ActivityId,
           (__int64)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}

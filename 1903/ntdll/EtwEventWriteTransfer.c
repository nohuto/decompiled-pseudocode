/*
 * XREFs of EtwEventWriteTransfer @ 0x180052CF0
 * Callers:
 *     sub_18008935C @ 0x18008935C (sub_18008935C.c)
 * Callees:
 *     sub_180052D34 @ 0x180052D34 (sub_180052D34.c)
 */

ULONG __cdecl EtwEventWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
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
           0,
           (__int64)ActivityId,
           (__int64)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}

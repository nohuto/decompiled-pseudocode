/*
 * XREFs of EtwWriteTransfer @ 0x140127CA0
 * Callers:
 *     FlushEventEntryList @ 0x1406AF274 (FlushEventEntryList.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAD60 (EtwWriteEx.c)
 */

NTSTATUS __stdcall EtwWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwWriteEx(RegHandle, EventDescriptor, 0LL, 0, ActivityId, RelatedActivityId, UserDataCount, UserData);
}

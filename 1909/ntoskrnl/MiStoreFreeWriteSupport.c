/*
 * XREFs of MiStoreFreeWriteSupport @ 0x14014A5B0
 * Callers:
 *     SmIoRequestComplete @ 0x14014A464 (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14014A668 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreFreeWriteSupport(PSLIST_ENTRY ListEntry, _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[76].Alignment) >= 0x100u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 76, ListEntry);
}

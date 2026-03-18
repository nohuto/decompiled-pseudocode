/*
 * XREFs of MiStoreFreeWriteSupport @ 0x14014CAC8
 * Callers:
 *     SmIoRequestComplete @ 0x14014C97C (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14014CB80 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreFreeWriteSupport(PSLIST_ENTRY ListEntry, union _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[76].Alignment) >= 0x100u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 76, ListEntry);
}

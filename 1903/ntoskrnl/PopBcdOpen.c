/*
 * XREFs of PopBcdOpen @ 0x1408B6800
 * Callers:
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x14073C588 (BcdOpenStore.c)
 */

NTSTATUS __fastcall PopBcdOpen(UNICODE_STRING *BcdStoreHandle)
{
  return BcdOpenStore(BcdStoreHandle, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, (PHANDLE)BcdStoreHandle);
}

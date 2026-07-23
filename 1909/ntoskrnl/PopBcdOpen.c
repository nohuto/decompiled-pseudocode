/*
 * XREFs of PopBcdOpen @ 0x1408B60D0
 * Callers:
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140759AFC (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x14073E488 (BcdOpenStore.c)
 */

NTSTATUS __fastcall PopBcdOpen(UNICODE_STRING *BcdStoreHandle)
{
  return BcdOpenStore(BcdStoreHandle, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, (PHANDLE)BcdStoreHandle);
}

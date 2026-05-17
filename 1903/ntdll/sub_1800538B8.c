/*
 * XREFs of sub_1800538B8 @ 0x1800538B8
 * Callers:
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A01F0 (RtlInterlockedPushEntrySList_0.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

PSLIST_ENTRY __fastcall sub_1800538B8(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  memset(&ListEntry[5].Next + 1, 0, 0xA8uLL);
  result = RtlInterlockedPushEntrySList_0(&ListHead, ListEntry);
  _InterlockedDecrement(&dword_180163528);
  return result;
}

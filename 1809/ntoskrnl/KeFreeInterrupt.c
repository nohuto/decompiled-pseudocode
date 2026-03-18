/*
 * XREFs of KeFreeInterrupt @ 0x14016D278
 * Callers:
 *     IoDisconnectInterrupt @ 0x140710370 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14071076C (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[16].Next[732], ListEntry);
}

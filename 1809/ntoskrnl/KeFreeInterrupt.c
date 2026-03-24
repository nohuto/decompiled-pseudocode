/*
 * XREFs of KeFreeInterrupt @ 0x14016D298
 * Callers:
 *     IoDisconnectInterrupt @ 0x140710350 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14071074C (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[16].Next[732], ListEntry);
}

/*
 * XREFs of KeFreeInterrupt @ 0x14017C1D8
 * Callers:
 *     IoDisconnectInterrupt @ 0x140742F80 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074338C (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[16].Next[732], ListEntry);
}

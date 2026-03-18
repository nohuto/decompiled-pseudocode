/*
 * XREFs of KeFreeInterrupt @ 0x14017BAE8
 * Callers:
 *     IoDisconnectInterrupt @ 0x140741080 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074148C (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[16].Next[732], ListEntry);
}

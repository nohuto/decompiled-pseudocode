/*
 * XREFs of RtlpHpVsDelayFreeContextFlush @ 0x18009FE18
 * Callers:
 *     RtlpHpVsContextFree @ 0x18001E0C0 (RtlpHpVsContextFree.c)
 *     RtlpHpHeapCompact @ 0x180068A30 (RtlpHpHeapCompact.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall RtlpHpVsDelayFreeContextFlush(PSLIST_HEADER ListHead)
{
  return RtlInterlockedFlushSList(ListHead);
}

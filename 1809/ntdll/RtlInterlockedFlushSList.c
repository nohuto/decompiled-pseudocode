/*
 * XREFs of RtlInterlockedFlushSList @ 0x1800764F0
 * Callers:
 *     RtlpHpVsDelayFreeContextFlush @ 0x18009FE18 (RtlpHpVsDelayFreeContextFlush.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall RtlInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  return (PSLIST_ENTRY)RtlpInterlockedFlushSList(ListHead);
}

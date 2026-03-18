/*
 * XREFs of ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C0058B08
 * Callers:
 *     zzzReattachThreads @ 0x1C00586B4 (zzzReattachThreads.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0058990 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0058A44 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall GetRecalcPtiFromListEntry(struct _LIST_ENTRY *a1)
{
  if ( gListAffectedThreadsForQueueRecalc.Flink == &gListAffectedThreadsForQueueRecalc )
    return (struct _LIST_ENTRY *)((char *)a1 - 728);
  else
    return a1[1].Flink;
}

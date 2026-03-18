/*
 * XREFs of ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C0012C88
 * Callers:
 *     zzzReattachThreads @ 0x1C00128B4 (zzzReattachThreads.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0012BE8 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0012CA4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *GetRecalcHeadPtiListEntry(void)
{
  struct _LIST_ENTRY *result; // rax

  result = &gListAffectedThreadsForQueueRecalc;
  if ( gListAffectedThreadsForQueueRecalc.Flink == &gListAffectedThreadsForQueueRecalc )
    return (struct _LIST_ENTRY *)(*(_QWORD *)(gptiCurrent + 448LL) + 168LL);
  return result;
}

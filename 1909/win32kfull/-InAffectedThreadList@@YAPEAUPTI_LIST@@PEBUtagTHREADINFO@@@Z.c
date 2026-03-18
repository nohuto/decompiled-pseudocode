/*
 * XREFs of ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C01368DC
 * Callers:
 *     zzzReattachThreads @ 0x1C0135DA8 (zzzReattachThreads.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C0136774 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C01368A0 (PackAffectedThreadsFromThreadCleanup.c)
 * Callees:
 *     <none>
 */

struct PTI_LIST *__fastcall InAffectedThreadList(const struct tagTHREADINFO *a1)
{
  struct PTI_LIST *result; // rax

  for ( result = (struct PTI_LIST *)gListAffectedThreadsForQueueRecalc.Flink;
        result != (struct PTI_LIST *)&gListAffectedThreadsForQueueRecalc;
        result = *(struct PTI_LIST **)result )
  {
    if ( a1 == *((const struct tagTHREADINFO **)result + 2) )
      return result;
  }
  return 0LL;
}

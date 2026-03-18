/*
 * XREFs of UnpackAffectedThreadList @ 0x1C00D7258
 * Callers:
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00D72B8 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C013212C (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 UnpackAffectedThreadList()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rcx
  __int64 result; // rax

  Flink = gListAffectedThreadsForQueueRecalc.Flink;
  while ( Flink && Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v1 = Flink;
    Flink = Flink[94].Blink;
    result = Win32FreePool(v1);
  }
  gnThreadsAffectedForQueueRecalc = 0;
  off_1C030C2A0 = &gListAffectedThreadsForQueueRecalc;
  gListAffectedThreadsForQueueRecalc.Flink = &gListAffectedThreadsForQueueRecalc;
  return result;
}

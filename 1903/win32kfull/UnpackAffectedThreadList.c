/*
 * XREFs of UnpackAffectedThreadList @ 0x1C0013220
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C000EB88 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C001271C (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     zzzReattachThreads @ 0x1C00128B4 (zzzReattachThreads.c)
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
  off_1C0321290 = &gListAffectedThreadsForQueueRecalc;
  gListAffectedThreadsForQueueRecalc.Flink = &gListAffectedThreadsForQueueRecalc;
  return result;
}

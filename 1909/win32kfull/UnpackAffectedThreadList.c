/*
 * XREFs of UnpackAffectedThreadList @ 0x1C0136714
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C000BA40 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     zzzReattachThreads @ 0x1C0135DA8 (zzzReattachThreads.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C0136774 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
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
  off_1C031F290 = &gListAffectedThreadsForQueueRecalc;
  gListAffectedThreadsForQueueRecalc.Flink = &gListAffectedThreadsForQueueRecalc;
  return result;
}

/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x14066BB14
 * Callers:
 *     ExpCreateWorkerThread @ 0x14066BA44 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueManagerStart @ 0x140755A90 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x14066BB68 (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(__int64 a1, int a2, int a3)
{
  return ExpNodeCreateSystemThread(a2, a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 112LL));
}

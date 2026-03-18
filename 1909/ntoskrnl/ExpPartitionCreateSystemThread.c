/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x1406C0598
 * Callers:
 *     ExpCreateWorkerThread @ 0x1406C04C8 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueManagerStart @ 0x140773048 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x1406C05EC (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(__int64 a1, int a2, int a3)
{
  return ExpNodeCreateSystemThread(a2, a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 112LL));
}

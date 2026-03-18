/*
 * XREFs of _GetQueueIocp @ 0x1C0142CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetQueueIocp()
{
  return *(_QWORD *)(gptiCurrent + 1432LL);
}

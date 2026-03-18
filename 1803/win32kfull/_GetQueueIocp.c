/*
 * XREFs of _GetQueueIocp @ 0x1C01147C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetQueueIocp()
{
  return *(_QWORD *)(gptiCurrent + 1416LL);
}

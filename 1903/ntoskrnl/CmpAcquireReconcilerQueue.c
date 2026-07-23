/*
 * XREFs of CmpAcquireReconcilerQueue @ 0x1406E60B8
 * Callers:
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140136218 (CmpAcquireWriteQueue.c)
 */

PRTL_BALANCED_NODE __fastcall CmpAcquireReconcilerQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4248));
}

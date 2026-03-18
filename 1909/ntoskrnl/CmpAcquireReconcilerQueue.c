/*
 * XREFs of CmpAcquireReconcilerQueue @ 0x1406E6EB8
 * Callers:
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140136BB8 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireReconcilerQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4248));
}

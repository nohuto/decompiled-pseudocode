/*
 * XREFs of CmpAcquireFlusherQueue @ 0x1406E60D4
 * Callers:
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140136218 (CmpAcquireWriteQueue.c)
 */

PRTL_BALANCED_NODE __fastcall CmpAcquireFlusherQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4232));
}

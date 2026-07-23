/*
 * XREFs of CmpAcquireFlusherQueue @ 0x1406E6ED4
 * Callers:
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140136BB8 (CmpAcquireWriteQueue.c)
 */

PRTL_BALANCED_NODE __fastcall CmpAcquireFlusherQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4232));
}

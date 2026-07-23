/*
 * XREFs of CmpAcquireWriteQueue @ 0x140136BB8
 * Callers:
 *     CmpAcquireReconcilerQueue @ 0x1406E6EB8 (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1406E6ED4 (CmpAcquireFlusherQueue.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14075C790 (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 */

PRTL_BALANCED_NODE __fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  PRTL_BALANCED_NODE result; // rax

  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  *a1 = KeGetCurrentThread();
  if ( result )
    BYTE2(result[1].Left) |= 1u;
  return result;
}

/*
 * XREFs of CmpAcquireWriteQueue @ 0x140136BB8
 * Callers:
 *     CmpAcquireReconcilerQueue @ 0x1406E6EB8 (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1406E6ED4 (CmpAcquireFlusherQueue.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14075C790 (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  __int64 result; // rax

  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  *a1 = KeGetCurrentThread();
  if ( result )
    *(_BYTE *)(result + 26) |= 1u;
  return result;
}

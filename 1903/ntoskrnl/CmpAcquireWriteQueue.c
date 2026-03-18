/*
 * XREFs of CmpAcquireWriteQueue @ 0x140136218
 * Callers:
 *     CmpAcquireReconcilerQueue @ 0x1406E60B8 (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1406E60D4 (CmpAcquireFlusherQueue.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140757EFC (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
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

/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLock @ 0x140939390
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1409394FC (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VfDeadlockAcquireResource @ 0x14093B514 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLock(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1;
  VerifierKeAcquireInStackQueuedSpinLockCommon(a1, retaddr, a2);
  return VfDeadlockAcquireResource(v2, retaddr);
}

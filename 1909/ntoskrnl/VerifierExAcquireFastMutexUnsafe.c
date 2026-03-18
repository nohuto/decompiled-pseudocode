/*
 * XREFs of VerifierExAcquireFastMutexUnsafe @ 0x1409819F0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x140981A30 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 */

void __fastcall VerifierExAcquireFastMutexUnsafe(ULONG_PTR a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  VerifierExAcquireFastMutexUnsafeNoReboot(a1);
  VfDeadlockAcquireResource(a1, 4, (__int64)KeGetCurrentThread(), 0, retaddr);
}

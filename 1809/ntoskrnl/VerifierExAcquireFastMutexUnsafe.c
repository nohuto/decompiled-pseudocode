/*
 * XREFs of VerifierExAcquireFastMutexUnsafe @ 0x140942110
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x14093B514 (VfDeadlockAcquireResource.c)
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x140942150 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 */

void __fastcall VerifierExAcquireFastMutexUnsafe(ULONG_PTR a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  VerifierExAcquireFastMutexUnsafeNoReboot(a1);
  VfDeadlockAcquireResource(a1, 4, (__int64)KeGetCurrentThread(), 0, retaddr);
}

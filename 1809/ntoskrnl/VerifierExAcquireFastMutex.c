/*
 * XREFs of VerifierExAcquireFastMutex @ 0x1409420A0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x14093B514 (VfDeadlockAcquireResource.c)
 *     ViExAcquireFastMutexCommon @ 0x140942644 (ViExAcquireFastMutexCommon.c)
 */

void __fastcall VerifierExAcquireFastMutex(ULONG_PTR a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  ViExAcquireFastMutexCommon(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  VfDeadlockAcquireResource(a1, 3, (__int64)KeGetCurrentThread(), 0, retaddr);
}

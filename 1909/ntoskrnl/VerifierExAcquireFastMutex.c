/*
 * XREFs of VerifierExAcquireFastMutex @ 0x140981980
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 *     ViExAcquireFastMutexCommon @ 0x140981F24 (ViExAcquireFastMutexCommon.c)
 */

void __fastcall VerifierExAcquireFastMutex(ULONG_PTR a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  ViExAcquireFastMutexCommon(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  VfDeadlockAcquireResource(a1, 3, (__int64)KeGetCurrentThread(), 0, retaddr);
}

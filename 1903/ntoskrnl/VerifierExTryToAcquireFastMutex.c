/*
 * XREFs of VerifierExTryToAcquireFastMutex @ 0x140981BE0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x140982088 (ViExTryToAcquireFastMutexCommon.c)
 */

char __fastcall VerifierExTryToAcquireFastMutex(ULONG_PTR a1)
{
  char v2; // bl
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViExTryToAcquireFastMutexCommon(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  if ( v2 )
    VfDeadlockAcquireResource(a1, 3, (__int64)KeGetCurrentThread(), 1u, retaddr);
  return v2;
}

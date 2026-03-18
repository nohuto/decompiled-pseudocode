/*
 * XREFs of ViExCheckAPCLevelOrBelow @ 0x1409426BC
 * Callers:
 *     ViExAcquireFastMutexCommon @ 0x140942644 (ViExAcquireFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1409427A8 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViExCheckAPCLevelOrBelow(__int64 a1, ULONG_PTR a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( !a3 && CurrentIrql > 1u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x33uLL, CurrentIrql, a2, 0LL);
  return CurrentIrql;
}

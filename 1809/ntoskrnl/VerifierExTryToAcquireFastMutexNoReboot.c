/*
 * XREFs of VerifierExTryToAcquireFastMutexNoReboot @ 0x140942360
 * Callers:
 *     <none>
 * Callees:
 *     ViExTryToAcquireFastMutexCommon @ 0x1409427A8 (ViExTryToAcquireFastMutexCommon.c)
 */

__int64 __fastcall VerifierExTryToAcquireFastMutexNoReboot(__int64 a1)
{
  return ViExTryToAcquireFastMutexCommon(a1, 0LL);
}

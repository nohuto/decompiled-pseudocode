/*
 * XREFs of VerifierExAcquireFastMutexNoReboot @ 0x1409420F0
 * Callers:
 *     <none>
 * Callees:
 *     ViExAcquireFastMutexCommon @ 0x140942644 (ViExAcquireFastMutexCommon.c)
 */

__int64 __fastcall VerifierExAcquireFastMutexNoReboot(__int64 a1)
{
  return ViExAcquireFastMutexCommon(a1, 0LL);
}

/*
 * XREFs of VerifierExAcquireFastMutexNoReboot @ 0x1409430F0
 * Callers:
 *     <none>
 * Callees:
 *     ViExAcquireFastMutexCommon @ 0x140943644 (ViExAcquireFastMutexCommon.c)
 */

__int64 __fastcall VerifierExAcquireFastMutexNoReboot(__int64 a1)
{
  return ViExAcquireFastMutexCommon(a1, 0LL);
}

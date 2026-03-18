/*
 * XREFs of VerifierExTryToAcquireFastMutexNoReboot @ 0x140981C40
 * Callers:
 *     <none>
 * Callees:
 *     ViExTryToAcquireFastMutexCommon @ 0x140982088 (ViExTryToAcquireFastMutexCommon.c)
 */

__int64 __fastcall VerifierExTryToAcquireFastMutexNoReboot(__int64 a1)
{
  return ViExTryToAcquireFastMutexCommon(a1, 0LL);
}

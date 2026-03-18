/*
 * XREFs of KeReleaseGuardedMutexUnsafe @ 0x1402A3160
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 */

void __stdcall KeReleaseGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExReleaseFastMutexUnsafe(FastMutex);
}

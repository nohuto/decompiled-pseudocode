/*
 * XREFs of GreReleaseFastMutex @ 0x1C005FF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreReleaseFastMutex(struct _FAST_MUTEX *a1)
{
  KeReleaseGuardedMutex(a1);
}

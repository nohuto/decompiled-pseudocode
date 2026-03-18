/*
 * XREFs of PiDqObjectManagerUnlockData @ 0x140865778
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407136D0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 */

void __fastcall PiDqObjectManagerUnlockData(__int64 a1)
{
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
}

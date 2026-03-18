/*
 * XREFs of PiDqObjectManagerUnlockData @ 0x140864E78
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 */

void __fastcall PiDqObjectManagerUnlockData(__int64 a1)
{
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
}

/*
 * XREFs of PiDqObjectManagerLockData @ 0x140864DDC
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 */

void __fastcall PiDqObjectManagerLockData(__int64 a1)
{
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
}

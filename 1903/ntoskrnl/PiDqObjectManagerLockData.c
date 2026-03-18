/*
 * XREFs of PiDqObjectManagerLockData @ 0x1408656DC
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407136D0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 */

void __fastcall PiDqObjectManagerLockData(__int64 a1)
{
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
}

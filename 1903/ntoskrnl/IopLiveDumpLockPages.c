/*
 * XREFs of IopLiveDumpLockPages @ 0x14085A3DC
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1405A8590 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14005F120 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}

/*
 * XREFs of IopLiveDumpLockPages @ 0x140821570
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x140579704 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}

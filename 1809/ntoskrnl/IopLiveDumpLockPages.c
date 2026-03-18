/*
 * XREFs of IopLiveDumpLockPages @ 0x140820390
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x140578704 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14009ABB0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}

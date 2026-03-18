/*
 * XREFs of IopLiveDumpLockPages @ 0x140859ADC
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1405A8570 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14005F1C0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}

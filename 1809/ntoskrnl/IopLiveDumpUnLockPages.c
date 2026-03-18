/*
 * XREFs of IopLiveDumpUnLockPages @ 0x140286174
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x140579628 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14009ABB0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}

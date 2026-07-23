/*
 * XREFs of IopLiveDumpUnLockPages @ 0x140286464
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x14057A628 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}

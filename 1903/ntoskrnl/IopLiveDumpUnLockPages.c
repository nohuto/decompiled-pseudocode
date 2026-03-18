/*
 * XREFs of IopLiveDumpUnLockPages @ 0x14029B5D4
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1405A94B8 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14005F120 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}

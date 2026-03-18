/*
 * XREFs of IopLiveDumpUnLockPages @ 0x14029B334
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1405A9498 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14005F1C0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}

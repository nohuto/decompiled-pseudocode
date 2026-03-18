/*
 * XREFs of MiLockWorkingSetExclusive @ 0x1402BF554
 * Callers:
 *     MiLockWorkingSetForLargeMapping @ 0x1401B57E0 (MiLockWorkingSetForLargeMapping.c)
 * Callees:
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall MiLockWorkingSetExclusive(__int64 a1)
{
  LONG *SharedVm; // rbx
  KIRQL result; // al

  SharedVm = MiGetSharedVm(a1);
  result = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  return result;
}

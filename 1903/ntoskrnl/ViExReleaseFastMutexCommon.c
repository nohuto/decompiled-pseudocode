/*
 * XREFs of ViExReleaseFastMutexCommon @ 0x140982048
 * Callers:
 *     VerifierExReleaseFastMutex @ 0x140981AB0 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexNoReboot @ 0x140981B10 (VerifierExReleaseFastMutexNoReboot.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140979270 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViExCheckAPCsDisabled @ 0x140981FDC (ViExCheckAPCsDisabled.c)
 */

char *__fastcall ViExReleaseFastMutexCommon(__int64 a1)
{
  char CurrentIrql; // al

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCsDisabled(0x34uLL, a1);
  else
    CurrentIrql = KeGetCurrentIrql();
  return VfKeIrqlTransitionReserveLogEntry(CurrentIrql, *(_BYTE *)(a1 + 48));
}

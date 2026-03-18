/*
 * XREFs of ViKeLowerIrqlSanityChecks @ 0x14093AF18
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409325D0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x140939CC0 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x140939E70 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x14093B12C (ViKeReleaseSpinLockCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x14093AC40 (VfKeIrqlTransitionReserveLogEntry.c)
 */

char *__fastcall ViKeLowerIrqlSanityChecks(unsigned __int8 a1, unsigned __int8 a2)
{
  if ( (MmVerifierData & 2) != 0 )
  {
    if ( a1 < a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
    if ( a1 >= 2u && a2 < 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 1LL);
    if ( a2 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
  }
  return VfKeIrqlTransitionReserveLogEntry(a1, a2);
}

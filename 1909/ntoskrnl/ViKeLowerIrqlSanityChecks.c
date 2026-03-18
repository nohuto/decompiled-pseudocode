/*
 * XREFs of ViKeLowerIrqlSanityChecks @ 0x140979548
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x140970E50 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1409782F0 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409784A0 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x140979770 (ViKeReleaseSpinLockCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140979270 (VfKeIrqlTransitionReserveLogEntry.c)
 */

char *__fastcall ViKeLowerIrqlSanityChecks(unsigned __int8 a1, unsigned __int8 a2)
{
  ULONG_PTR v4; // rbp
  ULONG_PTR v5; // rsi

  if ( (MmVerifierData & 2) != 0 )
  {
    v4 = a2;
    v5 = a1;
    if ( a1 < a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
    if ( a1 >= 2u && a2 < 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, v5, v4, 1LL);
    if ( a2 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, v5, v4, 0LL);
  }
  return VfKeIrqlTransitionReserveLogEntry(a1, a2);
}

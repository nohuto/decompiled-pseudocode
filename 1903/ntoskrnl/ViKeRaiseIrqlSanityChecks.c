/*
 * XREFs of ViKeRaiseIrqlSanityChecks @ 0x14097968C
 * Callers:
 *     VerifierKeAcquireQueuedSpinLock @ 0x140970B70 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140977B2C (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140977D14 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140977DD0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x140978360 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140978B10 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140978B90 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140978C20 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x140978EE0 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140978F70 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140979000 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1409793A4 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 *     MmVerifierTrimMemory @ 0x140963D98 (MmVerifierTrimMemory.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140979270 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x1409794DC (ViKeIrqlLogCommon.c)
 */

char *__fastcall ViKeRaiseIrqlSanityChecks(unsigned __int8 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  char *v5; // rsi

  if ( (MmVerifierData & 0x400000) != 0 && (MmVerifierData & 2) == 0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 )
  {
    if ( CurrentIrql > a1 && !a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, CurrentIrql, a1, 0LL);
    if ( a1 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, CurrentIrql, a1, 0LL);
  }
  if ( (MmVerifierData & 0x400000) != 0 && (VfFlightOptions & 9) == 0 )
    return 0LL;
  v5 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, a1);
  ViKeIrqlLogCommon((__int64)v5, 2u);
  if ( (MmVerifierData & 2) != 0 && KeAreInterruptsEnabled() && CurrentIrql < 2u && a1 >= 2u )
    MmVerifierTrimMemory();
  return v5;
}

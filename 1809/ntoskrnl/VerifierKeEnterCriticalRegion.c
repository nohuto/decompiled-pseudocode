/*
 * XREFs of VerifierKeEnterCriticalRegion @ 0x14093A990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x14030B3CC (ViKeLogCriticalRegionStackTrace.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

void VerifierKeEnterCriticalRegion()
{
  unsigned __int8 CurrentIrql; // al

  if ( (MmVerifierData & 2) != 0 && (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 1u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x11AuLL, CurrentIrql, 0LL, 0LL);
  }
  ((void (*)(void))pXdvKeEnterCriticalRegion)();
  if ( (MmVerifierData & 0x400000) == 0 || (VfFlightOptions & 9) != 0 )
    ViKeLogCriticalRegionStackTrace();
}

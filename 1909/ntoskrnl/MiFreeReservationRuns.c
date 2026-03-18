/*
 * XREFs of MiFreeReservationRuns @ 0x140673F84
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x140143DDC (MmOutSwapVirtualAddresses.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406F8470 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFreeReservationRun @ 0x140633CE8 (MiFreeReservationRun.c)
 */

void __fastcall MiFreeReservationRuns(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx

  v2 = a2 + 80;
  for ( i = a2; i < v2; i += 16LL )
    MiFreeReservationRun(a1, i);
}

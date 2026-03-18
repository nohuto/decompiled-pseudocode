/*
 * XREFs of MiFreeReservationRuns @ 0x1406A4F98
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400F3E2C (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14014389C (MmOutSwapVirtualAddresses.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406F66B0 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFreeReservationRun @ 0x14062FE68 (MiFreeReservationRun.c)
 */

void __fastcall MiFreeReservationRuns(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx

  v2 = a2 + 80;
  for ( i = a2; i < v2; i += 16LL )
    MiFreeReservationRun(a1, i);
}

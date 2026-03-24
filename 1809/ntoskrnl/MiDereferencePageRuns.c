/*
 * XREFs of MiDereferencePageRuns @ 0x140141AD0
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406D41B0 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DADFC (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407591A4 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x14084C894 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084D54C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14084E2D4 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140853430 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x14085FAA4 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14012B5F8 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}

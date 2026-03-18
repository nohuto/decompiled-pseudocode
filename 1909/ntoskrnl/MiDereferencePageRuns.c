/*
 * XREFs of MiDereferencePageRuns @ 0x14015D40C
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406F5EB0 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14074630C (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x140781BA0 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x14088774C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x140889988 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14088C940 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x14089CA50 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14012C280 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}

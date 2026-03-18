/*
 * XREFs of MiDereferencePageRuns @ 0x14015CD6C
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406F4120 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14074440C (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x14077F180 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x140887F2C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140888F00 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14088A168 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14088D120 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x14089D230 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14012B7B0 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}

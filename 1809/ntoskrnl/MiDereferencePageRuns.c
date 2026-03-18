/*
 * XREFs of MiDereferencePageRuns @ 0x140141AB0
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406D41D0 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DAE1C (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407591C4 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x14084C8B4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084D56C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14084E2F4 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140853450 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x14085FAC4 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14012B5D8 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}

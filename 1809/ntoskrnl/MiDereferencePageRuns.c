/*
 * XREFs of MiDereferencePageRuns @ 0x140141BD0
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DC09C (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x14075A394 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14084F534 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140854690 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x140860D04 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14012B6C8 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}

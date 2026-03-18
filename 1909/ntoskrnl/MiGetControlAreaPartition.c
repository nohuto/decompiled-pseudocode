/*
 * XREFs of MiGetControlAreaPartition @ 0x1400979D0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D7290 (MiCreateImageOrDataSection.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiExtendSection @ 0x140625080 (MiExtendSection.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiChargeSegmentCommit @ 0x140648780 (MiChargeSegmentCommit.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiSegmentDelete @ 0x14064E778 (MiSegmentDelete.c)
 *     MiAllocatePerSessionProtos @ 0x1406E9D44 (MiAllocatePerSessionProtos.c)
 *     MiFreeInitializationCode @ 0x14071290C (MiFreeInitializationCode.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 *     MiGetAweInfoPartition @ 0x140896068 (MiGetAweInfoPartition.c)
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
}

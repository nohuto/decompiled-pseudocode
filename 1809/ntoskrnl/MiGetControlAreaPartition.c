/*
 * XREFs of MiGetControlAreaPartition @ 0x1400938A8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405DE390 (MiCreateImageOrDataSection.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MiExtendSection @ 0x14061C4C8 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x14061E0D0 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x14061E928 (MiSegmentDelete.c)
 *     MiRelocateImage @ 0x14064FEE4 (MiRelocateImage.c)
 *     MiMapImageInSystemSpace @ 0x140650E60 (MiMapImageInSystemSpace.c)
 *     MiFreeInitializationCode @ 0x1406C783C (MiFreeInitializationCode.c)
 *     MiAllocatePerSessionProtos @ 0x1406C9210 (MiAllocatePerSessionProtos.c)
 *     MiGetAweInfoPartition @ 0x14084FEF0 (MiGetAweInfoPartition.c)
 *     MiFillPerSessionProtos @ 0x14085C41C (MiFillPerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return *(_QWORD *)(qword_14043A748 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
}

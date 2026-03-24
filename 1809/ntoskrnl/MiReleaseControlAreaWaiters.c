/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x14001E3A8
 * Callers:
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiUnlockFlushMdl @ 0x14001E3D8 (MiUnlockFlushMdl.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14001E9BC (MiReferenceControlAreaForCacheManager.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiComputeDataFlushRange @ 0x140076E30 (MiComputeDataFlushRange.c)
 *     MiTrimSharedPage @ 0x1400E9770 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x140130420 (MiReferencePfBackedSection.c)
 *     MiReleasePageFileSectionInfo @ 0x140157C9C (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x1402A1864 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402A1A18 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402A2980 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x1402B4950 (MiFlushComplete.c)
 *     MiDecrementLargeSubsections @ 0x1402B5814 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402B615C (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6620 (MiPurgeBadFileOnlyPages.c)
 *     MiCreateImageOrDataSection @ 0x1405DE390 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x14061B7E0 (MiCreateNewSection.c)
 *     MiSegmentDelete @ 0x14061E928 (MiSegmentDelete.c)
 * Callees:
 *     KeSignalGate @ 0x1401276B0 (KeSignalGate.c)
 */

__int64 __fastcall MiReleaseControlAreaWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = KeSignalGate(a1 + 2, 1LL);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}

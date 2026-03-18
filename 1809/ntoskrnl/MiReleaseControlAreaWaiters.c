/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x14001E3A8
 * Callers:
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiUnlockFlushMdl @ 0x14001E3D8 (MiUnlockFlushMdl.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14001E9BC (MiReferenceControlAreaForCacheManager.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiComputeDataFlushRange @ 0x140076E30 (MiComputeDataFlushRange.c)
 *     MiTrimSharedPage @ 0x1400E9750 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x140130400 (MiReferencePfBackedSection.c)
 *     MiReleasePageFileSectionInfo @ 0x140157C7C (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x1402A1764 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402A1918 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402A2880 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x1402B4850 (MiFlushComplete.c)
 *     MiDecrementLargeSubsections @ 0x1402B5714 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402B605C (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6520 (MiPurgeBadFileOnlyPages.c)
 *     MiCreateImageOrDataSection @ 0x1405DE390 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x14061B7E0 (MiCreateNewSection.c)
 *     MiSegmentDelete @ 0x14061E928 (MiSegmentDelete.c)
 * Callees:
 *     KeSignalGate @ 0x140127690 (KeSignalGate.c)
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

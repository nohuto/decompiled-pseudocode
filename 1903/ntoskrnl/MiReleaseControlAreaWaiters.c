/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x1400E05A0
 * Callers:
 *     MiReferenceControlArea @ 0x14005F3CC (MiReferenceControlArea.c)
 *     MiUnlockFlushMdl @ 0x140074A88 (MiUnlockFlushMdl.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiReferenceExistingControlArea @ 0x1400E04F0 (MiReferenceExistingControlArea.c)
 *     MiTrimSharedPage @ 0x14012E7B4 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x14012EB2C (MiReferencePfBackedSection.c)
 *     MiReleasePageFileSectionInfo @ 0x140163980 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x1402B8C8C (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402B9D30 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x1402CA040 (MiFlushComplete.c)
 *     MiDecrementLargeSubsections @ 0x1402CB518 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402CC3E8 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC884 (MiPurgeBadFileOnlyPages.c)
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 *     MiSegmentDelete @ 0x1406885A8 (MiSegmentDelete.c)
 *     MiCreateNewSection @ 0x140689A04 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
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

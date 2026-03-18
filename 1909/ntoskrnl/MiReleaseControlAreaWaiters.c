/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x1400C0420
 * Callers:
 *     MiReferenceControlArea @ 0x14005F46C (MiReferenceControlArea.c)
 *     MiUnlockFlushMdl @ 0x140074CF8 (MiUnlockFlushMdl.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiReferenceExistingControlArea @ 0x1400C0370 (MiReferenceExistingControlArea.c)
 *     MiTrimSharedPage @ 0x14012F104 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x14012F47C (MiReferencePfBackedSection.c)
 *     MiReleasePageFileSectionInfo @ 0x1401633D0 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x1402B89EC (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402B9A90 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x1402C9DA0 (MiFlushComplete.c)
 *     MiDecrementLargeSubsections @ 0x1402CB278 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402CC148 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC5E4 (MiPurgeBadFileOnlyPages.c)
 *     MiCreateImageOrDataSection @ 0x1405D7290 (MiCreateImageOrDataSection.c)
 *     MiSegmentDelete @ 0x14064E778 (MiSegmentDelete.c)
 *     MiCreateNewSection @ 0x14064FBD4 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
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

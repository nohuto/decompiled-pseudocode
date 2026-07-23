/*
 * XREFs of MiBuildWakeList @ 0x14001E4A8
 * Callers:
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiUnlockFlushMdl @ 0x14001E3D8 (MiUnlockFlushMdl.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14001E9BC (MiReferenceControlAreaForCacheManager.c)
 *     MiDecrementModifiedWriteCount @ 0x140022DA0 (MiDecrementModifiedWriteCount.c)
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiComputeDataFlushRange @ 0x140076E20 (MiComputeDataFlushRange.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140092B68 (MiUnlockControlAreaSectionExtend.c)
 *     MiPrepareSegmentForDeletion @ 0x1400957FC (MiPrepareSegmentForDeletion.c)
 *     MiPreventControlAreaDeletion @ 0x1400E9578 (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x1401304F0 (MiReferencePfBackedSection.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402B634C (MiIncrementLargeSubsections.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiBuildWakeList(__int64 a1, int a2)
{
  _QWORD *v2; // r10
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v6; // r8

  v2 = (_QWORD *)(a1 + 80);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 80);
  if ( v4 )
  {
    do
    {
      v6 = (__int64 *)*v4;
      if ( (a2 & (_DWORD)v4[1]) != 0 )
      {
        if ( (a2 & 4) != 0 )
        {
          *((_DWORD *)v4 + 3) = 1;
        }
        else
        {
          *v4 = (__int64)v3;
          v3 = v4;
          *v2 = v6;
        }
      }
      else
      {
        v2 = v4;
      }
      v4 = v6;
    }
    while ( v6 );
  }
  return v3;
}

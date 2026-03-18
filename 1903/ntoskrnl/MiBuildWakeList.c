/*
 * XREFs of MiBuildWakeList @ 0x1400743CC
 * Callers:
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MiComputeDataFlushRange @ 0x140071840 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x140074414 (MiReferenceActiveControlArea.c)
 *     MiUnlockFlushMdl @ 0x140074A88 (MiUnlockFlushMdl.c)
 *     MiPrepareSegmentForDeletion @ 0x1400DF804 (MiPrepareSegmentForDeletion.c)
 *     MiDecrementModifiedWriteCount @ 0x1400DFAD8 (MiDecrementModifiedWriteCount.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1400EACB0 (MiUnlockControlAreaSectionExtend.c)
 *     MiPreventControlAreaDeletion @ 0x14012E9B8 (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x14012EB2C (MiReferencePfBackedSection.c)
 *     MiDecrementLargeSubsections @ 0x1402CB518 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402CC3E8 (MiIncrementLargeSubsections.c)
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

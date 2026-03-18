/*
 * XREFs of MiBuildWakeList @ 0x14007463C
 * Callers:
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     MiComputeDataFlushRange @ 0x140071AB0 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x140074684 (MiReferenceActiveControlArea.c)
 *     MiUnlockFlushMdl @ 0x140074CF8 (MiUnlockFlushMdl.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140088E10 (MiUnlockControlAreaSectionExtend.c)
 *     MiPrepareSegmentForDeletion @ 0x1400BF684 (MiPrepareSegmentForDeletion.c)
 *     MiDecrementModifiedWriteCount @ 0x1400BF958 (MiDecrementModifiedWriteCount.c)
 *     MiPreventControlAreaDeletion @ 0x14012F308 (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x14012F47C (MiReferencePfBackedSection.c)
 *     MiDecrementLargeSubsections @ 0x1402CB278 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402CC148 (MiIncrementLargeSubsections.c)
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

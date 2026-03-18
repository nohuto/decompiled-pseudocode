/*
 * XREFs of MiReferenceSubsection @ 0x140071AEC
 * Callers:
 *     MiComputeDataFlushRange @ 0x140071840 (MiComputeDataFlushRange.c)
 *     MiTrimSection @ 0x1400E0D30 (MiTrimSection.c)
 *     MiFlushAcquire @ 0x1400EC0A0 (MiFlushAcquire.c)
 *     MiPreventControlAreaDeletion @ 0x14012E9B8 (MiPreventControlAreaDeletion.c)
 *     MiUpdateActiveSubsection @ 0x1402C9E08 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x1400723F0 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSubsection @ 0x1400E0A4C (MiRemoveUnusedSubsection.c)
 */

__int64 __fastcall MiReferenceSubsection(ULONG_PTR a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  int v4; // ebp

  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) )
    return 1LL;
  v3 = *(_QWORD *)(v2 + 64);
  v4 = MiIncrementSubsectionViewCount(a1);
  if ( v4 > 1 && v3 && (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(a1);
    *(_WORD *)(a1 + 32) |= 1u;
  }
  return (unsigned int)v4;
}

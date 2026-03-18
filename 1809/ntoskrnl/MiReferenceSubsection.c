/*
 * XREFs of MiReferenceSubsection @ 0x1400770E4
 * Callers:
 *     MiComputeDataFlushRange @ 0x140076E30 (MiComputeDataFlushRange.c)
 *     MiPreventControlAreaDeletion @ 0x1400E94D8 (MiPreventControlAreaDeletion.c)
 *     MiTrimSection @ 0x1400EAB84 (MiTrimSection.c)
 *     MiFlushAcquire @ 0x14012C144 (MiFlushAcquire.c)
 *     MiUpdateActiveSubsection @ 0x1402B4618 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x140077A50 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSubsection @ 0x14007BBC8 (MiRemoveUnusedSubsection.c)
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

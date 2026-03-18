/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400938C4
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x140077A50 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794C0 (MiDecrementSubsectionViewCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x14009388C (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateControlAreaCommitCount @ 0x140095F94 (MiUpdateControlAreaCommitCount.c)
 *     MiUpdateLastSubsectionSize @ 0x140134478 (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}

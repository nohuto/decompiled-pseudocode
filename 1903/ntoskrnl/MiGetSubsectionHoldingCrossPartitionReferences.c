/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400A9158
 * Callers:
 *     MiDecrementSubsectionViewCount @ 0x1400716A0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400723F0 (MiIncrementSubsectionViewCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1400A913C (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateControlAreaCommitCount @ 0x1400E0358 (MiUpdateControlAreaCommitCount.c)
 *     MiUpdateLastSubsectionSize @ 0x1400EB07C (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}

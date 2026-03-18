/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400979B0
 * Callers:
 *     MiDecrementSubsectionViewCount @ 0x140071910 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140072660 (MiIncrementSubsectionViewCount.c)
 *     MiUpdateLastSubsectionSize @ 0x1400891DC (MiUpdateLastSubsectionSize.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x140097994 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateControlAreaCommitCount @ 0x1400C01D8 (MiUpdateControlAreaCommitCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}

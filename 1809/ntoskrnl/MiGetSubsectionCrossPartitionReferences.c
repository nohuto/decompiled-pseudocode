/*
 * XREFs of MiGetSubsectionCrossPartitionReferences @ 0x14009388C
 * Callers:
 *     MiChargeSegmentCommit @ 0x14061E0D0 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400938C4 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 */

__int64 __fastcall MiGetSubsectionCrossPartitionReferences(__int64 a1)
{
  return *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(a1) + 48) & 0x3FFFFFFF;
}

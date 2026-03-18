/*
 * XREFs of MiGetSubsectionCrossPartitionReferences @ 0x140097994
 * Callers:
 *     MiChargeSegmentCommit @ 0x140648780 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400979B0 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 */

__int64 __fastcall MiGetSubsectionCrossPartitionReferences(__int64 a1)
{
  return *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(a1) + 48) & 0x3FFFFFFF;
}

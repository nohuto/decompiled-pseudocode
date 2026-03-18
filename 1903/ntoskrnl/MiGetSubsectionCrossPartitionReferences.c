/*
 * XREFs of MiGetSubsectionCrossPartitionReferences @ 0x1400A913C
 * Callers:
 *     MiChargeSegmentCommit @ 0x14066ED20 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400A9158 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 */

__int64 __fastcall MiGetSubsectionCrossPartitionReferences(__int64 a1)
{
  return *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(a1) + 48) & 0x3FFFFFFF;
}

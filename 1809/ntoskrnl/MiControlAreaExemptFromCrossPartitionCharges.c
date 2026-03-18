/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x140077CF0
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x140077A50 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794C0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x140079E68 (MiControlAreaRequiresCharge.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaExemptFromCrossPartitionCharges(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0 || !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 92) & 0x10000) != 0;
}

/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x1400724E0
 * Callers:
 *     MiControlAreaRequiresCharge @ 0x140071220 (MiControlAreaRequiresCharge.c)
 *     MiDecrementSubsectionViewCount @ 0x1400716A0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400723F0 (MiIncrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaExemptFromCrossPartitionCharges(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0 || !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 92) & 0x10000) != 0;
}

/*
 * XREFs of MiComputeCommitThresholds @ 0x140187F84
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140187E88 (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x1402C0304 (MiReduceCommitLimits.c)
 *     MiInsertPartitionPages @ 0x1402D1BA4 (MiInsertPartitionPages.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x140187FEC (MiSyncCommitSignals.c)
 */

__int64 __fastcall MiComputeCommitThresholds(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax

  v1 = a1[973];
  v2 = v1 / 0xA;
  if ( v1 / 0xA > 0x10000 )
    v2 = 0x10000LL;
  a1[804] = v1 - v2;
  v3 = v1 >> 2;
  if ( v1 >> 2 > 0x100000 )
    v3 = 0x100000LL;
  a1[803] = v1 - v3;
  return MiSyncCommitSignals(a1, 1LL);
}

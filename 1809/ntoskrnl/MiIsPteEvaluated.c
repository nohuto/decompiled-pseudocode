/*
 * XREFs of MiIsPteEvaluated @ 0x14010FA54
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14010F790 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x1402C69AC (MiGetClusterPage.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiIsPteEvaluated(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // r9
  __int64 v4; // r10

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  return v1 && ((v1 & 1) != 0 || (v1 & 0x400) == 0 || !MiIsPrototypePteVadLookup(v1) || ((v3 >> 5) & 0x1F) != v4);
}

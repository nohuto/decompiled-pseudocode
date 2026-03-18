/*
 * XREFs of MiPrefetchNormally @ 0x1400BADA8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1400BADEC (MiGetAvailablePagesBelowPriority.c)
 *     MiCommitmentAvailable @ 0x1400BAE28 (MiCommitmentAvailable.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d

  return *(__int64 *)(a1 + 8128) >= 160
      && (unsigned __int64)MiCommitmentAvailable(a1, a2, (unsigned int)a2) >= 0x1080
      && MiGetAvailablePagesBelowPriority(v2, v3);
}

/*
 * XREFs of MiPrefetchNormally @ 0x1400DAF28
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1400DAF6C (MiGetAvailablePagesBelowPriority.c)
 *     MiCommitmentAvailable @ 0x1400DAFA8 (MiCommitmentAvailable.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d

  return *(__int64 *)(a1 + 8128) >= 160
      && (unsigned __int64)MiCommitmentAvailable(a1, a2, (unsigned int)a2) >= 0x1080
      && MiGetAvailablePagesBelowPriority(v2, v3);
}

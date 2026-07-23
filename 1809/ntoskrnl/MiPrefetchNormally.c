/*
 * XREFs of MiPrefetchNormally @ 0x140031280
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiCommitmentAvailable @ 0x140030FA4 (MiCommitmentAvailable.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140030FC4 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(__int64 a1)
{
  _QWORD *v1; // rcx
  unsigned int v2; // r8d

  return *(__int64 *)(a1 + 7360) >= 160
      && MiCommitmentAvailable(a1) >= 0x1080
      && MiGetAvailablePagesBelowPriority(v1, v2);
}

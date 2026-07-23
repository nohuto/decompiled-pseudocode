/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1400EE098
 * Callers:
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 *     MiAttachToOwningSession @ 0x14011A53C (MiAttachToOwningSession.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1400EE2E4 (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1)
{
  a1[1] = &qword_14043BF40;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock(a1) != 0;
}

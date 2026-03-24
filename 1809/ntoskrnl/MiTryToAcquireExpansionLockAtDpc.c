/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1400EE018
 * Callers:
 *     MiLockStealUserVm @ 0x1400EDC14 (MiLockStealUserVm.c)
 *     MiAttachToOwningSession @ 0x14011A4CC (MiAttachToOwningSession.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1400EE264 (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1)
{
  a1[1] = &qword_14043AE80;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock(a1) != 0;
}

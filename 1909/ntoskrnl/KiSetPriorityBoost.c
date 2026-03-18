/*
 * XREFs of KiSetPriorityBoost @ 0x140014290
 * Callers:
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KeSetPriorityBoost @ 0x140013F90 (KeSetPriorityBoost.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400E9CC4 (KiPrepareReadyThreadForRescheduling.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1400100B0 (KiUpdateThreadPriority.c)
 *     KiSetLockOwnershipQuantum @ 0x1400142F4 (KiSetLockOwnershipQuantum.c)
 */

__int64 __fastcall KiSetPriorityBoost(__int64 *a1, _BYTE *a2, char a3, __int64 a4)
{
  _SINGLE_LIST_ENTRY *v6; // r8

  a2[564] += 16 * (a3 - a2[195]);
  v6 = (_SINGLE_LIST_ENTRY *)(unsigned int)a3;
  if ( a1 )
    KiSetPriorityThread(a2, a1, (unsigned __int8)v6);
  else
    KiUpdateThreadPriority(0LL, (__int64)a2, v6, 0);
  return KiSetLockOwnershipQuantum(a2, a4);
}

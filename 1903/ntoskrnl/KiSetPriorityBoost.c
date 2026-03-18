/*
 * XREFs of KiSetPriorityBoost @ 0x140014060
 * Callers:
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KeSetPriorityBoost @ 0x140013D60 (KeSetPriorityBoost.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400E4D24 (KiPrepareReadyThreadForRescheduling.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x14000FB30 (KiUpdateThreadPriority.c)
 *     KiSetLockOwnershipQuantum @ 0x1400140C4 (KiSetLockOwnershipQuantum.c)
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

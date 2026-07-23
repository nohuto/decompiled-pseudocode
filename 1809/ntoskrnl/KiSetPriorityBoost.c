/*
 * XREFs of KiSetPriorityBoost @ 0x140117558
 * Callers:
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140117384 (KiPrepareReadyThreadForRescheduling.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiSetLockOwnershipQuantum @ 0x1401175B0 (KiSetLockOwnershipQuantum.c)
 */

__int64 __fastcall KiSetPriorityBoost(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _SINGLE_LIST_ENTRY *v6; // r8

  *(_BYTE *)(a2 + 564) += 16 * (a3 - *(_BYTE *)(a2 + 195));
  v6 = (_SINGLE_LIST_ENTRY *)(unsigned int)a3;
  if ( a1 )
    KiSetPriorityThread(a2, a1, (char)v6);
  else
    KiUpdateThreadPriority(0LL, a2, v6, 0LL);
  return KiSetLockOwnershipQuantum(a2, a4);
}

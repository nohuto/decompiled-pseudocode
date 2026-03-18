/*
 * XREFs of KiSetPriorityBoost @ 0x1401174C8
 * Callers:
 *     KiQuantumEnd @ 0x1400D0000 (KiQuantumEnd.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1401172F4 (KiPrepareReadyThreadForRescheduling.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1400CF620 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1400D0D20 (KiUpdateThreadPriority.c)
 *     KiSetLockOwnershipQuantum @ 0x140117520 (KiSetLockOwnershipQuantum.c)
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

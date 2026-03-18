/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x1401172F4
 * Callers:
 *     KeSetPriorityBoost @ 0x1400CEEC0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF620 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E4C (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115688 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x1400ACBA8 (KiInsertDeferredReadyList.c)
 *     KiSetPriorityBoost @ 0x1401174C8 (KiSetPriorityBoost.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi

  v3 = a3;
  if ( (unsigned int)(a2 - 1) <= 0xD && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= *(_DWORD *)(a1 + 436) )
  {
    LOBYTE(a3) = 15;
    KiSetPriorityBoost(0LL, a1, a3, *(_QWORD *)(a1 + 72));
  }
  return KiInsertDeferredReadyList(v3, a1);
}

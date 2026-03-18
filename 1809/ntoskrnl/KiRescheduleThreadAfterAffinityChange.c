/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x140115688
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114D84 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x14011545C (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x14018CAB4 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x1400ACBA8 (KiInsertDeferredReadyList.c)
 *     KiPrcbInGroupAffinity @ 0x1400D5714 (KiPrcbInGroupAffinity.c)
 *     KiSelectNextThread @ 0x1400D7148 (KiSelectNextThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1401172F4 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140117760 (KiRemoveThreadFromAnyReadyQueue.c)
 */

__int64 __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8

  if ( a3 == 1 )
  {
    v11 = *(char *)(a1 + 195);
    KiRemoveThreadFromAnyReadyQueue(a4, a5, a1, v11);
    KiPrepareReadyThreadForRescheduling(a1, v11, a6);
  }
  else if ( a3 == 2 )
  {
    if ( !KiPrcbInGroupAffinity(a4, a2) )
    {
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
        if ( !*(_QWORD *)(v9 + 16) )
        {
          KiSelectNextThread(v7, a6, v8);
          return 1LL;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 112) |= 8u;
      }
    }
  }
  else if ( a3 == 3 && !KiPrcbInGroupAffinity(a4, a2) )
  {
    KiSelectNextThread(v12, a6, v13);
    KiInsertDeferredReadyList(a6, a1);
  }
  return 0LL;
}

/*
 * XREFs of ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C0142284
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0141D14 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0142114 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02D48D8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

PSLIST_ENTRY __fastcall UmfdCancelServerOutstandingRequests(union _SLIST_HEADER **a1)
{
  PSLIST_ENTRY result; // rax

  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList(*a1 + 1);
    if ( !result )
      break;
    *((_DWORD *)&result->Next + 2) = 2;
    CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel((CMultipleConsumerWorkQueue::CWaitableWorkItem *)result);
  }
  return result;
}

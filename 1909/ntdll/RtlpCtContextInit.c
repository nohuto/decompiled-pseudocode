/*
 * XREFs of RtlpCtContextInit @ 0x1800FBCAC
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB9F0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180009D9C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     TpAllocWork @ 0x180062D10 (TpAllocWork.c)
 *     ZwCreateEvent @ 0x18009D790 (ZwCreateEvent.c)
 *     RtlpCtContextFree @ 0x1800FBC50 (RtlpCtContextFree.c)
 */

__int64 __fastcall RtlpCtContextInit(__int64 **a1, int a2)
{
  __int64 *Heap; // rbx
  int Event; // edi

  *a1 = 0LL;
  Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 24LL);
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Event = ZwCreateEvent();
    if ( Event < 0
      || (Event = TpAllocWork((_PEB_LDR_DATA *)Heap, (__int64)RtlpRtlpCtWaitForWnfQuiescentWorker, (__int64)Heap, 0LL),
          Event < 0)
      || (Event = RtlpSubscribeWnfStateChangeNotificationInternal(
                    Heap + 1,
                    WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
                    a2,
                    (int)RtlpRtlpCtSelfSubscribeCallback,
                    (__int64)Heap,
                    0LL,
                    0,
                    4,
                    17),
          Event < 0) )
    {
      RtlpCtContextFree(Heap);
    }
    else
    {
      *a1 = Heap;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}

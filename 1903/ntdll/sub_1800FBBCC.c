/*
 * XREFs of sub_1800FBBCC @ 0x1800FBBCC
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB910 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     sub_180009D9C @ 0x180009D9C (sub_180009D9C.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     TpAllocWork @ 0x180062C70 (TpAllocWork.c)
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 *     sub_1800FBB70 @ 0x1800FBB70 (sub_1800FBB70.c)
 */

__int64 __fastcall sub_1800FBBCC(__int64 **a1, int a2)
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
      || (Event = TpAllocWork((struct _PEB_LDR_DATA *)Heap, (__int64)sub_1800FBCF0, (__int64)Heap, 0LL), Event < 0)
      || (Event = sub_180009D9C(Heap + 1, 0x41840B3EA3BCB875LL, a2, (int)sub_1800FBCD0, (__int64)Heap, 0LL, 0, 4, 17),
          Event < 0) )
    {
      sub_1800FBB70(Heap);
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

/*
 * XREFs of RtlpTpTimerRundown @ 0x18002F7D0
 * Callers:
 *     RtlDeleteTimer @ 0x18002F570 (RtlDeleteTimer.c)
 *     RtlpTpTimerFinalizationCallback @ 0x180030E80 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimerQueueEx @ 0x180087090 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlpTpTimerQueueRundown @ 0x1800871FC (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x1800A04A0 (ZwSetEvent.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 */

__int64 __fastcall RtlpTpTimerRundown(unsigned __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    NtClose(v3);
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}

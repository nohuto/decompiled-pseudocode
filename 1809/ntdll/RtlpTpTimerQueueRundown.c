/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x1800871FC
 * Callers:
 *     RtlpTpTimerRundown @ 0x18002F7D0 (RtlpTpTimerRundown.c)
 *     RtlDeleteTimerQueueEx @ 0x180087090 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A04A0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x1800A10B0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpTpTimerQueueRundown(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    ZwAlertThreadByThreadId(v2);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      ZwSetEvent(v3, 0LL);
  }
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}

/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x18008720C
 * Callers:
 *     RtlpTpTimerRundown @ 0x18002F7D0 (RtlpTpTimerRundown.c)
 *     RtlDeleteTimerQueueEx @ 0x1800870A0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A04C0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x1800A10D0 (ZwAlertThreadByThreadId.c)
 */

LOGICAL __fastcall RtlpTpTimerQueueRundown(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)a1[5];
  if ( v2 )
  {
    ZwAlertThreadByThreadId(v2);
  }
  else
  {
    v3 = (void *)a1[2];
    if ( v3 )
      ZwSetEvent(v3, 0LL);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}

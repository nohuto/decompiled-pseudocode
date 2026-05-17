/*
 * XREFs of sub_1800826E4 @ 0x1800826E4
 * Callers:
 *     sub_18003020C @ 0x18003020C (sub_18003020C.c)
 *     RtlDeleteTimerQueueEx @ 0x180082570 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18009D4B0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall sub_1800826E4(__int64 a1)
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

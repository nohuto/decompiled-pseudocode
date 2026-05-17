/*
 * XREFs of TppIteWakeWaiters @ 0x180066F8C
 * Callers:
 *     TppCallbackEpilog @ 0x1800351D0 (TppCallbackEpilog.c)
 *     TppSingleTimerExpiration @ 0x180036320 (TppSingleTimerExpiration.c)
 *     TppWorkPost @ 0x180038510 (TppWorkPost.c)
 *     TpStartAsyncIoOperation @ 0x180062A70 (TpStartAsyncIoOperation.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009DC60 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall TppIteWakeWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}

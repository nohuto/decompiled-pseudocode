/*
 * XREFs of TppIteWakeWaiters @ 0x180073E38
 * Callers:
 *     TppWorkPost @ 0x180014F60 (TppWorkPost.c)
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     TppSingleTimerExpiration @ 0x18002CE38 (TppSingleTimerExpiration.c)
 *     TppAlpcpExecuteCallback @ 0x180069EA0 (TppAlpcpExecuteCallback.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A10B0 (ZwAlertThreadByThreadId.c)
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

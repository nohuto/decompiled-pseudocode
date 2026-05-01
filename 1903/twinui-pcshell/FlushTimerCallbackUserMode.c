/*
 * XREFs of FlushTimerCallbackUserMode @ 0x180106310
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x180080A6C (LookUpTableFlushComplete.c)
 *     EnableFlushTimer @ 0x1801060D4 (EnableFlushTimer.c)
 *     LookUpTableFlushPartial @ 0x180106630 (LookUpTableFlushPartial.c)
 */

void __fastcall FlushTimerCallbackUserMode(PTP_CALLBACK_INSTANCE Instance, __int64 Context, PTP_TIMER Timer)
{
  if ( *(_BYTE *)(Context + 356) )
  {
    *(_BYTE *)(Context + 356) = 0;
    LookUpTableFlushComplete(Context);
  }
  else
  {
    LookUpTableFlushPartial(Context, Context, Timer);
  }
  if ( *(_DWORD *)(Context + 256) )
    EnableFlushTimer(*(struct _TP_TIMER **)(Context + 344), *(_DWORD *)(Context + 352));
}

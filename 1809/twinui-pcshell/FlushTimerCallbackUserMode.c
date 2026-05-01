/*
 * XREFs of FlushTimerCallbackUserMode @ 0x1800E3CF0
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x1800E3AB4 (EnableFlushTimer.c)
 *     LookUpTableFlushComplete @ 0x1800E4018 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1800E4214 (LookUpTableFlushPartial.c)
 */

void __fastcall FlushTimerCallbackUserMode(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer)
{
  if ( *((_BYTE *)Context + 356) )
  {
    *((_BYTE *)Context + 356) = 0;
    LookUpTableFlushComplete(Context, Context, Timer);
  }
  else
  {
    LookUpTableFlushPartial(Context, Context, Timer);
  }
  if ( *((_DWORD *)Context + 64) )
    EnableFlushTimer(*((struct _TP_TIMER **)Context + 43), *((_DWORD *)Context + 88));
}

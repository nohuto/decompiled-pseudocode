/*
 * XREFs of EnableFlushTimer @ 0x1800E3AB4
 * Callers:
 *     FlushTimerCallbackUserMode @ 0x1800E3CF0 (FlushTimerCallbackUserMode.c)
 *     InsertEventEntryInLookUpTable @ 0x1800E3D40 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

void __fastcall EnableFlushTimer(struct _TP_TIMER *a1, unsigned int a2)
{
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    pftDueTime = (struct _FILETIME)(-10000LL * a2);
    SetThreadpoolTimer(a1, &pftDueTime, 0, 0x1388u);
  }
}

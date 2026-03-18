/*
 * XREFs of CmSetLazyFlushState @ 0x14072BD9C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x14059D8E0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     CmpDisableLazyFlush @ 0x14013DD24 (CmpDisableLazyFlush.c)
 *     CmpEnableLazyFlush @ 0x140181F94 (CmpEnableLazyFlush.c)
 */

void __fastcall CmSetLazyFlushState(char a1)
{
  int v1; // eax

  if ( a1 )
  {
    CmpDoIdleProcessing = CmpPrevIdleProcessingState;
    if ( CmpEnableLazyFlushTimerInitialized )
    {
      CmpDisableLazyFlush(1u);
      KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -900000000LL, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
    }
    CmpEnableLazyFlush(4);
  }
  else
  {
    CmpDisableLazyFlush(4u);
    if ( CmpEnableLazyFlushTimerInitialized && (CmpHoldLazyFlush & 1) != 0 )
    {
      if ( KeCancelTimer(&CmpEnableLazyFlushTimer) )
        CmpEnableLazyFlush(1);
    }
    v1 = CmpDoIdleProcessing;
    CmpDoIdleProcessing = 0;
    CmpPrevIdleProcessingState = v1;
  }
}

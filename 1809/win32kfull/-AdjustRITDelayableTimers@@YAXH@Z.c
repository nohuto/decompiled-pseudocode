/*
 * XREFs of ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C010FF6C
 * Callers:
 *     SetTimerCoalescingTolerance @ 0x1C010FEE0 (SetTimerCoalescingTolerance.c)
 * Callees:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00173F0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     InternalSetTimer @ 0x1C0017750 (InternalSetTimer.c)
 *     SetRITTimer @ 0x1C01153C0 (SetRITTimer.c)
 */

void __fastcall AdjustRITDelayableTimers(int a1)
{
  struct _LIST_ENTRY *v2; // rax

  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    if ( a1 )
      v2 = (struct _LIST_ENTRY *)SetRITTimer(WPP_MAIN_CB.Queue.ListEntry.Flink, 1000LL, xxxHungAppDemon, 0LL);
    else
      v2 = (struct _LIST_ENTRY *)InternalSetTimer(
                                   0LL,
                                   (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                   gdwRITdemonTimerPowerSaveElapse,
                                   (__int64)xxxHungAppDemon,
                                   gdwRITdemonTimerPowerSaveCoalescing,
                                   4);
    WPP_MAIN_CB.Queue.ListEntry.Flink = v2;
  }
  if ( a1 )
  {
    if ( gtmridAniCursor )
    {
      gdwLastAniTick = 0;
      zzzAnimateCursor(0LL, 0LL, 0LL);
    }
  }
}

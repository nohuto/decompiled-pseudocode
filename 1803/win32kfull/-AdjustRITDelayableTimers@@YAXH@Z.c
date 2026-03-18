/*
 * XREFs of ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C00BC52C
 * Callers:
 *     SetTimerCoalescingTolerance @ 0x1C00BC4A0 (SetTimerCoalescingTolerance.c)
 * Callees:
 *     SetRITTimer @ 0x1C0019A20 (SetRITTimer.c)
 *     InternalSetTimer @ 0x1C001A1B0 (InternalSetTimer.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C001A6D0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 */

void __fastcall AdjustRITDelayableTimers(int a1)
{
  struct _LIST_ENTRY *v2; // rax

  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    if ( a1 )
      v2 = (struct _LIST_ENTRY *)SetRITTimer((int)WPP_MAIN_CB.Queue.ListEntry.Flink, 1000, (int)xxxHungAppDemon, 0);
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

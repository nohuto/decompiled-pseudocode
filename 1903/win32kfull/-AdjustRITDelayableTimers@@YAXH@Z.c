/*
 * XREFs of ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C011AF04
 * Callers:
 *     SetTimerCoalescingTolerance @ 0x1C011AE60 (SetTimerCoalescingTolerance.c)
 * Callees:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00AB280 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     InternalSetTimer @ 0x1C00AB650 (InternalSetTimer.c)
 *     SetRITTimer @ 0x1C011E2C0 (SetRITTimer.c)
 */

void __fastcall AdjustRITDelayableTimers(int a1)
{
  __int64 v2; // rax

  if ( gnRITdemonTimerId )
  {
    if ( a1 )
      v2 = SetRITTimer(gnRITdemonTimerId, 1000LL, xxxHungAppDemon, 0LL);
    else
      v2 = InternalSetTimer(
             0LL,
             gnRITdemonTimerId,
             gdwRITdemonTimerPowerSaveElapse,
             (__int64)xxxHungAppDemon,
             gdwRITdemonTimerPowerSaveCoalescing,
             4);
    gnRITdemonTimerId = v2;
  }
  if ( a1 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
    {
      gdwLastAniTick = 0;
      zzzAnimateCursor(0LL, 0LL, 0LL);
    }
  }
}

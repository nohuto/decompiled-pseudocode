/*
 * XREFs of ?vDisableTimers@@YAXK@Z @ 0x1C01320E0
 * Callers:
 *     vDisableSynchronize @ 0x1C0132020 (vDisableSynchronize.c)
 *     ?vDisableSynchronizeNKAPC@@YAXPEAX00@Z @ 0x1C0299020 (-vDisableSynchronizeNKAPC@@YAXPEAX00@Z.c)
 * Callees:
 *     UserKillTimer @ 0x1C0244CDC (UserKillTimer.c)
 */

void __fastcall vDisableTimers(char a1)
{
  if ( (a1 & 0x40) != 0 )
    --gcSynchronizeFlush;
  if ( a1 < 0 && --gcSynchronizeTimer < 0 )
  {
    if ( gidSynchronizeTimer )
    {
      UserKillTimer();
      gidSynchronizeTimer = 0LL;
    }
  }
}

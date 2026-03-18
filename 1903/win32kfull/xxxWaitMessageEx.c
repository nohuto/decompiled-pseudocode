/*
 * XREFs of xxxWaitMessageEx @ 0x1C01E4460
 * Callers:
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C00AE450 (ClientWaitMessageExMPH.c)
 */

__int64 __fastcall xxxWaitMessageEx(unsigned int a1, int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL) <= 0 )
    return xxxSleepThread2(a1, a2, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(a1, a2);
}

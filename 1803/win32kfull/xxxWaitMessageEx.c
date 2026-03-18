/*
 * XREFs of xxxWaitMessageEx @ 0x1C01AC5FC
 * Callers:
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C012B460 (ClientWaitMessageExMPH.c)
 */

__int64 __fastcall xxxWaitMessageEx(unsigned int a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL) <= 0 )
    return xxxSleepThread2(a1, a2, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(a1, a2);
}

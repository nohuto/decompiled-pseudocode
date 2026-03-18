/*
 * XREFs of xxxWaitMessageEx @ 0x1C01CF7DC
 * Callers:
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C00FEDCC (ClientWaitMessageExMPH.c)
 */

__int64 __fastcall xxxWaitMessageEx(unsigned int a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL) <= 0 )
    return xxxSleepThread2(a1, a2, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(a1, a2);
}

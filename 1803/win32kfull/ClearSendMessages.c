/*
 * XREFs of ClearSendMessages @ 0x1C0035CC0
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}

/*
 * XREFs of ClearSendMessages @ 0x1C001D3C8
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}

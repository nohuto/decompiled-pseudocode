/*
 * XREFs of ClearSendMessages @ 0x1C00973B0
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxInterSendMsgEx @ 0x1C00A0510 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}

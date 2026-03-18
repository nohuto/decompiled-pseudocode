/*
 * XREFs of ClearSendMessages @ 0x1C00380E0
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}

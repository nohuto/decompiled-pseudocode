/*
 * XREFs of IPostQuitMessage @ 0x1C00BA650
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00BA518 (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1C00BA630 (_PostQuitMessage.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 * Callees:
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     LogQMsg @ 0x1C01A2080 (LogQMsg.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a2;
  if ( gMsgQLog )
  {
    memset(v5, 0, 0xA0uLL);
    v5[2] = 0LL;
    v5[5] = 0LL;
    LODWORD(v5[3]) = 18;
    v5[4] = v3;
    LogQMsg(v5);
  }
  EtwTraceWakePump(a1, 0LL, 18LL);
  *(_DWORD *)(a1 + 480) |= 0x40000000u;
  *(_DWORD *)(a1 + 576) = v3;
  SetWakeBit(a1, 0x108u);
  return 1LL;
}

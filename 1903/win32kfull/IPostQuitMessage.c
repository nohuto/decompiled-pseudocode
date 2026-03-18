/*
 * XREFs of IPostQuitMessage @ 0x1C00DA2F0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00D9FB8 (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1C00DA2D0 (_PostQuitMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     LogQMsg @ 0x1C01D6C58 (LogQMsg.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _QWORD v5[23]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a2;
  if ( (_DWORD)gMsgQLog )
  {
    memset(v5, 0, 0xA8uLL);
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

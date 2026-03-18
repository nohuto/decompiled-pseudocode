/*
 * XREFs of IPostQuitMessage @ 0x1C00EAD80
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00EAB60 (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1C00EAD60 (_PostQuitMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     LogQMsg @ 0x1C01C3964 (LogQMsg.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _QWORD v5[23]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a2;
  if ( gMsgQLog )
  {
    memset(v5, 0, 0xA8uLL);
    v5[2] = 0LL;
    v5[5] = 0LL;
    LODWORD(v5[3]) = 18;
    v5[4] = v3;
    LogQMsg(v5);
  }
  EtwTraceWakePump(a1, 0LL, 18LL);
  *(_DWORD *)(a1 + 488) |= 0x40000000u;
  *(_DWORD *)(a1 + 584) = v3;
  SetWakeBit(a1, 0x108u);
  return 1LL;
}

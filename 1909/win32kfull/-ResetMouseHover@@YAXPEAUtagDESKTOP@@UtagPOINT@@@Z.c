/*
 * XREFs of ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C00EA1BC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     TrackMouseEvent @ 0x1C00EA080 (TrackMouseEvent.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00EA334 (_SetSystemTimer.c)
 */

void __fastcall ResetMouseHover(struct tagDESKTOP *a1, struct tagPOINT a2)
{
  LONG x; // ebx
  int v4; // edx
  int v5; // r8d
  LONG y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  SetSystemTimer(*((_QWORD *)a1 + 23), 65530, *((_DWORD *)a1 + 53), (unsigned int)xxxSystemTimerProc, 0);
  v4 = HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) >> 1;
  v5 = LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) >> 1;
  *((_DWORD *)a1 + 49) = x - (HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) >> 1);
  *((_DWORD *)a1 + 50) = y - v5;
  *((_DWORD *)a1 + 51) = v4 + x;
  *((_DWORD *)a1 + 52) = v5 + y;
}

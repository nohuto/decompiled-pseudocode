/*
 * XREFs of SetMouseTrails @ 0x1C0081ACC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     xxxRemoteReconnect @ 0x1C015EF70 (xxxRemoteReconnect.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     SetPointer @ 0x1C0082DE0 (SetPointer.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 result; // rax

  SetPointer(0LL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = a1 != 0 ? a1 - 1 : 0;
  SetPointer(1LL);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) != 0;
    if ( (_DWORD)result != (WPP_MAIN_CB.Dpc.SystemArgument2 != 0LL) )
    {
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
      {
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gTermIO[2] + 456LL) + 24LL), 1025, 0, 0);
      }
      else
      {
        result = FindTimer(0, WPP_MAIN_CB.Dpc.SystemArgument2, 4, 1, 0LL);
        WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
      }
    }
  }
  return result;
}

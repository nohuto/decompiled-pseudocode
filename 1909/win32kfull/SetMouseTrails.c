/*
 * XREFs of SetMouseTrails @ 0x1C01394B4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 * Callees:
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     SetPointer @ 0x1C0138BE0 (SetPointer.c)
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
        result = FindTimer(0LL, (__int64)WPP_MAIN_CB.Dpc.SystemArgument2, 4u, 1, 0LL);
        WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
      }
    }
  }
  return result;
}

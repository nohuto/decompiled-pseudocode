/*
 * XREFs of SetMouseTrails @ 0x1C00BFDA4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     xxxRemoteReconnect @ 0x1C0137320 (xxxRemoteReconnect.c)
 * Callees:
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 result; // rax

  SetPointer(0LL);
  gMouseTrails = a1 != 0 ? a1 - 1 : 0;
  SetPointer(1LL);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = gMouseTrails != 0;
    if ( (_DWORD)result != (gtmridMouseTrails != 0) )
    {
      if ( gMouseTrails )
      {
        return PostMessage(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)&gTermIO + 2) + 456LL) + 24LL), 0x401u, 0LL, 0LL);
      }
      else
      {
        result = FindTimer(0LL, gtmridMouseTrails, 4u, 1, 0LL);
        gtmridMouseTrails = 0LL;
      }
    }
  }
  return result;
}

/*
 * XREFs of SetMouseTrails @ 0x1C00BD258
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 *     xxxRemoteReconnect @ 0x1C01577E0 (xxxRemoteReconnect.c)
 * Callees:
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
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
        return PostMessage(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)&gTermIO + 2) + 464LL) + 24LL), 1025LL, 0LL, 0LL);
      }
      else
      {
        result = FindTimer(0, gtmridMouseTrails, 4, 1, 0LL);
        gtmridMouseTrails = 0LL;
      }
    }
  }
  return result;
}

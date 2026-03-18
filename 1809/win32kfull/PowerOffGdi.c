/*
 * XREFs of PowerOffGdi @ 0x1C01591A0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C00BCFE0 (TransitionCursorSuppressionState.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 PowerOffGdi()
{
  int MDEVPowerState; // ebx
  __int64 result; // rax
  struct tagWND *v2; // rcx

  TransitionCursorSuppressionState(2u, 0);
  MDEVPowerState = DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16LL));
  if ( MDEVPowerState )
  {
    SafeDisableMDEV(2LL);
    DestroyMonitorDCs();
    gbGDIOn = 0;
  }
  DrvDxgkLogCodePointPacket(12LL, *((_DWORD *)&gPowerState + 15) == 5, 0LL);
  result = DrvSetMDEVPowerState(*(_QWORD *)(gpDispInfo + 16LL), 0LL);
  if ( MDEVPowerState )
  {
    result = gPowerState;
    if ( *((_DWORD *)&gPowerState + 15) == 5 )
    {
      result = *(_QWORD *)(gptiCurrent + 456LL);
      if ( result )
      {
        result = *(_QWORD *)(result + 8);
        if ( result )
        {
          v2 = *(struct tagWND **)(result + 168);
          if ( v2 )
            return PostMessage(v2, 0x218u, 0xCuLL, 0LL);
        }
      }
    }
  }
  return result;
}

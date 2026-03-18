/*
 * XREFs of PowerOnGdi @ 0x1C01616D0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C010DF50 (xxxRemoteDisconnect.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     TransitionCursorSuppressionState @ 0x1C013ACC0 (TransitionCursorSuppressionState.c)
 *     ProcessDelayedSdc @ 0x1C01617E0 (ProcessDelayedSdc.c)
 *     xxxUserResetDisplayDevice @ 0x1C0161810 (xxxUserResetDisplayDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall PowerOnGdi(__int64 a1, int a2, unsigned int a3)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16LL)) )
  {
    DrvDxgkLogCodePointPacket(11LL, gbFullScreen == 1, gulDelayedSwitchAction);
    EtwTracePowerOnGdiBegin(a3);
    gbGDIOn = 1;
    SafeEnableMDEV(2LL);
    if ( gbFullScreen == 1 && gspwndFullScreen )
    {
      v9[0] = &gspwndFullScreen;
      v9[1] = GetDesktopWindow(gspwndFullScreen);
      HMAssignmentLock(v9);
      gbFullScreen = 2;
      xxxMakeWindowForegroundWithState(0LL, 1);
    }
    DrvSetMDEVPowerState(*(_QWORD *)(gpDispInfo + 16LL), 1LL);
    xxxUserResetDisplayDevice(v8, v7);
    if ( a2 )
      ProcessDelayedSdc(a1);
  }
  TransitionCursorSuppressionState(2u, 0);
  return EtwTracePowerOnGdiEnd(a3);
}

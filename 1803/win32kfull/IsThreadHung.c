/*
 * XREFs of IsThreadHung @ 0x1C00612F0
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0006F60 (xxxSwitchToThisWindow.c)
 *     DoExplorerHangDetection @ 0x1C0007538 (DoExplorerHangDetection.c)
 *     xxxQueryInformationThread @ 0x1C000B7BC (xxxQueryInformationThread.c)
 *     zzzCancelJournalling @ 0x1C000BD40 (zzzCancelJournalling.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0062BC0 (_GetWindowTrackInfoAsync.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01D6690 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C01FCC08 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsThreadHung(_QWORD *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a2 )
    a2 = gdwHungAppTimeout;
  v4 = a1[55];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) > a2
    && (*(_WORD *)(v4 + 10) & 0x1C07) == 0
    && !(unsigned int)PsGetThreadFreezeCount(*a1)
    && (*(_BYTE *)(a1[52] + 12LL) & 0x40) == 0 )
  {
    return 1;
  }
  return v3;
}

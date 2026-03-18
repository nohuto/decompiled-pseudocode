/*
 * XREFs of IsThreadHung @ 0x1C013354C
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0009F30 (xxxSwitchToThisWindow.c)
 *     DoExplorerHangDetection @ 0x1C000A220 (DoExplorerHangDetection.c)
 *     xxxQueryInformationThread @ 0x1C000C908 (xxxQueryInformationThread.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0133430 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0137190 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     zzzCancelJournalling @ 0x1C0139E10 (zzzCancelJournalling.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0211D7C (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023D4C4 (-ForceForeground@CWindow@@QEAA_NXZ.c)
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

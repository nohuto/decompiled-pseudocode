/*
 * XREFs of IsThreadHung @ 0x1C00D0CAC
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0006C70 (xxxSwitchToThisWindow.c)
 *     DoExplorerHangDetection @ 0x1C00073C0 (DoExplorerHangDetection.c)
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     xxxQueryInformationThread @ 0x1C00BB038 (xxxQueryInformationThread.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00D0D34 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0123390 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     zzzCancelJournalling @ 0x1C012B2A4 (zzzCancelJournalling.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01FB330 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C022565C (-ForceForeground@CWindow@@QEAA_NXZ.c)
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
  v4 = a1[56];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) > a2
    && (*(_WORD *)(v4 + 10) & 0x1C07) == 0
    && !(unsigned int)PsGetThreadFreezeCount(*a1)
    && (*(_BYTE *)(a1[53] + 12LL) & 0x40) == 0 )
  {
    return 1;
  }
  return v3;
}

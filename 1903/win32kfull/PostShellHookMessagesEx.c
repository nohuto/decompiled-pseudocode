/*
 * XREFs of PostShellHookMessagesEx @ 0x1C0017CD4
 * Callers:
 *     xxxSetInformationThread @ 0x1C000DBD0 (xxxSetInformationThread.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0010D60 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001F240 (EditionHandleAndPostKeyEvent.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01507E8 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C015D2E0 (xxxRedrawFrameAndHook.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01D4F10 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D52EC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D5514 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?WinlogonWinSpaceCallback@@YAX_K_J@Z @ 0x1C01DC090 (-WinlogonWinSpaceCallback@@YAX_K_J@Z.c)
 *     PTPEnableHotkeyCallback @ 0x1C020F920 (PTPEnableHotkeyCallback.c)
 * Callees:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0017D28 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 */

void __fastcall PostShellHookMessagesEx(unsigned int a1, __int64 a2, struct tagINPUT_MESSAGE_SOURCE *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rsi

  v3 = a1;
  v5 = a2;
  if ( a1 == 12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(12, a2, 2, 10, (__int64)&WPP_96a4b716de4d340ab0b6048e502c48be_Traceguids);
    }
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  }
  _PostShellHookMsgWorker(*(_DWORD *)(gpsi + 928LL), v3, v5, a3);
}

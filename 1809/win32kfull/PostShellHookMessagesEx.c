/*
 * XREFs of PostShellHookMessagesEx @ 0x1C00B3938
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00D21B0 (EditionHandleAndPostKeyEvent.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C012553C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C0156C90 (xxxRedrawFrameAndHook.c)
 *     PTPEnableHotkeyCallback @ 0x1C01BBE20 (PTPEnableHotkeyCallback.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01C11A0 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01C1374 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01C1588 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?WinlogonWinSpaceCallback@@YAX_K_J@Z @ 0x1C01C8AF0 (-WinlogonWinSpaceCallback@@YAX_K_J@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01E2810 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B398C (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __fastcall PostShellHookMessagesEx(unsigned int a1, __int64 a2, struct tagINPUT_MESSAGE_SOURCE *a3)
{
  unsigned __int64 v3; // rbx

  v3 = a1;
  if ( a1 == 12 )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  _PostShellHookMsgWorker(*(_DWORD *)(gpsi + 928LL), v3, a2, a3);
}

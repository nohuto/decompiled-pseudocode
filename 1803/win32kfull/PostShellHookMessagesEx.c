/*
 * XREFs of PostShellHookMessagesEx @ 0x1C006E9A8
 * Callers:
 *     xxxSetInformationThread @ 0x1C000E040 (xxxSetInformationThread.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00569F0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00E6CC8 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F3360 (EditionHandleAndPostKeyEvent.c)
 *     xxxRedrawFrameAndHook @ 0x1C0136230 (xxxRedrawFrameAndHook.c)
 *     PTPEnableHotkeyCallback @ 0x1C019ADC0 (PTPEnableHotkeyCallback.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C019FF00 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A00DC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A02F0 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?WinlogonWinSpaceCallback@@YAX_K_J@Z @ 0x1C01A6AD0 (-WinlogonWinSpaceCallback@@YAX_K_J@Z.c)
 * Callees:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C006E9FC (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __fastcall PostShellHookMessagesEx(unsigned int a1, __int64 a2, struct tagINPUT_MESSAGE_SOURCE *a3)
{
  unsigned __int64 v3; // rbx

  v3 = a1;
  if ( a1 == 12 )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  _PostShellHookMsgWorker(*(_DWORD *)(gpsi + 928LL), v3, a2, a3);
}

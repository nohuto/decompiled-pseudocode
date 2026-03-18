/*
 * XREFs of PostShellHookMessages @ 0x1C006E990
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxFlashWindow @ 0x1C006312C (xxxFlashWindow.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxSetTrayWindow @ 0x1C006E028 (xxxSetTrayWindow.c)
 *     xxxRedrawTitle @ 0x1C006E8C0 (xxxRedrawTitle.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     CalcWindowFullScreen @ 0x1C007290C (CalcWindowFullScreen.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C007CFE4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C00E6BA8 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C00E7880 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C006E9A8 (PostShellHookMessagesEx.c)
 */

__int64 __fastcall PostShellHookMessages(unsigned __int64 a1, __int64 a2)
{
  return PostShellHookMessagesEx(a1, a2, 0LL);
}

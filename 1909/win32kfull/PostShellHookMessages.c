/*
 * XREFs of PostShellHookMessages @ 0x1C0017B0C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxFlashWindow @ 0x1C0015284 (xxxFlashWindow.c)
 *     xxxSetTrayWindow @ 0x1C0017964 (xxxSetTrayWindow.c)
 *     xxxRedrawTitle @ 0x1C0017A40 (xxxRedrawTitle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0031684 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     CalcWindowFullScreen @ 0x1C0032BBC (CalcWindowFullScreen.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxNotifyMonitorChanged @ 0x1C006935C (xxxNotifyMonitorChanged.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0151364 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0152590 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0017B24 (PostShellHookMessagesEx.c)
 */

__int64 __fastcall PostShellHookMessages(unsigned __int64 a1, __int64 a2)
{
  return PostShellHookMessagesEx(a1, a2, 0LL);
}

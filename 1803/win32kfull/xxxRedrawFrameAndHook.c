/*
 * XREFs of xxxRedrawFrameAndHook @ 0x1C0136230
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     PostShellHookMessagesEx @ 0x1C006E9A8 (PostShellHookMessagesEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxRedrawFrameAndHook(struct tagWND *a1)
{
  unsigned __int64 v2; // rbx

  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  if ( (unsigned int)IsTrayWindow(a1) )
  {
    v2 = *(_QWORD *)a1;
    xxxCallHook(6, v2, 0LL, 10);
    PostShellHookMessagesEx(6u, v2, 0LL);
  }
  return 1LL;
}

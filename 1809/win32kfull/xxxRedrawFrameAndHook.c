/*
 * XREFs of xxxRedrawFrameAndHook @ 0x1C0156C90
 * Callers:
 *     <none>
 * Callees:
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     PostShellHookMessagesEx @ 0x1C00B3938 (PostShellHookMessagesEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
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

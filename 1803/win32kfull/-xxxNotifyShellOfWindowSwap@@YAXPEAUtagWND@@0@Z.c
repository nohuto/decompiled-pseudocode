/*
 * XREFs of ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C00E7880
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E711C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C006E9FC (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

void __fastcall xxxNotifyShellOfWindowSwap(struct tagWND *a1, struct tagWND *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a2;
  _PostShellHookMsgWorker(*(unsigned __int16 *)(gpsi + 1378LL), *(_QWORD *)a1, *(_QWORD *)a2, 0LL);
  PostShellHookMessages(0xEuLL, v3);
  PostShellHookMessages(0xDuLL, v2);
  xxxCallHook(13, v2, v3, 10);
}

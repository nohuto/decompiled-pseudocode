/*
 * XREFs of ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01E32B4
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E33CC (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B398C (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

void __fastcall xxxNotifyShellOfWindowSwap(struct tagWND *a1, unsigned int **a2)
{
  unsigned __int64 v2; // rdi
  unsigned int *v3; // rbx

  v2 = *(_QWORD *)a1;
  v3 = *a2;
  _PostShellHookMsgWorker(*(unsigned __int16 *)(gpsi + 1378LL), *(_QWORD *)a1, (__int64)*a2, 0LL);
  PostShellHookMessages(0xEuLL, (__int64)v3);
  PostShellHookMessages(0xDuLL, v2);
  xxxCallHook(0xDu, v2, v3, 10);
}

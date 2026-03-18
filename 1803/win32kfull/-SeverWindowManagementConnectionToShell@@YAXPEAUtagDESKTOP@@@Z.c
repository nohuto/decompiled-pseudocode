/*
 * XREFs of ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01A47F4
 * Callers:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01A4824 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     SetShellWndManagementWindow @ 0x1C00F1D88 (SetShellWndManagementWindow.c)
 */

void __fastcall SeverWindowManagementConnectionToShell(struct tagDESKTOP *a1)
{
  struct tagWND *v1; // rax

  v1 = (struct tagWND *)SetShellWndManagementWindow((__int64)a1, 0LL);
  if ( v1 )
    PostMessage(v1, 0x343u, 0LL, 0LL);
}

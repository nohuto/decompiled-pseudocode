/*
 * XREFs of ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C01FCF40
 * Callers:
 *     xxxCloneWindowPosAndArrangement @ 0x1C019EF98 (xxxCloneWindowPosAndArrangement.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall CWindowGroupManager::NotifyTemplateApplied(
        CWindowGroupManager *this,
        const struct tagWND *a2,
        const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *a3)
{
  __int128 v4; // xmm1
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  _BYTE v7[40]; // [rsp+30h] [rbp-38h] BYREF

  if ( *((_DWORD *)a2 + 70) )
  {
    v5 = *(_QWORD *)a2;
    v6 = 10;
    memset(v7, 0, sizeof(v7));
    v4 = *((_OWORD *)a3 + 1);
    *(_OWORD *)v7 = *(_OWORD *)a3;
    *(_QWORD *)&v7[32] = *((_QWORD *)a3 + 4);
    *(_OWORD *)&v7[16] = v4;
    xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)&v5);
  }
}

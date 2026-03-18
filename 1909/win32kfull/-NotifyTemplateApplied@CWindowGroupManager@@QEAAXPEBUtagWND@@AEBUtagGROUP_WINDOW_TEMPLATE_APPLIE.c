/*
 * XREFs of ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C023D82C
 * Callers:
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D39F8 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0133430 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall CWindowGroupManager::NotifyTemplateApplied(
        CWindowGroupManager *this,
        const struct tagWND *a2,
        const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *a3)
{
  __int128 v4; // xmm1
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  _DWORD v7[11]; // [rsp+2Ch] [rbp-3Ch] BYREF

  if ( *((_DWORD *)a2 + 77) )
  {
    v5 = *(_QWORD *)a2;
    v6 = 10;
    memset(v7, 0, sizeof(v7));
    v4 = *((_OWORD *)a3 + 1);
    *(_OWORD *)&v7[1] = *(_OWORD *)a3;
    *(_QWORD *)&v7[9] = *((_QWORD *)a3 + 4);
    *(_OWORD *)&v7[5] = v4;
    anonymous_namespace_::NotifyIAMWindowManagementEvent((__int64)&v5);
  }
}

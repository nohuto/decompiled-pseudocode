/*
 * XREFs of ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C02259A4
 * Callers:
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01BFE44 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00D0D34 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall CWindowGroupManager::NotifyTemplateApplied(
        CWindowGroupManager *this,
        const struct tagWND *a2,
        const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *a3)
{
  __int128 v4; // xmm1
  _BYTE v5[40]; // [rsp+30h] [rbp-38h] BYREF

  if ( *((_DWORD *)a2 + 73) )
  {
    memset(v5, 0, sizeof(v5));
    v4 = *((_OWORD *)a3 + 1);
    *(_OWORD *)v5 = *(_OWORD *)a3;
    *(_QWORD *)&v5[32] = *((_QWORD *)a3 + 4);
    *(_OWORD *)&v5[16] = v4;
    anonymous_namespace_::NotifyIAMWindowManagementEvent();
  }
}

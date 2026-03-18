/*
 * XREFs of ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C023DE4C
 * Callers:
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D3B88 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0016D58 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall CWindowGroupManager::NotifyTemplateApplied(
        CWindowGroupManager *this,
        const struct tagWND *a2,
        const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *a3)
{
  __int128 v4; // xmm1
  _DWORD v5[11]; // [rsp+2Ch] [rbp-3Ch] BYREF

  if ( *((_DWORD *)a2 + 77) )
  {
    memset(v5, 0, sizeof(v5));
    v4 = *((_OWORD *)a3 + 1);
    *(_OWORD *)&v5[1] = *(_OWORD *)a3;
    *(_QWORD *)&v5[9] = *((_QWORD *)a3 + 4);
    *(_OWORD *)&v5[5] = v4;
    anonymous_namespace_::NotifyIAMWindowManagementEvent();
  }
}

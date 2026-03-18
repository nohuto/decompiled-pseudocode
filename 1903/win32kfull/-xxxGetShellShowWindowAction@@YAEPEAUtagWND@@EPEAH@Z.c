/*
 * XREFs of ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C002E44C
 * Callers:
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 * Callees:
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C000FA2C (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C002E774 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C023DFC4 (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 */

unsigned __int8 __fastcall xxxGetShellShowWindowAction(struct tagWND *this, unsigned __int8 a2, int *a3)
{
  int v7; // esi
  unsigned __int8 v8; // al
  int v9; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-1Ch] BYREF
  struct tagRECT v11; // [rsp+38h] [rbp-18h] BYREF

  *a3 = 0;
  if ( IsWindowSubjectToShellWindowBehavior(this, 1u) )
  {
    v7 = 1;
    if ( a2 == 7 )
      goto LABEL_15;
    if ( a2 > 7u )
    {
      if ( a2 > 9u )
        goto LABEL_15;
    }
    else if ( !a2 || a2 != 1 && (a2 <= 2u || a2 > 5u) )
    {
      goto LABEL_15;
    }
    v9 = 0;
    *(_QWORD *)&v11.left = 0LL;
    *(_QWORD *)&v11.right = 0LL;
    v8 = CallShell::xxxShowWindowPolicyHandler(
           this,
           (struct tagWND *)a2,
           &v10,
           (enum SHELL_SPECIFIED_SHOW_COMMAND *)&v9,
           (struct WINDOW_GROUP_ID *)&v11);
    v7 = v8;
    if ( !v8 )
    {
LABEL_15:
      *a3 = v7;
      return a2;
    }
    if ( !(_WORD)v10 )
    {
      if ( v9 && !*((_DWORD *)this + 77) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
        WindowGroupingWindowManagement::SetWindowGroup(&v9, this, 0LL);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
      }
      goto LABEL_12;
    }
    if ( (unsigned __int16)v10 != 1 )
    {
      switch ( (unsigned __int16)v10 )
      {
        case 2u:
          a2 = (unsigned __int8)(a2 - 7) <= 1u ? 17 : 3;
          goto LABEL_12;
        case 3u:
          if ( !xxxEndSetWindowArrangement(this, &v11, 0LL, (unsigned __int8)(a2 - 7) <= 1u) )
          {
            v7 = 0;
            goto LABEL_12;
          }
          break;
        case 4u:
          if ( !v9 || *((_DWORD *)this + 77) || (int)WindowGroupingWindowManagement::SetWindowGroup(&v9, this, 1LL) < 0 )
          {
LABEL_12:
            if ( v7 && (v10 & 0x10000) != 0 )
            {
              *((_DWORD *)this + 81) |= 4u;
              goto LABEL_15;
            }
            goto LABEL_14;
          }
          break;
        default:
          v7 = 0;
LABEL_14:
          *((_DWORD *)this + 81) &= ~4u;
          goto LABEL_15;
      }
    }
    a2 = -1;
    goto LABEL_12;
  }
  return a2;
}

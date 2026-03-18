/*
 * XREFs of xxxNotifyShellWindowBorderExitIfEntered @ 0x1C005FFF8
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 * Callees:
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C006003C (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *__fastcall xxxNotifyShellWindowBorderExitIfEntered(
        ShellWindowManagementProperty *a1,
        __int64 a2,
        int a3)
{
  struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *result; // rax
  __int64 v5; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-48h] BYREF

  result = ShellWindowManagementProperty::GetShellWndManagementProperty(a1, 0LL, a3);
  if ( result )
  {
    if ( (*(_DWORD *)result & 1) != 0 )
    {
      *(_DWORD *)result &= ~1u;
      memset(v6, 0, sizeof(v6));
      v5 = *(_QWORD *)a1;
      v6[2] = 0LL;
      v6[3] = 0LL;
      v6[0] = v5;
      LODWORD(v6[1]) = 6;
      return (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v6);
    }
  }
  return result;
}

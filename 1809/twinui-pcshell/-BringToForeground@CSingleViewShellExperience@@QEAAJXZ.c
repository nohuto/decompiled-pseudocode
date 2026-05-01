/*
 * XREFs of ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x18007B084
 * Callers:
 *     ?BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x18007B050 (-BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180159E40 (-HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Window.c)
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x18015D6C8 (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?BringToForeground@CStartExperienceManager@@UEAAJXZ @ 0x180169F70 (-BringToForeground@CStartExperienceManager@@UEAAJXZ.c)
 *     ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x18016B280 (-TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Inter.c)
 *     ?BringToForegound@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18017CF54 (-BringToForegound@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::BringToForeground(CSingleViewShellExperience *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 3) )
    return 0LL;
  if ( *((_DWORD *)this + 10) != 2 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 72LL))(*((_QWORD *)this + 10));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C002DD40
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C0006810 (NtUserSetCoreWindowPartner.c)
 *     NtUserSetShellWindowEx @ 0x1C000B060 (NtUserSetShellWindowEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C002DB30 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetCoreWindow @ 0x1C0042650 (NtUserSetCoreWindow.c)
 *     NtUserFlashWindowEx @ 0x1C015D940 (NtUserFlashWindowEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateHWNDND(HWND a1, struct tagWND **a2)
{
  __int64 v3; // rax

  v3 = ValidateHwnd(a1);
  *a2 = (struct tagWND *)v3;
  return v3 && (((*(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0;
}

/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006E0A0
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C0008A20 (NtUserSetCoreWindowPartner.c)
 *     NtUserSetShellWindowEx @ 0x1C00091A0 (NtUserSetShellWindowEx.c)
 *     NtUserSetCoreWindow @ 0x1C000BCF0 (NtUserSetCoreWindow.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C006DF00 (NtUserDeferWindowPosAndBand.c)
 *     NtUserFlashWindowEx @ 0x1C0213BB0 (NtUserFlashWindowEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateHWNDND(HWND a1, struct tagWND **a2)
{
  __int64 v3; // rax

  v3 = ValidateHwnd(a1);
  *a2 = (struct tagWND *)v3;
  return v3 && (((*(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0;
}

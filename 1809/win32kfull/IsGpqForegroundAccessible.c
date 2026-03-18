/*
 * XREFs of IsGpqForegroundAccessible @ 0x1C00AFFBC
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00ACE38 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C00AF794 (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundInaccessible @ 0x1C00AFB20 (EditionIsGpqForegroundInaccessible.c)
 *     NtUserGetKeyboardState @ 0x1C00AFB50 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C00AFD20 (NtUserGetKeyState.c)
 *     EditionIsGpqForegroundAccessible @ 0x1C01C3270 (EditionIsGpqForegroundAccessible.c)
 *     xxxInjectTouchInput @ 0x1C01CBA28 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsGpqForegroundAccessibleForPti @ 0x1C00AFFE8 (IsGpqForegroundAccessibleForPti.c)
 */

__int64 __fastcall IsGpqForegroundAccessible(unsigned int a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  return IsGpqForegroundAccessibleForPti(ThreadWin32Thread, a1);
}

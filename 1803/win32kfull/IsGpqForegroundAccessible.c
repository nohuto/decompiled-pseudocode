/*
 * XREFs of IsGpqForegroundAccessible @ 0x1C005DF64
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C005B7C4 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C005D7AC (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundInaccessible @ 0x1C005DA20 (EditionIsGpqForegroundInaccessible.c)
 *     NtUserGetKeyboardState @ 0x1C005DB30 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C005DCF0 (NtUserGetKeyState.c)
 *     EditionIsGpqForegroundAccessible @ 0x1C01A19C0 (EditionIsGpqForegroundAccessible.c)
 *     xxxInjectTouchInput @ 0x1C01A9474 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IsGpqForegroundAccessibleForPti @ 0x1C005DF90 (IsGpqForegroundAccessibleForPti.c)
 */

__int64 __fastcall IsGpqForegroundAccessible(unsigned int a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  return IsGpqForegroundAccessibleForPti(ThreadWin32Thread, a1);
}

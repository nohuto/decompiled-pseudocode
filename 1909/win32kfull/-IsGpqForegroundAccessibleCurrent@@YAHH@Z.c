/*
 * XREFs of ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C001F58C
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C001B138 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C001F0D0 (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C001F3A0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     NtUserGetKeyboardState @ 0x1C001F3D0 (NtUserGetKeyboardState.c)
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00ED088 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  return IsGpqForegroundAccessibleExplicit(
           a1,
           ThreadWin32Thread,
           *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 872LL),
           *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 12LL) & 0x80000000);
}

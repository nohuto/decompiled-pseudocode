/*
 * XREFs of ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C001DB9C
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C001D6E4 (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C001D9B0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     NtUserGetKeyboardState @ 0x1C001D9E0 (NtUserGetKeyboardState.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C011C2DC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C0112468 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
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

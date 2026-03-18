/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C0089628
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C00292C4 (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  void *v5; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
    || (unsigned int)IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v2 = ComposeWindow(a1);
    v5 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5), v3, v4);
    DwmAsyncChildStyleChange(v5);
  }
  else
  {
    return 4063234;
  }
  return v2;
}

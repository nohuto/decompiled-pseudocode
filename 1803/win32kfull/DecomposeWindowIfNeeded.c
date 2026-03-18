/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C00C3AB8
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C007605C (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
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

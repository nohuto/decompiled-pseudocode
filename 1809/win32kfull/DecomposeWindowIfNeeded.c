/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C000D61C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C007A5A8 (IsChildWindowDpiBoundaryDesktopComposed.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // esi
  void *v3; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed() || (unsigned int)IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v2 = ComposeWindow(a1);
    v3 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v3);
  }
  else
  {
    return 4063234;
  }
  return v2;
}

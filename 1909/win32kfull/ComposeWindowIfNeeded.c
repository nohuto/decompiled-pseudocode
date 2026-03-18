/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C00287CC
 * Callers:
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetDisplayAffinity @ 0x1C02444BC (SetDisplayAffinity.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C00292C4 (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  void *v7; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2)
    || (unsigned int)IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v3 = ComposeWindow(a1);
    v7 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5), v5, v6);
    DwmAsyncChildStyleChange(v7);
  }
  else
  {
    return 4063234;
  }
  return v3;
}

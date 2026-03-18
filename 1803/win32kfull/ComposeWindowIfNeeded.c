/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C0075FC4
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C02031CC (SetDisplayAffinity.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C007605C (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  void *v7; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
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

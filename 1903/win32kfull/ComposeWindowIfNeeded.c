/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C0022350
 * Callers:
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetDisplayAffinity @ 0x1C0244BFC (SetDisplayAffinity.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C0022E54 (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     ComposeWindow @ 0x1C0045458 (ComposeWindow.c)
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

/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C007A504
 * Callers:
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C022BBCC (SetDisplayAffinity.c)
 * Callees:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C007A5A8 (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(__int64 a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  void *v11; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v4)
    || (unsigned int)IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v7 = ComposeWindow((struct tagWND *)a1, a2 != 0 ? 13 : 5);
    v8 = *(_QWORD *)(a1 + 40);
    v5 = v7;
    v9 = *(_DWORD *)(v8 + 28);
    v11 = (void *)ReferenceDwmApiPort(v8, v10);
    DwmAsyncChildStyleChange(v11, *(_QWORD *)a1, -16, v9);
  }
  else
  {
    return 4063234;
  }
  return v5;
}

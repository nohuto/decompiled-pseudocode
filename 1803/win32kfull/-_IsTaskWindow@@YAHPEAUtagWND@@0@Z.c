/*
 * XREFs of ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01BB774
 * Callers:
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01BB7F4 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00749EC (IsWindowUnderActiveLockScreen.c)
 */

__int64 __fastcall _IsTaskWindow(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  char *v4; // rcx
  __int64 v6; // rax

  v3 = 0;
  v4 = (char *)*((_QWORD *)a1 + 5);
  if ( ((v4[26] & 4) != 0 || v4[24] >= 0 && (v4[27] & 8) == 0)
    && ((v4[31] & 0x10) != 0 && !(unsigned int)GetWindowCloakState(a1) || a1 == a2) )
  {
    v6 = *((_QWORD *)a1 + 23);
    if ( (!v6 || (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 8) == 0)
      && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)a1) )
    {
      return 1;
    }
  }
  return v3;
}

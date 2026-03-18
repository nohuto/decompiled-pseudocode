/*
 * XREFs of ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C008883C
 * Callers:
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0088804 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C008883C (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C008883C (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     NextOwnedWindow @ 0x1C008BA50 (NextOwnedWindow.c)
 */

void __fastcall SetTopmost(struct tagWND *a1, int a2, int a3)
{
  struct tagWND *v6; // rbx
  struct tagWND *OwnedWindow; // rax

  SetOrClrWF(((*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL) >> 3) & 1) != a2, (__int64)a1, 0x304u, 1);
  if ( !a3 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      OwnedWindow = (struct tagWND *)NextOwnedWindow(v6, a1, *((_QWORD *)a1 + 13));
      v6 = OwnedWindow;
      if ( !OwnedWindow )
        break;
      SetTopmost(OwnedWindow, a2, 0);
    }
  }
}

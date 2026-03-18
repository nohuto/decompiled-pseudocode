/*
 * XREFs of ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C006E23C
 * Callers:
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C006DFF0 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C006E23C (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C006E23C (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     NextOwnedWindow @ 0x1C006FE0C (NextOwnedWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

void __fastcall SetTopmost(struct tagWND *a1, int a2, int a3)
{
  struct tagWND *v6; // rbx
  struct tagWND *OwnedWindow; // rax

  SetOrClrWF(((*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL) >> 3) & 1) != a2, a1, 772LL, 1LL);
  if ( !a3 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      OwnedWindow = (struct tagWND *)NextOwnedWindow(v6, a1, *((_QWORD *)a1 + 10));
      v6 = OwnedWindow;
      if ( !OwnedWindow )
        break;
      SetTopmost(OwnedWindow, a2, 0);
    }
  }
}

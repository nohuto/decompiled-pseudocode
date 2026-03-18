/*
 * XREFs of ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C001B0B0
 * Callers:
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C001B078 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C001B0B0 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     NextOwnedWindow @ 0x1C001A340 (NextOwnedWindow.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C001B0B0 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
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
      OwnedWindow = (struct tagWND *)NextOwnedWindow(v6, a1, *((_QWORD *)a1 + 13));
      v6 = OwnedWindow;
      if ( !OwnedWindow )
        break;
      SetTopmost(OwnedWindow, a2, 0);
    }
  }
}

/*
 * XREFs of CleanupInputDelegation @ 0x1C006B160
 * Callers:
 *     <none>
 * Callees:
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00127DC (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ScrubDelegatedWindow @ 0x1C006B1B0 (ScrubDelegatedWindow.c)
 *     ?ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z @ 0x1C00A75E8 (-ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z.c)
 */

void __fastcall CleanupInputDelegation(struct tagTHREADINFO *a1, struct tagBWND *a2)
{
  if ( a2 )
  {
    if ( *((_BYTE *)qword_1C01A0E28 + dword_1C01A0E30 * (unsigned int)(unsigned __int16)*(_DWORD *)a2 + 24) == 1 )
      ScrubDelegatedWindow(a2);
    else
      ScrubDelegatedBaseWindow(a2);
  }
  else
  {
    ScrubDelegatedWindows(a1);
  }
}

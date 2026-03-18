/*
 * XREFs of CleanupInputDelegation @ 0x1C0003390
 * Callers:
 *     <none>
 * Callees:
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C007C674 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ScrubDelegatedWindow @ 0x1C007C700 (ScrubDelegatedWindow.c)
 *     ?ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z @ 0x1C00E44A8 (-ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z.c)
 */

void __fastcall CleanupInputDelegation(struct tagTHREADINFO *a1, struct tagBWND *a2)
{
  if ( a2 )
  {
    if ( *((_BYTE *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)*(_DWORD *)a2 + 24) == 1 )
      ScrubDelegatedWindow(a2);
    else
      ScrubDelegatedBaseWindow(a2);
  }
  else
  {
    ScrubDelegatedWindows(a1);
  }
}

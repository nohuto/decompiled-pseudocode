/*
 * XREFs of ProcessHungWindow @ 0x1C01514D4
 * Callers:
 *     xxxHungAppDemon @ 0x1C004F540 (xxxHungAppDemon.c)
 *     NtUserQueryWindow @ 0x1C00523E0 (NtUserQueryWindow.c)
 *     EditionHandleHungWindow @ 0x1C0111590 (EditionHandleHungWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 * Callees:
 *     IsHungWindow @ 0x1C004F680 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C01162F4 (ShouldProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0151524 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall ProcessHungWindow(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagWND *v2; // rdi
  __int64 v3; // rcx

  v1 = 0;
  v2 = ShouldProcessHungWindow(a1);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *((_QWORD *)v2 + 15);
      if ( !v3 || !(unsigned int)IsHungWindow(v3) )
        break;
      v2 = (struct tagWND *)*((_QWORD *)v2 + 15);
    }
    return (unsigned int)_GhostOwnerWindowAndOwnees(v2);
  }
  return v1;
}

/*
 * XREFs of ProcessHungWindow @ 0x1C0150714
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxHungAppDemon @ 0x1C00AE720 (xxxHungAppDemon.c)
 *     NtUserQueryWindow @ 0x1C00B1580 (NtUserQueryWindow.c)
 *     EditionHandleHungWindow @ 0x1C0137510 (EditionHandleHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 * Callees:
 *     IsHungWindow @ 0x1C00AE860 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C013CAD4 (ShouldProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0150764 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
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

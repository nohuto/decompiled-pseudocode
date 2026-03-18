/*
 * XREFs of ProcessHungWindow @ 0x1C00BC598
 * Callers:
 *     xxxHungAppDemon @ 0x1C001DAC0 (xxxHungAppDemon.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     NtUserQueryWindow @ 0x1C0070EC0 (NtUserQueryWindow.c)
 *     EditionHandleHungWindow @ 0x1C010A490 (EditionHandleHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 * Callees:
 *     IsHungWindow @ 0x1C001E340 (IsHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C00BFE0C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     ShouldProcessHungWindow @ 0x1C00C0BD4 (ShouldProcessHungWindow.c)
 */

__int64 __fastcall ProcessHungWindow(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  struct tagWND *v3; // rdi
  __int64 *i; // rsi

  v1 = 0;
  v2 = ShouldProcessHungWindow(a1);
  v3 = (struct tagWND *)v2;
  if ( v2 )
  {
    for ( i = (__int64 *)(v2 + 96); *i && (unsigned int)IsHungWindow(*i); i = (__int64 *)(*i + 96) )
      v3 = (struct tagWND *)*i;
    return (unsigned int)_GhostOwnerWindowAndOwnees(v3);
  }
  return v1;
}

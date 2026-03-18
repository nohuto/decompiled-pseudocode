/*
 * XREFs of ProcessHungWindow @ 0x1C0008600
 * Callers:
 *     xxxHungAppDemon @ 0x1C0016EE0 (xxxHungAppDemon.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     NtUserQueryWindow @ 0x1C00F2B90 (NtUserQueryWindow.c)
 *     EditionHandleHungWindow @ 0x1C012B1F0 (EditionHandleHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 * Callees:
 *     IsHungWindow @ 0x1C0017040 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00F2D78 (ShouldProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C01E2788 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 */

__int64 ProcessHungWindow()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  struct tagWND *v2; // rdi
  struct tagWND **i; // rsi

  v0 = 0;
  v1 = ShouldProcessHungWindow();
  v2 = (struct tagWND *)v1;
  if ( v1 )
  {
    for ( i = (struct tagWND **)(v1 + 96); *i && (unsigned int)IsHungWindow(*i); i = (struct tagWND **)((char *)*i + 96) )
      v2 = *i;
    return (unsigned int)_GhostOwnerWindowAndOwnees(v2);
  }
  return v0;
}

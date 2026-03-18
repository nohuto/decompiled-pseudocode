/*
 * XREFs of ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C01E2788
 * Callers:
 *     ProcessHungWindow @ 0x1C0008600 (ProcessHungWindow.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 *     ShouldProcessHungWindow @ 0x1C00F2D78 (ShouldProcessHungWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01E2810 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall _GhostOwnerWindowAndOwnees(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 i; // rbx
  __int64 j; // rax

  v2 = 0;
  if ( ShouldProcessHungWindow((__int64)a1) )
    v2 = _GhostWindow(a1);
  if ( IsNonImmersiveBand((__int64)a1) )
  {
    for ( i = *((_QWORD *)a1 + 9); i; i = *(_QWORD *)(i + 72) )
    {
      for ( j = *(_QWORD *)(i + 96); j; j = *(_QWORD *)(j + 96) )
      {
        if ( (struct tagWND *)j == a1 )
        {
          if ( ShouldProcessHungWindow(i) == (struct tagWND *)i )
            v2 |= _GhostWindow((struct tagWND *)i);
          break;
        }
      }
    }
  }
  return v2;
}

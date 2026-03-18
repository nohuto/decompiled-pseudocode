/*
 * XREFs of ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C00BFE0C
 * Callers:
 *     ProcessHungWindow @ 0x1C00BC598 (ProcessHungWindow.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 *     ShouldProcessHungWindow @ 0x1C00C0BD4 (ShouldProcessHungWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00E6CC8 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall _GhostOwnerWindowAndOwnees(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 i; // rbx
  __int64 j; // rax

  v2 = 0;
  if ( ShouldProcessHungWindow(a1) )
    v2 = _GhostWindow(a1);
  if ( IsNonImmersiveBand((__int64)a1) )
  {
    for ( i = *((_QWORD *)a1 + 9); i; i = *(_QWORD *)(i + 72) )
    {
      for ( j = *(_QWORD *)(i + 96); j; j = *(_QWORD *)(j + 96) )
      {
        if ( (struct tagWND *)j == a1 )
        {
          if ( ShouldProcessHungWindow(i) == i )
            v2 |= _GhostWindow((struct tagWND *)i);
          break;
        }
      }
    }
  }
  return v2;
}

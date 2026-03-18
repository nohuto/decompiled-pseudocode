/*
 * XREFs of ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0150764
 * Callers:
 *     ProcessHungWindow @ 0x1C0150714 (ProcessHungWindow.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     ShouldProcessHungWindow @ 0x1C013CAD4 (ShouldProcessHungWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01507E8 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
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
    for ( i = *((_QWORD *)a1 + 12); i; i = *(_QWORD *)(i + 96) )
    {
      for ( j = *(_QWORD *)(i + 120); j; j = *(_QWORD *)(j + 120) )
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

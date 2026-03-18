/*
 * XREFs of MapServerToClientPfn @ 0x1C015D288
 * Callers:
 *     _GetClassInfoEx @ 0x1C001ECF4 (_GetClassInfoEx.c)
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C0134CC8 (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapServerToClientPfn(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = 666;
  while ( a1 != *(_QWORD *)(gpsi + 8LL * ((v2 & 0xFFFF3FFF) - 666) + 272) )
  {
    if ( ++v2 > 672 )
      return 0LL;
  }
  if ( a2 )
    return *(_QWORD *)(gpsi + 8LL * v2 - 4936);
  else
    return *(_QWORD *)(gpsi + 8LL * v2 - 4744);
}

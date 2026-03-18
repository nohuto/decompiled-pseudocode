/*
 * XREFs of MapServerToClientPfn @ 0x1C0134804
 * Callers:
 *     _GetClassInfoEx @ 0x1C0018304 (_GetClassInfoEx.c)
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C010B0CC (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapServerToClientPfn(__int64 a1, int a2)
{
  int v3; // ecx
  __int64 v5; // rax

  v3 = 666;
  while ( a1 != *(_QWORD *)(gpsi + 8LL * ((v3 & 0xFFFF3FFF) - 666) + 272) )
  {
    if ( ++v3 > 672 )
      return 0LL;
  }
  v5 = v3 - 666;
  if ( a2 )
    return *(_QWORD *)(gpsi + 8 * v5 + 392);
  else
    return *(_QWORD *)(gpsi + 8 * v5 + 584);
}

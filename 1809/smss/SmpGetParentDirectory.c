/*
 * XREFs of SmpGetParentDirectory @ 0x14000DC18
 * Callers:
 *     SmpShuffleMove @ 0x140015F90 (SmpShuffleMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetParentDirectory(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  unsigned __int16 i; // r8
  __int16 v4; // r8

  v2 = 0;
  for ( i = *(_WORD *)a1 >> 1; i; --i )
  {
    if ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * i) == 92 )
      break;
  }
  if ( i )
  {
    v4 = 2 * i;
    *(_WORD *)a2 = v4;
    *(_WORD *)(a2 + 2) = v4;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}

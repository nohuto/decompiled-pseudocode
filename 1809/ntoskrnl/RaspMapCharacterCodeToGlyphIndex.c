/*
 * XREFs of RaspMapCharacterCodeToGlyphIndex @ 0x14017C300
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x14017AC78 (RaspGetUnscaledGlyphData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaspMapCharacterCodeToGlyphIndex(unsigned int *a1, unsigned __int16 a2, _WORD *a3)
{
  unsigned int v3; // r10d
  unsigned int v5; // ecx
  unsigned int i; // r9d
  __int64 v8; // rdi
  unsigned __int16 v9; // r8
  __int16 v10; // cx
  __int64 v12; // r8

  v3 = 0;
  v5 = *a1;
  for ( i = 0; i < v5; ++i )
  {
    if ( *(_WORD *)(*((_QWORD *)a1 + 2) + 2LL * i) <= a2 && a2 <= *(_WORD *)(*((_QWORD *)a1 + 3) + 2LL * i) )
      break;
  }
  if ( i == v5 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v8 = *((_QWORD *)a1 + 5);
    v9 = *(_WORD *)(v8 + 2LL * i);
    if ( v9 )
    {
      v12 = a2 + i + (v9 >> 1) - *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 2LL * i);
      a2 = *(_WORD *)(*((_QWORD *)a1 + 4) + 2LL * i);
      v10 = *(_WORD *)(v8 + 2 * v12);
    }
    else
    {
      v10 = *(_WORD *)(*((_QWORD *)a1 + 4) + 2LL * i);
    }
    *a3 = a2 + v10;
  }
  return v3;
}
